#ifndef PERSONS_DATABASE_H
#define PERSONS_DATABASE_H
#include "user.h"
#include "persons_database.h"
#include "QFile"
#include <QString>
#include <ctime>
#include <QDebug>
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
    QString Search_ID(QString component);//find and return id of things that you search.
    QString Search_UserName(QString component);//find and return id of things that you search.
    QString Search_Name(QString component);//find and return id of things that you search.
    QString Search_Family(QString component);//find and return id of things that you search.
    QString Search_Office_ID(QString component);//find and return id of things that you search.

    int Number_of_row();//return number of data rows.
    int get_counter();//counter for id
    int get_total();//number of lines
    User extarct_data(QString line);
};

#endif // PERSONS_DATABASE_H
