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
