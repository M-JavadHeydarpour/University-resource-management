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
QString WWF::Select(int row)
{
    //open file
    QFile file(URL);
    file.open(QIODevice::ReadOnly);

    int counter=0;// use for arrive to requst line.
    QString line;
    while(!file.atEnd()){

        line=file.readLine();
        if(row==counter){
            break;
        }

        counter++;
    }
    file.close();


    return line;

}

