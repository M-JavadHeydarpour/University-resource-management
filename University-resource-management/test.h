#ifndef TEST_H
#define TEST_H
#include "qstring.h"
class Database
{
private:
    QString URL;
public:
    Database();
    void Set_URL(QString URL);

    void Add_Table();//make a new file with a certain headers.
   // void Insert(User row);//give a line and add to the end of file.
    void Update();//change data in filevoid
    void show_database();// just show data base.
    void show_column(QString col);//show a certain coumn.
    QString Search(QString col,QString thing);//find and return id of things that you search.
    QString Select(int row );//return a row by id
    QString Select_obj(int row,int column);//return a column from a certain row
    int Number_of_row();//return number of data rows.
};
class user_database:Database
{
private:
    void Add_Table();//make a new file with a certain headers.
};
void user_database::Add_Table()
{

}
#endif // TEST_H
