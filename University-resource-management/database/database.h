#ifndef DATABASE_H
#define DATABASE_H

#include <QDebug>
#include <QFile>
#include <QString>



class Database
{
private:
    QString URL;
public:
    Database();
    void Set_URL(QString URL);

    void Add_Table();//make a new file with a certain headers.
    void Insert(QString qury);//give a line and add to the end of file.
    void Update();//change data in file
    void show_database();// just show data base.
    void show_column(QString col);//show a certain coumn.
    QString Search(QString col,QString thing);//find and return id of things that you search.
    QString Select(int row );//return a row by id



};

#endif // DATABASE_H
