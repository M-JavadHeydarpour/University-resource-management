#include "user.h"
//---------------------------------------USER----------------------------------------------

void User::Rand_ID()
{
    srand((unsigned)time(NULL));
    QString m_id="";//rand charactor added into it
    char rnum;//rand charactor
    for (int i=0;i<6;i++){
        rnum =(rand() % 10)+48;
        m_id.append(rnum);
    }
    ID = m_id;//set id
}



void User::Set_ID(QString ID)
{
    this->ID=ID;
}
void User::Set_name(QString name){
    this->name=name;
}
void User::Set_family(QString family)
{
    this->family=family;
}
void User::Set_phonenum(QString phonenum){
    this->phonenum=phonenum;
}
void User::Set_email(QString email){
    this->email=email;
}
void User::Set_username(QString username){
    this->username=username;
}
void User::Set_password(QString password ){
    this->password=password;
}
void User::Set_imgurl(QString imgurl){
    this->imgurl=imgurl;
}

void User::Set_role(QString role){
    this->role=role;
}

void User::Set_address(QString add){
    this->address=add;
}

void User::Set_office_ID(QString office_ID){
    this->office_ID=office_ID;
}

QString User::Get_ID(){
    return ID;
}

QString User::Get_name(){
    return name;
}

QString User::Get_family(){
    return family;
}

QString User::Get_phonenum(){
    return phonenum;
}

QString User::Get_email(){
    return email;
}

QString User::Get_username(){
    return username;
}

QString User::Get_password(){
    return password;
}

QString User::Get_imgurl(){
    return imgurl;
}

QString User::Get_role(){
    return role;
}
QString User::Get_address()
{
    return address;
}
QString User::Get_office_ID()
{
    return office_ID;
}
