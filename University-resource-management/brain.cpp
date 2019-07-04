#include "brain.h"
#include "dataset.h"


brain::brain()
{
}

QString brain::autenticate(QString username, QString pass)
{
    if(users.Search_ID(users.Search_UserName(username)).Get_password()==pass)
        return "yes";
    else {
        return "no";
    }
}

void brain::signup(User add)
{
    users.Insert(add);
}
