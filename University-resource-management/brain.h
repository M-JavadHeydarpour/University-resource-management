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
public:
    brain();
    QString autenticate (QString user,QString pass);
    void signup(User add);

};

#endif // BRAIN_H
