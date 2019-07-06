#include "commit_request.h"
#include "ui_commit_request.h"
#include "brain.h"
#include "QTime"


commit_request::commit_request(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::commit_request)
{
    brain bll;

    ui->setupUi(this);
}

commit_request::~commit_request()
{
    delete ui;
}


void commit_request::on_send_req_clicked()
{
    int start_month=ui->spinBox_month_from->value();
    int start_day=ui->spin_day_from->value();
    int end_month=ui->spinBox_month_to->value();
    int end_day=ui->spinBox_day_to->value();
}
