#include "login.h"
#include "ui_login.h"
#include "userpanel.h"
#include "QMessageBox"
#include "expertspanel.h"
#include "office_database.h"
#include "brain.h"

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
    brain bll;
    User sign;
    bool Correct_information[7];
    QString names[7];
    names->push_back("name ,");
    names->push_back("password," );
    names->push_back("username," );
    names->push_back("email," );
    names->push_back("phone," );
    names->push_back("address," );
    names->push_back("family," );
    if(ui->LE_name->text() == "")
    {
        Correct_information[0] = false;
    }
    else
    {
        Correct_information[0] = true;
    }

    if(ui->LE_pass_2->text() == "")
    {
        Correct_information[1] = false;
    }
    else
    {
        Correct_information[1] = true;
    }

    if(ui->LE_user_2->text() == "")
    {
        Correct_information[2] = false;
    }
    else
    {
        Correct_information[2] = true;
    }


    if(ui->LE_email->text() == "")
    {
        Correct_information[3] = false;
    }
    else
    {
        Correct_information[3] = true;
    }


    if(ui->LE_phone->text() == "")
    {
        Correct_information[4] = false;
    }
    else
    {
        Correct_information[4] = true;
    }


    if(ui->LE_address->text() == "")
    {
        Correct_information[5] = false;
    }
    else
    {
        Correct_information[5] = true;
    }


    if(ui->LE_family->text() == "")
    {
        Correct_information[6] = false;
    }
    else
    {
        Correct_information[6] = true;
    }

    /*
    recent input password and check it remember to added "
    */

    for(int i =0;i<7;i++)
    {
        if(Correct_information[i] == 1 )
        {
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

            bll.signup(sign);

        }
        else
        {
            QString msg = "";
            for(int k = 0;k < 7 ;k++)
            {
                if (Correct_information[k] == 0)
                {
                    //msg = msg + " , ";
                    /*QString empty_info;
                    empty_info = names[k];*/
                    msg += names[k];

                }
                else {
                    continue;
                }


            }
            msg += " fildes has empty ,please complete it and try again";
            QMessageBox msg_warning;
            msg_warning.setText(msg);
            msg_warning.exec();
            break;
        }
    }




}

void Login::on_PB_login_clicked()
{
    brain bll;
    if(bll.autenticate(ui->LE_user->text(),ui->LE_pass->text())=="no")
    {
        QMessageBox msg;
        msg.setText("incorrect username or password!!");
        msg.exec();
    }
    else if(bll.autenticate(ui->LE_user->text(),ui->LE_pass->text())=="U"){
        userpanel *up;
        up=new userpanel();
        up->show();
        this->close();
}
    /*
    //create a Database obj for use moduls and Extraction data.
    Persons_database check;
    check.Set_URL("person.txt");

    QString dataline;//each row of database.

    bool flag=false;//for check input lineEdit is true or not

    //chek username & password
    for (int i=0;i<check.Number_of_row();i++){
        if(check.Select_obj(i,1)==ui->LE_user->text()&& check.Select_obj(i,2)==ui->LE_pass->text()){
            flag=true;
            qDebug()<<"Welcome!!";
            }
    }


    if (!flag)
        qDebug()<<"username or password incorrect!!";*/
}

void Login::on_PB_test_clicked()
{
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

    Office_database test;
    test.Set_URL("office.txt");
    Unit t;
    t=test.extract_unit("2t[(C)$1000$]");
    qDebug()<<t.Get_name();
    qDebug()<<t.Get_reqtype();
    qDebug()<<t.Get_cost();


}
