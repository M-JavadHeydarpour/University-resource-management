#include "office_database.h"

void Office_database::Set_URL(QString URL)
{
    this->URL=URL;
}


void Office_database::Insert(organ row)
{
    QFile file(URL);
    file.open(QIODevice::Append);
    QTextStream out(&file);



}


