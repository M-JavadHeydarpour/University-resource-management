#include "dataset.h"

Database::Database()
{
}

void Database::Set_URL(QString URL)
{
    this->URL =URL;
}

void Database::Add_Table()
{

    QFile file(URL);
    file.open(QIODevice::Append);


    QTextStream out(&file);
    out << "id;ID;name;family;phonenum;email;username;password;imgurl;role"<<endl;
    file.close();
}

void Database::Insert(User row)
{
    QFile file(URL);
    file.open(QIODevice::Append);
    QTextStream out(&file);

    //write user info on file

    out<<"\r\n";
    //(row.Get_ID()!="")?out <<row.Get_ID()<<';':out<<"#"<<";";
    (row.Get_name()!="")?out <<row.Get_name()<<';':out<<"#"<<";";
    (row.Get_family()!="")?out <<row.Get_family()<<';':out<<"#"<<";";
    (row.Get_phonenum()!="")?out <<row.Get_phonenum()<<';':out<<"#"<<";";
    (row.Get_email()!="")?out <<row.Get_email()<<';':out<<"#"<<";";
    (row.Get_username()!="")?out <<row.Get_username()<<';':out<<"#"<<";";
    (row.Get_password()!="")?out <<row.Get_password()<<';':out<<"#"<<";";
    (row.Get_imgurl()!="")?out <<row.Get_imgurl()<<'U'<<';':out<<"#"<<';'<<'U'<<';';

    //out<<'\n';

    file.close();
}

void Database::Update()
{

}
QString Database::Select(int row)
{
    //open file
    QFile file(URL);
    file.open(QIODevice::ReadOnly);

    int counter=0;// use for arrive to requst line.
    QString line;
    while(!file.atEnd()){

        line=file.readLine();
        if(row==counter){
            break;
        }

        counter++;
    }
    file.close();


    return line;

}
QString Database::Select_obj(int row, int column)
{

    QString line;
    QString result="";
    line =Select(row);
    int pos_semi_1=0,pos_semi_2=0;//position of semicolons(;).firs one and second.
    for (int i=0;line[i]!='\x0'&&column>=0;i++){
        if(line[i]==';'){//save position of semis.
            pos_semi_1=pos_semi_2;
            pos_semi_2=i;
            column--;
        }
    }
    //for first column.
    if (pos_semi_1==0)
        pos_semi_1--;
    for (int i=pos_semi_1+1;i<pos_semi_2;i++){
        result.append(line[i]);
    }
    return result;
}

int Database::Number_of_row()
{
    QFile file(URL);
    file.open(QIODevice::ReadOnly);

    int counter=0;
    QString line;
    while(!file.atEnd()){
        file.readLine();
        counter++;
    }
    file.close();
    return counter;
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
