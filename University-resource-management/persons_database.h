#ifndef PERSONS_DATABASE_H
#define PERSONS_DATABASE_H
#include "user.h"
#include "QFile"
#include <QString>
#include <ctime>
#include <QDebug>
#include "wwf.h"

class Persons_database:public WWF
{
private:
    static int counter_ID;
    static int total;
public:
    Persons_database();
    //void Set_URL(QString URL);
    void Insert(User row);//give a line and add to the end of file.
    void Delete(QString ID);//disactives an id
    void Update(User UTD);//change data in filevoid
    void show_Persons_database();// just show data base.
    void show_column(QString col);//show a certain coumn.


    User Search_ID(QString component);//find and return id of things that you search.
    QString Search_UserName(QString component);//find and return id of things that you search.
    QString Search_Name(QString component);//find and return id of things that you search.
    QString Search_Family(QString component);//find and return id of things that you search.
    QString Search_Office_ID(QString component);//find and return id of things that you search.

    QFile Staff_generator (QString);

    int get_counter();//counter for id
    int get_total();//number of lines
    User extarct_data(QString line);
};


#endif // PERSONS_DATABASE_H
