#include "login.h"
#include "ui_login.h"
#include "userpanel.h"
#include "QMessageBox"
#include "expertspanel.h"
#include "office_database.h"

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
    /*User sign;
    Persons_database sign2;
    sign2.Set_URL("person.txt");
    // pich info from ui and storge on RAM

    sign.Set_name(ui->LE_name->text());
    sign.Set_family(ui->LE_family->text());
    sign.Set_email(ui->LE_email->text());
    sign.Set_phonenum(ui->LE_phone->text());
    sign.Set_password(ui->LE_pass_2->text());
    sign.Set_username(ui->LE_user_2->text());
    sign.Set_address(ui->LE_address->text());




    sign.Set_office_ID("U");

    ui->stackedWidget->setCurrentIndex(0);
    //insert info to file.

    sign2.Insert(sign);
    */

}

void Login::on_PB_login_clicked()
{
    //create a Database obj for use moduls and Extraction data.
    /*Persons_database check;
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
    */
    //go to corrent page
    //temp value
    if(ui->LE_pass->text() == '0')
        qDebug() << "welcone user ";
    //if...
}

//void Login::on_PB_test_clicked()
//{
    //Persons_database test;
    //test.Set_URL("person.txt");
    /*
    User t;
    t=test.extarct_data("1004;radikal;seji;sadjad;mohammadi;cactus@gmail.com;khorzogh;09139797;#;U;#;");
    qDebug()<<t.Get_ID();
    qDebug()<<t.Get_username();
    qDebug() <<t.Get_password();
    qDebug() <<t.Get_name();
    qDebug() <<t.Get_family();
    qDebug() <<t.Get_email();
    qDebug() <<t.Get_address();
    qDebug() <<t.Get_phonenum();
    qDebug() <<t.Get_imgurl();
    qDebug() <<t.Get_role();
    qDebug() <<t.Get_office_ID();
    */

    //test.Delete("1003");

    /*
    User t;
    t=test.extarct_data("1002;bibbib;9632;habib;sharif;ibib@gmail.com;shahin shahr;09130078;#;U;#;");
    t.Set_name("khar");
    test.Update(t);
    */
/*
    Office_database test;
    test.Set_URL("office.txt");
    Unit t;
    t=test.extract_unit("2t[(C)$1000$]");
    qDebug()<<t.Get_name();
    qDebug()<<t.Get_reqtype();
    qDebug()<<t.Get_cost();


}
*/
