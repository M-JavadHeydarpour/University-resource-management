#include "expertpanel_2.h"
#include "ui_expertpanel_2.h"
#include "commit_request.h"

expertpanel_2::expertpanel_2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::expertpanel_2)
{
    ui->setupUi(this);
}

expertpanel_2::~expertpanel_2()
{
    delete ui;
}

void expertpanel_2::on_PB_newreq_1_clicked()
{
    commit_request *N;
    N=new commit_request();
    N->show();
    this->close();

}
