#ifndef BRAIN_H
#define BRAIN_H

#include "office_database.h"
#include "QString"
#include "persons_database.h"
#include "request_database.h"

class brain
{
private:
    Office_database organs;
    Persons_database users;
    request_database reqs;
    static QString ID;
    static QString role;
    static int CH_index;
    request req;


public:

    brain();
    QString autenticate (QString user,QString pass);
    void signup(User add);
    User Load_user(QString ID);
    request Get_request();
    QString Get_ID();
    QString Get_role();
    int Get_CH();
    void Set_CH(int);
    void Edit(User user);
 //   organ Get_organ(int line);
   // QString Get_organ_name(int i);
    int Number_of_organs();
    Office_database Get_organs();
    request_database Load_reqs();


};

#endif // BRAIN_H
