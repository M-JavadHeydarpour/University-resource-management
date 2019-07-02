#ifndef USER_H
#define USER_H
#include "QString"
#include <ctime>
class User
{
private:
    QString ID,
    name,
    family,
    phonenum,
    email,
    username,
    password,
    address,
    imgurl,
    role,
    office_ID;

public:
    void Rand_ID();//rand id for new user(6 digit number)

    void Set_ID(QString ID);
    void Set_name(QString name);
    void Set_family(QString family);
    void Set_phonenum(QString phonenum);
    void Set_email(QString email);
    void Set_username(QString username);
    void Set_password(QString password );
    void Set_imgurl(QString imgurl);
    void Set_role(QString role);
    void Set_address(QString add);
    void Set_office_ID(QString office_ID);

    QString Get_ID();
    QString Get_name();
    QString Get_family();
    QString Get_phonenum();
    QString Get_email();
    QString Get_username();
    QString Get_password();
    QString Get_imgurl();
    QString Get_role();
    QString Get_address();
    QString Get_office_ID();



};

#endif // USER_H
