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

    if (user == "")
        ms.setText("First Enter the username");
    if (pass == "")
        ms.setText("First Select a password");

    if (user !="" && pass != "")
        ms.setText("your account created successfuly :)");
    if (user =="" && pass == "")
    {
        ms.setText("First select user and password !");
        //ms.set
        //set icon later
    }
    ms.exec();
}
