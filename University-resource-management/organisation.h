#ifndef ORGANISATION_H
#define ORGANISATION_H

#include "QString"
class Unit{
private:
    QString name;
    QString reqtype;
    QString cost;
public:
    void Set_name(QString name);
    void Set_reqtype(QString req);
    void Set_cost(QString cost);
    QString Get_name();
    QString Get_reqtype ();
    QString Get_cost ();
};
class office
{
private:
    Unit units[10];
public:

};

class organ
{
    private:
        QString ID;
        QString name;
        office offices[10];
};

#endif // ORGANISATION_H
