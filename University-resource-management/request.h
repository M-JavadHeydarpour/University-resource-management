#ifndef REQUEST_H
#define REQUEST_H



#include "QString"
#include "QFile"


class content
{
private:
    QString Content;
    int total_cost;

public:
    QString Get_content();
    int Get_mount();
    void C_generate(int start_month,int start_day,int end_month,int end_day);
    void S_generate(int month,int day,int S_code);
    void H_generate(int month,int day,int start_hour,int end_hour);
    void Set_content(QString con);

};


class request
{
private:

    int cost_unit;
    QString T_cost;

    QString Req_ID="new";
    QString App_ID;
    QString Organ_name;
    QString Office_name;
    QString Unit_name;
    QString type;
    QString time_in_use;
    QString level;
    content req_content;//ramz
    QString ET_ID;
    QString log;
    QString result;

public:

    request();

    void Set_Req_ID(QString ID);
    void Set_App_ID(QString app_id);
    void Set_Organ_name(QString name);
    void Set_Office_name(QString name);
    void Set_Unit_name(QString  name);
    void Set_type(QString type);
    void Set_time_in_use(QString time);
    void Set_content(content content);
    void Set_ET_ID(QString ID);
    void Add_log(QString ET_ID , QString level);
    void Set_cost_unit(int cost);
    void Set_result(QString re);
    void Set_cost(QString TC);


    QString Get_Req_ID();
    QString Get_App_ID();
    QString Get_Organ_name();
    QString Get_Office_name();
    QString Get_Unit_name();
    QString Get_type();
    QString Get_time_in_use();

    QString Get_content();

    QString Get_ET_ID();
    int Get_total_cost();
    QString Get_result();
};

#endif // REQUEST_H
