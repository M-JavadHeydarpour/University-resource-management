#include "persons_database.h"
//---------------------------------------PERSONS DATABASE----------------------------------------------

int Persons_database::counter_ID=1000;
int Persons_database::total=0;
Persons_database::Persons_database()
{

}
void Persons_database::Set_URL(QString URL)
{
    this->URL =URL;
}
void Persons_database::Insert(User row)
{
    QFile file(URL);
    file.open(QIODevice::Append);
    QTextStream out(&file);

    //write user info on file


    out<<"\r\n";
    out <<Number_of_row()+1000<<';';
    out <<row.Get_username()<<';';
    out <<row.Get_password()<<';';
    out <<row.Get_name()<<';';
    out <<row.Get_family()<<';';
    out <<row.Get_email()<<';';
    out <<row.Get_address()<<';';
    out <<row.Get_phonenum()<<';';
    out<<"#"<<";";//image url
    out<<'U'<<';';
    out<<'#'<<';';//for office ID
    counter_ID++;
    total++;



    file.close();
}
QString Persons_database::Select(int row)
{
    //open file
    QFile file(URL);
    file.open(QIODevice::ReadOnly);

    int counter=0;// use for arrive to requst line.
    QString line;
    while(!file.atEnd()){

        line=file.readLine();
        if(row==counter){
            break;
        }

        counter++;
    }
    file.close();


    return line;

}
QString Persons_database::Select_obj(QString line ,int column)
{
    QString result="";
    int pos_semi_1=0,pos_semi_2=0;//position of semicolons(;).firs one and second.
    for (int i=0;line[i]!='\x0'&&column>=0;i++){
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
QString Persons_database::Select_obj(int row ,int column)
{
    QString result="";
    QString line;
    line=Select(row);
    int pos_semi_1=0,pos_semi_2=0;//position of semicolons(;).firs one and second.
    for (int i=0;line[i]!='\x0'&&column>=0;i++){
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
int Persons_database::Number_of_row()
{
    QFile file(URL);
    file.open(QIODevice::ReadOnly);

    int counter=0;
    while(!file.atEnd()){
        file.readLine();
        counter++;
    }

    file.close();
    //qDebug()<<counter;
    return counter;
}
User Persons_database::extarct_data(QString line)
{
    User mouse;
    mouse.Set_ID(Select_obj(line,0));
    mouse.Set_username( Select_obj(line,1));
    mouse.Set_password( Select_obj(line,2));
    mouse.Set_name (Select_obj(line,3));
    mouse.Set_family(Select_obj(line,4));
    mouse.Set_email(Select_obj(line,5));
    mouse.Set_address(Select_obj(line,6));
    mouse.Set_phonenum(Select_obj(line,7));
    mouse.Set_imgurl(Select_obj(line,8));
    mouse.Set_role(Select_obj(line,9));
    mouse.Set_office_ID(Select_obj(line,10));
    return mouse;
}
QString Persons_database::Search_ID(QString component)
{
    QFile file(URL);
    file.open(QIODevice::ReadOnly);
    int i=0;
    while(!file.atEnd())
    {
        if(extarct_data(Select(i)).Get_ID()==component)
            Select(i).append("0");
            return extarct_data(Select(i)).Get_ID();
        i++;
    }
}
QString Persons_database::Search_UserName(QString component)
{
    QFile file(URL);
    file.open(QIODevice::ReadOnly);
    int i=0;
    while(!file.atEnd())
    {
        if(extarct_data(Select(i)).Get_username()==component)
            return extarct_data(Select(i)).Get_ID();
        i++;
        if(i>=Number_of_row())
            break;
    }
    return "";
}
QString Persons_database::Search_Name(QString component)
{
    QString names="";
    QFile file(URL);
    file.open(QIODevice::ReadOnly);
    int i=0;
    while(!file.atEnd())
    {
        if(extarct_data(Select(i)).Get_name()==component){
            names.append( extarct_data(Select(i)).Get_ID());
            names.append(";");
        }
        i++;
        if(i>=Number_of_row())
            break;
    }
    return names;
}
QString Persons_database::Search_Family(QString component)
{
    QString names="";
    QFile file(URL);
    file.open(QIODevice::ReadOnly);
    int i=0;
    while(!file.atEnd())
    {
        if(extarct_data(Select(i)).Get_family()==component){
            names.append( extarct_data(Select(i)).Get_ID());
            names.append(";");
        }
        i++;
        if(i>=Number_of_row())
            break;
    }
    return names;
}
QString Persons_database::Search_Office_ID(QString component)
{
    QString names="";
    QFile file(URL);
    file.open(QIODevice::ReadOnly);
    int i=0;
    while(!file.atEnd())
    {
        if(extarct_data(Select(i)).Get_office_ID()==component){
            names.append( extarct_data(Select(i)).Get_ID());
            names.append(";");
        }
        i++;
        if(i>=Number_of_row())
            break;
    }
    return names;
}
void Persons_database::Delete(QString ID)
{
    QFile file(URL);
    file.open(QIODevice::ReadOnly);
    QString *KIM;
    KIM=new QString[total];
    int i=0;
    while(! file.atEnd())
    {
        if(Select_obj(Select(i),0)!=ID)
        {
            KIM[i]=Select(i);
        }
        i++;
    }
    file.close();
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out<<"";
    file.close();
    file.open(QIODevice::Append);
    QTextStream out1(&file);
    for(int j=0;j<total-1;j++)
    {
        out1<<KIM[j]<<'\r\n';
    }
}
void Persons_database::Update(User UTD)
{
    Delete(UTD.Get_ID());
    Insert(UTD);
}
