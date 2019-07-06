#ifndef REQUEST_H
#define REQUEST_H



#include "QString"
#include "QFile"



class request
{
private:
    QString URL;//organ file
    QString Req_ID;
    QString App_ID;
    QString Office_name;
    QString Unit_name;
    QString type;
    QString time_in_use;
    QString level;
public:
    request();

    void Set_Req_ID(QString ID);
    void Set_App_ID(QString app_id);
    void Set_Office_name(QString name);
    void Set_Unit_name(QString  name);
    void Set_type(QString type);
    void Set_time_in_use(QString time);


    QString Get_Req_ID();
    QString Get_App_ID();
    QString Get_Office_name();
    QString Get_Unit_name();
    QString Get_type();
    QString Get_time_in_use();


};

#endif // REQUEST_H
