#include "request_database.h"

void request_database::Insert(request row)
{
    QFile file(URL);
    file.open(QIODevice::Append);
    QTextStream out(&file);

    if(row.Get_Req_ID()=="new")
    out <<Number_of_row()+1000<<';';
    else {
        out<<row.Get_Req_ID()<<';';
    }
    out <<row.Get_App_ID()<<';';
    out <<row.Get_Organ_name()<<';';
    out <<row.Get_Office_name()<<';';
    out <<row.Get_Unit_name()<<';';
    out <<row.Get_type()<<';';
    out<<row.Get_content()<<';';
    out <<row.Get_total_cost()<<';';
    out<<"#"<<';';
    out<<row.Get_result()<<';';
    out<<"\r\n";

}

request_database::request_database()
{

}

