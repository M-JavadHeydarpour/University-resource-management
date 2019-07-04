#include "userpanel.h"
#include "ui_userpanel.h"
#include "brain.h"

userpanel::userpanel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userpanel)
{
    brain bll;
    User CU=bll.Load_user(bll.Get_ID());
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->label_3->setText(CU.Get_name());
    ui->label_2->setText(CU.Get_family());
    ui->label->setText(CU.Get_username());
}

userpanel::~userpanel()
{
    delete ui;
}
