#include "organisation.h"
void Unit::Set_cost(QString cost)
{
    this->cost = cost;
}
void Unit::Set_reqtype(QString req)
{
    this->reqtype = req;
}
void Unit::Set_name(QString name)
{
    this->name = name;
}
QString Unit::Get_cost()
{
    return cost;
}
QString Unit::Get_name()
{
    return name;
}
QString Unit::Get_reqtype()
{
    return reqtype;
}
void office::Set_name(QString name)
{
    this->name = name;
}
QString office::Get_name()
{
    return name;
}
void organ::Set_ID(QString ID)
{
    this->ID=ID;
}
void organ::Set_name(QString name)
{
    this->name=name;
}
QString organ::Get_ID()
{
    return ID;
}
QString organ::Get_name()
{
    return name;
}
