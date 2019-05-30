#ifndef DATABASE_H
#define DATABASE_H
#include <QDebug>
#include <QFile>



class Database
{
private:

public:
    Database();
    void Add_Table();//make a new file with a certain headers.
    void Insert();
    void Update();

};

#endif // DATABASE_H
