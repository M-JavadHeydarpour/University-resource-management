#include "wwf.h"


int WWF::Number_of_row()
{
    QFile file(URL);
    file.open(QIODevice::ReadOnly);

    int counter=0;
    while(!file.atEnd()){
        file.readLine();
        counter++;
    }

    file.close();
    //qDebug()<<counter;
    return counter;
}
