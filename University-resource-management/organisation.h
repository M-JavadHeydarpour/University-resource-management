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
    QString name;
    Unit units[10];//keke karii
    int COU=0;
public:
    void Set_name(QString);
    void Set_unit(int ,Unit);
    Unit Get_unit(int);
    QString Get_name();
    int Get_COU();
};


class organ
{
private:
    QString ID;
    QString name;
    office offices[10];//bazam :|
    int COO=0;//Count Of Offices
public:
    void Set_ID(QString);
    void Set_name(QString);
    void Set_office(int , office);
    office Get_office(int);
    QString Get_ID();
    QString Get_name();
    int Get_COO();

};

#endif // ORGANISATION_H

