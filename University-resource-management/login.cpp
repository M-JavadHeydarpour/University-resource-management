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
    sign2.Set_URL("info.txt");
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
    Database check;
    check.Set_URL("info.txt");
    //qDebug()<<check.Number_of_row();

    QString dataline;

    //dataline=check.Select(1);
    for (int i=0;i<check.Number_of_row();i++){
        if(check.Select_obj(i,4)==ui->LE_user->text()&& check.Select_obj(i,5)==ui->LE_pass->text())
            qDebug()<<"Welcome!!";
    //qDebug()<<check.Select_obj(1,3);
    }
}
