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
    Organ_name=name
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

void request::Set_ET_ID(QString ID)
{
    ET_ID=ID;
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

QString request::Get_ET_ID()
{
    return ET_ID;
}
