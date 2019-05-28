#include "login.h"
#include "ui_login.h"
#include "userpanel.h"
#include "QMessageBox"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("information.db");
   /* if(mydb.open()){
        ui->label_status->setText("connecting");
    }
    else
        ui->label_status->setText("can not connect");
    ui->stackedWidget->setCurrentIndex(0);*/
}


Login::~Login()
{
    delete ui;
}

