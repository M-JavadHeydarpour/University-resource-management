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
    static int counter_ID;
    static int total;
public:
    Persons_database();
    void Set_URL(QString URL);
    void Insert(User row);//give a line and add to the end of file.
    void Delete(QString ID);//disactives an id
    void Update(User UTD);//change data in filevoid
    void show_Persons_database();// just show data base.
    void show_column(QString col);//show a certain coumn.
    QString Select(int row );//return a row by id
    QString Select_obj(QString line ,int column);//return a column from a certain row
    QString Select_obj(int row ,int column);//return a column from a certain row
    bool Search_ID(QString component);//find and return id of things that you search.
    QString Search_UserName(QString component);//find and return id of things that you search.
    QString Search_Name(QString component);//find and return id of things that you search.
    QString Search_Family(QString component);//find and return id of things that you search.
    QString Search_Office_ID(QString component);//find and return id of things that you search.

    int Number_of_row();//return number of data rows.
    int get_counter();//counter for id
    int get_total();//number of lines
    User extarct_data(QString line);
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



};

class Office
{
private:
    QString name;
    QString boss;


};

#endif // DATASET_H
