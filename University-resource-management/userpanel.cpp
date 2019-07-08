#include "userpanel.h"
#include "ui_userpanel.h"
#include "brain.h"
#include "edit_profile.h"
#include "commit_request.h"
#include "login.h"
#include "check_request.h"

userpanel::userpanel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userpanel)
{
    ui->setupUi(this);
    brain bll;
    User CU=bll.Load_user(bll.Get_ID());

    //ui->stackedWidget->setCurrentIndex(0);
    ui->label_3->setText(CU.Get_name());
    ui->label_2->setText(CU.Get_family());
    ui->label->setText(CU.Get_username());
    if(CU.Get_role()=="U"){

        ui->label_10->setText("کاربر معمولی");
        ui->Exp_stacked->setCurrentIndex(1);
        ui->boss_stacked->setCurrentIndex(1);
        QString req_view;
        req_view.append(bll.Load_user(bll.Get_request().Get_App_ID()).Get_name());
        req_view.append("  ");
        req_view.append(bll.Load_user(bll.Get_request().Get_App_ID()).Get_family());
        req_view.append("  ");
        req_view.append(bll.Get_request().Get_Office_name());
        req_view.append("  ");
        req_view.append(bll.Get_request().Get_Unit_name());



        if(bll.Get_CH()==1)
        {
            ui->listWidget->addItem(req_view);
        }

    }
    else if(CU.Get_role()=="E")
    {

        ui->label_10->setText("کارشناس");
        ui->Exp_stacked->setCurrentIndex(0);
        ui->boss_stacked->setCurrentIndex(1);
        QString req_view;
        req_view.append(bll.Load_user(bll.Get_request().Get_App_ID()).Get_name());
        req_view.append("  ");
        req_view.append(bll.Load_user(bll.Get_request().Get_App_ID()).Get_family());
        req_view.append("  ");
        req_view.append(bll.Get_request().Get_Office_name());
        req_view.append("  ");
        req_view.append(bll.Get_request().Get_Unit_name());



        if(bll.Get_CH()==1)
        {
            ui->listWidget->addItem(req_view);
        }

    }

    else if(CU.Get_role()=="B")
    {

        ui->label_10->setText("مدیر سازمان");
        ui->Exp_stacked->setCurrentIndex(0);
        ui->boss_stacked->setCurrentIndex(0);

    }
    ui->label_3->setText(CU.Get_name());
    ui->label_2->setText(CU.Get_family());
    ui->label->setText(CU.Get_username());

}

userpanel::~userpanel()
{
    delete ui;
}

void userpanel::on_PB_editprof_clicked()
{
   edit_profile *w=new edit_profile();

   w->show();
   this->close();
}


/*
void userpanel::on_req_check_clicked()
{
    //check_request *ch=new check_request();
    //ch->show();
  //this->close();

}*/

void userpanel::on_pushButton_clicked()
{
    Login *l=new Login;
    l->show();
    this->close();
}
