#ifndef BRAIN_H
#define BRAIN_H

#include "office_database.h"
#include "QString"
#include "persons_database.h"

class brain
{
private:
    Office_database organs;
    Persons_database users;
    static QString ID;
public:
    brain();
    QString autenticate (QString user,QString pass);
    void signup(User add);
    User Load_user(QString ID);
    QString Get_ID();
    void Edit(User user);

};

#endif // BRAIN_H
