#include "brain.h"
#include "dataset.h"

QString brain::ID="";
QString brain::role="";
int brain:: CH_index=0;
brain::brain()
{
    content con;
    con.Set_content("_4*15_4*16");

    req.Set_Req_ID("10000");
    req.Set_App_ID("1003");
    req.Set_Organ_name("Refah");
    req.Set_Office_name("anzali");
    req.Set_Unit_name("t1");
    req.Set_type("C");
    req.Set_cost(200000);
    req.Set_content(con);
    req.Set_ET_ID("1005");
    req.Set_result("N");
    req.Set_reciver("E");
    char h;
    h=(char)(CH_index+48);
    QString b;
    b.append(h);
    req.Set_level(b);
}
QString brain::autenticate(QString username, QString pass)
{
    User s=users.Search_ID(users.Search_UserName(username));
    if(s.Get_password()==pass){
        ID=s.Get_ID();
        role=s.Get_role();
        return s.Get_role();}
    else {
        return "no";
    }
}

void brain::signup(User add)
{
    users.Insert(add);
}

User brain::Load_user(QString ID)
{
    return users.Search_ID(ID);

}

request brain::Get_request()
{
    return req;

}

QString brain::Get_ID()
{
    return ID;
}

QString brain::Get_role()
{
    return role;
}

int brain::Get_CH()
{
    return CH_index;
}

void brain::Set_CH(int i)
{
    CH_index=i;
}

void brain::Edit(User user)
{
    users.Update(user);
}

/*QString brain::Get_organ_name(int i)
{
    return organs.Get_organ(i);
}*/
/*
QString brain::Get_organs(int i)
{
    return organs.Select_obj(i,1);
}*/

int brain::Number_of_organs()
{
    return organs.Number_of_row();
}

Office_database brain::Get_organs()
{
    return organs;
}

request_database brain::Load_reqs()
{
    return reqs;
}








