#ifndef OFFICE_DATABASE_H
#define OFFICE_DATABASE_H

#include "QString"
#include "organisation.h"
#include "QFile"
#include "QString"
#include "QDebug"
#include "ctime"
#include "wwf.h"



class Office_database:public WWF {


public:

    Office_database();
    //void Set_URL (QString);
    void Insert(organ row);//give a line and add to the end of file.
    void Delete(QString ID);//disactives an id
    void Update(organ UTD);//change data in filevoid
    void show_Office_database();// just show data base.
    void show_column(QString col);//show a certain coumn.




    QString Select_Unit(QString office , int column);
    QString Select_office(QString organ,int column);


    bool Search_ID (QString component);//find and return id of things that you search.

    organ Search_Organ_Name (QString component);//find and return id of things that you search.
    QString Search_Office_Name(QString component);//find and return id of things that you search.
    QString Search_Family(QString component);//find and return id of things that you search.
    QString Search_Office_ID(QString component);//find and return id of things that you search.

    //QString Get_organ(int);
    int get_counter();//counter for id
    int get_total();//number of lines
    int get_office_count(QString line);//input = row
    int get_unit_count(QString line);//input=select_office()


    organ extract_data(QString line);
    Unit extract_unit(QString content);
    office extract_office(QString content);


};

#endif // OFFICE_DATABASE_H
