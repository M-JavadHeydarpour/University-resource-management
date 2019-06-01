#include "database.h"


Database::Database()
{
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

void Database::Insert(QString qury)
{
    QFile file(URL);
    file.open(QIODevice::Append);
    QTextStream out(&file);
    out <<qury<<endl;
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
