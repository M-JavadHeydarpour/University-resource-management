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

};

#endif // WWF_H
