#include "request.h"




request::request()
{

}

void request::Set_Req_ID(QString ID)
{
    Req_ID=ID;

}

void request::Set_App_ID(QString ID)
{
    App_ID =ID;
}

void request::Set_Organ_name(QString name)
{
    Organ_name=name;
}

void request::Set_Office_name(QString name)
{
    Office_name=name;
}

void request::Set_Unit_name(QString name)
{
    Unit_name=name;
}

void request::Set_type(QString type)
{
    this->type=type;
}

void request::Set_time_in_use(QString time)
{
    time_in_use=time;
}

void request::Set_content(content content)
{
    req_content=content;
}

void request::Set_ET_ID(QString ID)
{
    ET_ID=ID;
}

void request::Set_cost_unit(int cost)
{
    cost_unit=cost;
}

void request::Set_result(QString re)
{
    result=re;
}

void request::Set_cost(int TC)
{
    T_cost=TC;
}



QString request::Get_Req_ID()
{
    return Req_ID;
}

QString request::Get_App_ID()
{
    return  App_ID;
}

QString request::Get_Organ_name()
{
    return Organ_name;
}

QString request::Get_Office_name()
{
    return Office_name;
}

QString request::Get_Unit_name()
{
    return  App_ID;
}

QString request::Get_type()
{
    return type;
}

QString request::Get_time_in_use()
{
    return time_in_use;
}

QString request::Get_content()
{
    return req_content.Get_content();
}

QString request::Get_ET_ID()
{
    return ET_ID;
}

int request::Get_total_cost()
{
    return cost_unit * req_content.Get_mount();
}

QString request::Get_result()
{
    return result;
}

QString content::Get_content()
{
    return Content;
}

int content::Get_mount()
{
    return total_cost;
}

void content::C_generate(int start_month, int start_day, int end_month, int end_day)
{
    QString generated="";
    int mount=0;
    if(start_month==end_month)
    for (int i=start_day;i<=end_day;i++)
    {
        generated.append("_");
        generated.append(start_month);
        generated.append("*");
        generated.append(i);
        mount++;
    }
    else
        {
        for (int i=start_day;i<=30;i++){
            generated.append("_");
            generated.append(start_month);
            generated.append("*");
            generated.append(i);
            mount++;
        }
        for (int i=1;i<=end_day;i++){
        generated.append("_");
        generated.append(end_month);
        generated.append("*");
        generated.append(i);
        mount++;
        }

   }
    total_cost=mount ;
    Content= generated;

}

void content::S_generate(int month, int day, int S_code)
{
    QString generated="";
    generated.append("+");
    generated.append(month);
    generated.append("/");
    generated.append(day);
    generated.append("_");
    generated.append(S_code);

    Content= generated;
}

void content::H_generate(int month, int day, int start_hour, int end_hour)
{
    QString generated="";
    int mount=0;

    generated.append("+");
    generated.append(month);
    generated.append("/");
    generated.append(day);

    for(int i=start_hour;i<=end_hour;i++){
        generated.append("@");
        generated.append(i);
        mount++;
    }

    total_cost=mount;
    Content= generated;
}

void content::Set_content(QString con)
{
    Content=con;
}


