#ifndef DATASET_H
#define DATASET_H


#include <QDebug>
#include <QFile>
#include <QString>
#include <ctime>

class User;//base information of persons
class Persons_database;//work with every file
class Office;





class Persons_database
{
private:
    QString URL;
public:
    Persons_database();
    void Set_URL(QString URL);

    void Add_Table();//make a new file with a certain headers.
    void Insert(User row);//give a line and add to the end of file.
    void Update();//change data in filevoid
    void show_Persons_database();// just show data base.
    void show_column(QString col);//show a certain coumn.
    QString Search(QString col,QString thing);//find and return id of things that you search.
    QString Select(int row );//return a row by id
    QString Select_obj(int row,int column);//return a column from a certain row
    int Number_of_row();//return number of data rows.
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
    address,
    imgurl,
    role,
    available,
    office_ID;

public:
    void Rand_ID();//rand id for new user(6 digit number)

    void Set_ID(QString ID);
    void Set_name(QString name);
    void Set_family(QString family);
    void Set_phonenum(QString phonenum);
    void Set_email(QString email);
    void Set_username(QString username);
    void Set_password(QString password );
    void Set_imgurl(QString imgurl);
    void Set_role(QString role);
    void Set_address(QString add);
    void change_available(QString ava);
    void Set_office_ID(QString office_ID);

    QString Get_ID();
    QString Get_name();
    QString Get_family();
    QString Get_phonenum();
    QString Get_email();
    QString Get_username();
    QString Get_password();
    QString Get_imgurl();
    QString Get_role();
    QString Get_address();
    QString Get_office_ID();
    QString Get_available();




};

class Office
{
private:
    QString name;
    QString boss;


};

#endif // DATASET_H
