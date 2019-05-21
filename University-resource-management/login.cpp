#include "login.h"
#include "ui_login.h"

#include "QMessageBox"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("information.db");
    if(mydb.open()){
        ui->label_status->setText("connecting");
    }
    else
        ui->label_status->setText("can not connect");
}


Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
    QString username;
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
            ui->label_status->setText("username & password is correct");
        }
        if(count<1)
            ui->label_status->setText("user & password is'not correct");

    }

}
