#include "edit_profile.h"
#include "ui_edit_profile.h"
#include "brain.h"
#include "userpanel.h"

edit_profile::edit_profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::edit_profile)
{
    ui->setupUi(this);
    brain bll;
    User U=bll.Load_user(bll.Get_ID());
    /*ui->LE_name->setText(U.Get_name());
    ui->LE_family->setText(U.Get_family());
    ui->LE_user_2->setText(U.Get_username());
    ui->LE_phone->setText(U.Get_phonenum());
    ui->LE_email->setText(U.Get_email());
    ui->LE_pass_2->setText(U.Get_password());
    ui->LE_address->setText(U.Get_address());
    */ui->LE_name_2->setText((bll.Get_ID()));
    ui->LE_phone98->setText("+98");
    ui->LE_phone_2->setText(U.Get_phonenum());
    ui->LE_email_2->setText(U.Get_email());
    ui->LE_address_2->setText(U.Get_address());
    ui->LE_family_2->setText(U.Get_family());
    ui->LE_user_3->setText(U.Get_username());
    ui->LE_pass_3->setText(U.Get_password());

}

edit_profile::~edit_profile()
{
    delete ui;
}

void edit_profile::on_pb_getinfo_clicked()
{
    brain bll;
    User sign;
    sign.Set_name(ui->LE_name_2->text());
    sign.Set_family(ui->LE_family_2->text());
    sign.Set_email(ui->LE_email_2->text());
    sign.Set_phonenum(ui->LE_phone_2->text());
    sign.Set_password(ui->LE_pass_3->text());
    sign.Set_username(ui->LE_user_3->text());
    sign.Set_address(ui->LE_address_2->text());
    sign.Set_ID(bll.Get_ID());
    bll.Edit(sign);
    this->close();
    userpanel *u=new userpanel();
    u->show();
}

void edit_profile::on_PB_back_clicked()
{
    this->close();
    userpanel *u=new userpanel();
    u->show();
}
