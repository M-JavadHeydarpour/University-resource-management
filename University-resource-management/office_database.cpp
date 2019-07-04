#include "office_database.h"



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
QString Office_database::Select_obj(QString line ,int column)
{
    QString result="";
    int pos_semi_1=0,pos_semi_2=0;//position of semicolons(;).firs one and second.
    for (int i=0;line[i]!="\x0"&&column>=0;i++){
        if(line[i]==';'){//save position of semis.
            pos_semi_1=pos_semi_2;
            pos_semi_2=i;
            column--;
        }
    }

    //for first column.
    if (pos_semi_1==0)
        pos_semi_1--;
    for (int i=pos_semi_1+1;i<pos_semi_2;i++){
        result.append(line[i]);
    }
    return result;
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

office Office_database::extract_office(QString content)
{
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
}
Unit Office_database::extract_unit(QString content)
{
    Unit result;
    QString name_extracted="";
    QString reqtype_extract="";
    QString cost_extract="";

    int i;
    for (i=0;content[i]!='[';i++)
        name_extracted.append(content[i]);
    i+=2;
    for (i;content[i]!=')';i++)
        reqtype_extract.append(content[i]);
    i+=2;
    for (i;content[i]!='$';i++)
        cost_extract.append(content[i]);

    result.Set_name(name_extracted);
    result.Set_reqtype(reqtype_extract);
    result.Set_cost(cost_extract);

    return result;

}


