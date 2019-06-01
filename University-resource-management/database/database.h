#ifndef DATABASE_H
#define DATABASE_H

#include <QDebug>
#include <QFile>
#include <QString>

class User;
class Database;

class Database
{
private:
    QString URL;
public:
    Database();
    void Set_URL(QString URL);

    void Add_Table();//make a new file with a certain headers.
    void Insert(User row);//give a line and add to the end of file.
    void Update();//change data in filevoid
    void show_database();// just show data base.
    void show_column(QString col);//show a certain coumn.
    QString Search(QString col,QString thing);//find and return id of things that you search.
    QString Select(int row );//return a row by id



};

class User
{
private:
    QString ID,
    name,
    family,
    phonenum,
    email,
    username,
    password,
    imgurl,
    role;

public:
    void Set_ID(QString ID);
    void Set_name(QString name);
    void Set_family(QString family);
    void Set_phonenum(QString phonenum);
    void Set_email(QString email);
    void Set_username(QString username);
    void Set_password(QString password );
    void Set_imgurl(QString imgur);
    void Set_role(QString role);

    QString Get_ID();
    QString Get_name();
    QString Get_family();
    QString Get_phonenum();
    QString Get_email();
    QString Get_username();
    QString Get_password();
    QString Get_imgurl();
    QString Get_role();

};

#endif // DATABASE_H
