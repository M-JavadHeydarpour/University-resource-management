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
    out<<Number_of_row()+100<<";";
    out<<row.Get_name()<<";";
    for(int i=0;i<row.Get_COO();i++)
    {
        out<<row.Get_office(i).Get_name()<<"{";
        for(int j=0;j<row.Get_office(i).Get_COU();j++)
        {
            Unit U= row.Get_office(i).Get_unit(j);
            out<<U.Get_name()<<"[("<<U.Get_reqtype()<<")$"<<U.Get_cost()<<"$],";
        }
        out<<"},";
    }
    out<<";"<<'\r\n';
}


