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


void Login::on_pushButton_login_clicked()
{
   /* QString username;
    QString password;
    username = ui->lineEdit_user->text();
    password = ui->lineEdit_pass->text();

    QSqlQuery qry;
    if(qry.exec("select * from students where username='"+username+"'and password='"+password+"'")){
        int count=0;
        while(qry.next()){
            count++;
        }
        if (count==1){
            userpanel *panel=new userpanel;
            panel->show();
        }
        if(count<1)
            ui->label_status->setText("user & password is'not correct");

    }
*/
}

void Login::on_pushButton_signup_clicked()
{
   // ui->stackedWidget->setCurrentIndex(1);
}
