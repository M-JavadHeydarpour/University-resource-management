#include "login.h"
#include "ui_login.h"
#include "userpanel.h"
#include "QMessageBox"
#include "expertspanel.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

}


Login::~Login()
{
    delete ui;
}





void Login::on_pushButton_signup_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Login::on_PB_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Login::on_pb_getinfo_clicked()
{
    User sign;
    Database sign2;
    sign2.Set_URL("person.txt");
    // pich info from ui and storge on RAM

    sign.Set_name(ui->LE_name->text());
    sign.Set_family(ui->LE_family->text());
    sign.Set_email(ui->LE_email->text());
    sign.Set_phonenum(ui->LE_phone->text());
    sign.Set_password(ui->LE_pass_2->text());
    sign.Set_username(ui->LE_user_2->text());

    ui->stackedWidget->setCurrentIndex(0);
    //insert info to file.

    sign2.Insert(sign);


}

void Login::on_PB_login_clicked()
{
    //create a Database obj for use moduls and Extraction data.
    Database check;
    check.Set_URL("person.txt");

    QString dataline;//each row of database.

    bool flag=false;//for check input lineEdit is true or not

    //chek username & password
    for (int i=0;i<check.Number_of_row();i++){
        if(check.Select_obj(i,5)==ui->LE_user->text()&& check.Select_obj(i,6)==ui->LE_pass->text()){
            flag=true;
            qDebug()<<"Welcome!!";
            }
    }


    if (!flag)
        qDebug()<<"username or password incorrect!!";
}
