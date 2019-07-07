#ifndef WWF_H
#define WWF_H

#include "QString"
#include "QFile"
#include "QString"
#include "QDebug"

class WWF
{

protected:
    QString URL;
public:
    int Number_of_row();//return number of data rows.
    QString Select(int row );//return a row by id
    void Set_URL(QString URL);
    QString Get_URL();

    QString Select_obj(int row ,int column);//return a column from a certain row
    QString Select_obj(QString line ,int column);//return a column from a certain row

};


#endif // WWF_H
