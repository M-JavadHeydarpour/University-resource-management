#include "request_database.h"

void request_database::Insert(request row)
{
    QFile file(URL);
    file.open(QIODevice::Append);
    QTextStream out(&file);

    if(row.Get_Req_ID()=="new")
    out <<Number_of_row()+10000<<';';
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

request request_database::extract_data(QString line)
{

    request result;
    content con;
    con.Set_content(Select_obj(line,6));
    result.Set_Req_ID(Select_obj(line,0));
    result.Set_App_ID(Select_obj(line,1));
    result.Set_Organ_name(Select_obj(line,2));
    result.Set_Office_name(Select_obj(line,3));
    result.Set_Unit_name(Select_obj(line,4));
    result.Set_type(Select_obj(line,5));
    result.Set_content(con);
    result.Set_cost(Select_obj(line,7));
    result.Set_ET_ID(Select_obj(line,8));
    result.Set_result(Select_obj(line,9));
}

