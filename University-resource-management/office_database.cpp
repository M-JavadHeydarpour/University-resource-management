#include "office_database.h"



Office_database::Office_database()
{
    URL="organs.txt";
}

void Office_database::Insert(organ row)
{
    QFile file(URL);
    file.open(QIODevice::Append);
    QTextStream out(&file);
    out<<Number_of_row()+100<<";";
    out<<row.Get_name()<<";";
    for(int i=0;i<row.Get_COO();i++)
    {
        out<<row.Get_office(i).Get_name()<<"{";
        for(int j=0;j<row.Get_office(i).Get_COU();j++)
        {
            Unit U= row.Get_office(i).Get_unit(j);
            out<<U.Get_name()<<"[("<<U.Get_reqtype()<<")$"<<U.Get_cost()<<"$],";
        }
        out<<"},";
    }
    out<<";"<<"\r\n";
}







QString Office_database::Select_Unit(QString office,int column)
{
    QStringList result_array = office.split('*');
    QString unit_0 = result_array[0];
    int position = 0;
    for(int i =0 ;unit_0[i]!="\x0";i++)
    {
        if(unit_0[i] =="{")
        {
            position = i ;
            break;
        }
    }

    result_array[0] = result_array[0].mid(position+1);
    return result_array[column];
}

QString Office_database::Select_office(QString organ,int column)
{
    QString result="";
    int pos_comma_1=0,pos_comma_2=0;//position of semicolons(;).firs one and second.
    for (int i=0;organ[i]!="\x0"&&column>=0;i++){
        if(organ[i]==','){//save position of semis.
            pos_comma_1=pos_comma_2;
            pos_comma_2=i;
            column--;
        }
    }

    //for first column.
    if (pos_comma_1==0)
        pos_comma_1--;
    for (int i=pos_comma_1+1;i<pos_comma_2;i++){
        result.append(organ[i]);
    }
    return result;

}

organ Office_database::Search_Organ_Name(QString component)
{
    organ result;

    for (int i=0;i<Number_of_row();i++){
        if (Select_obj(i,1)==component){
            result=extract_data(Select(i));
        }
    }
    return result;

}

office Office_database::Search_Office_Name(QString component)
{
    organ result;

    for (int i=0;i<Number_of_row();i++){

            result=extract_data(Select(i));
            for(int j=0;j<result.Get_COO();j++)
            if(result.Get_office(j).Get_name()==component)
                return result.Get_office(j);
        }


}

Unit Office_database::Search_Unit_Name(QString component)
{
    organ result;

    for (int i=0;i<Number_of_row();i++){

            result=extract_data(Select(i));
            for(int j=0;j<result.Get_COO();j++)
                for(int k=0;k<result.Get_office(j).Get_COU();j++)
                    if(result.Get_office(j).Get_unit(k).Get_name()==component)
                        return result.Get_office(j).Get_unit(k);
        }

}

int Office_database::get_office_count(QString line)
{
    int cont=0;
    for (int i=0;line[i]!='\x0';i++)
        if(line[i]=='{')
            cont++;

    return cont;
}

int Office_database::get_unit_count(QString line)
{
    int cont=0;
    for (int i=0;line[i]!='\x0';i++)
        if(line[i]=='*')
            cont++;

    return cont;
}

//QString Office_database::Get_organ(int i)
//{
//    return extarct_data( Select(i)).Get_name();
//}

office Office_database::extract_office(QString content)//anzali{1t[(C)$500$]*2t[(C)$1000$]*4t[(C)$2000$]*}
{
    office result;
    QString name_extracted;
    for (int i=0;content[i]!='{';i++)
    {
        name_extracted.append(content[i]);
    }
    result.Set_name(name_extracted);
    for (int i=0;i<get_unit_count(content);i++){
        result.Set_unit(i,extract_unit(Select_Unit(content,i)));
    }

    return result;

    /*
    office result;
    QString temp;
    int i=0;
    while(content[i]!="{")
        temp.append(content[i]);
    result.Set_name(temp);
    int counter=0;
    while(content[i]!="}")
        if(content[i]=="*")
            counter++;
    while(counter!=0)
    {
        result.Set_unit(counter-1,extract_unit(Select_Unit(content,counter-1)));
    }

    return result;
*/
}

Unit Office_database::extract_unit(QString content)//1t[(C)$500$]
{
    Unit result;
    QString name_extracted="";
    QString reqtype_extracted="";
    QString cost_extracted="";

    int i;
    for (i=0;content[i]!='[';i++)
        name_extracted.append(content[i]);
    i+=2;
    for (i;content[i]!=')';i++)
        reqtype_extracted.append(content[i]);
    i+=2;
    for (i;content[i]!='$';i++)
        cost_extracted.append(content[i]);

    result.Set_name(name_extracted);
    result.Set_reqtype(reqtype_extracted);
    result.Set_cost(cost_extracted);


    return result;

}
organ Office_database::extract_data(QString line)//not complite
{
    organ result;
    //office result_2;

    result.Set_ID(Select_obj(line,0));
    result.Set_name(Select_obj(line,1));

    for (int i=0;i<get_office_count(line);i++){
        result.Set_office(i,extract_office(Select_office(Select_obj( line,2),i)));
    }

    return result;
}
