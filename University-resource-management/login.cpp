#include "login.h"
#include "ui_login.h"
#include "userpanel.h"
#include "QMessageBox"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

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
    Database sign2("info.txt");
    // pich info from ui and storge on ram
    sign.Set_name(ui->LE_name->text());
    sign.Set_family(ui->LE_family->text());
    sign.Set_email(ui->LE_email->text());
    sign.Set_phonenum(ui->LE_phone->text());
    sign.Set_password(ui->LE_pass->text());
    sign.Set_username(ui->LE_user_2->text());

    //insert info to file.
    sign2.Insert(sign);


}
