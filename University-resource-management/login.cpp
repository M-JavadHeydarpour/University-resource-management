#include "login.h"
#include "ui_login.h"
#include "QString"
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
QString user;
QString pass;

void Login::on_pushButton_clicked()
{
    user = ui->lineEdit->text();
    pass = ui ->lineEdit_2->text();
    QMessageBox ms;
    ms.setText("your account created successfuly :)");
    ms.exec();
}
