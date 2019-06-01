#include "database.h"


Database::Database(QString URL)
{
    this->URL = URL;
}

void Database::Set_URL(QString URL)
{
    this->URL =URL;
}

void Database::Add_Table()
{

    QFile file(URL);
    file.open(QIODevice::Append);


    QTextStream out(&file);
    out << "id;ID;name;family;phonenum;email;username;password;imgurl;role"<<endl;
    file.close();
}

void Database::Insert(User row)
{
    QFile file(URL);
    file.open(QIODevice::Append);
    QTextStream out(&file);

    //write user info on file
    out <<row.Get_ID()<<';';
    out <<row.Get_name()<<';';
    out <<row.Get_family()<<';';
    out <<row.Get_phonenum()<<';';
    out <<row.Get_email()<<';';
    out <<row.Get_username()<<';';
    out <<row.Get_password()<<';';
    out <<row.Get_name()<<';';
    out <<row.Get_imgurl()<<';';
    out <<row.Get_role();

    file.close();
}

void Database::Update()
{

}
QString Database::Select(int row)
{
    QFile file(URL);
    file.open(QIODevice::ReadOnly);
    int counter=0;
    QString line;
    while(!file.atEnd())
    {
        if (counter==row){
            line=file.readLine();
            break;
        }
        counter++;
    }
    file.close();
    return  line;



}
