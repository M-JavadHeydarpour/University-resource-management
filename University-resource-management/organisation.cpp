#include "organisation.h"
organ::organ()
{

}

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

void office::Set_unit(int loc, Unit u)
{
    units[loc]=u;
    COU++;
  }

Unit office::Get_unit(int loc)
{
    return units[loc];
}
QString office::Get_name()
{
    return name;
}

int office::Get_COU()
{
    return COU;
}

void organ::Set_ID(QString ID)
{
    this->ID=ID;
}
void organ::Set_name(QString name)
{
    this->name=name;
}

void organ::Set_office(int loc, office of)
{
    offices[loc] = of;
    COO++;
    /*offices[loc].Set_name(of.Get_name());
    offices[loc].Set_unit(of.Get_unit());*/
    //if obj = obj not work use this code (a few bug )
}

office organ::Get_office(int loc)
{
    return offices[loc];
}
QString organ::Get_ID()
{
    return ID;
}
QString organ::Get_name()
{
    return name;
}

int organ::Get_COO()
{
    return COO;
}



