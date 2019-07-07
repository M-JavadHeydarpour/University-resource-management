#include "commit_request.h"
#include "ui_commit_request.h"
#include "QTime"
#include "QComboBox"
#include "brain.h"


commit_request::commit_request(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::commit_request)
{
    ui->setupUi(this);

    brain bll;

    for(int i=0;i<bll.Get_organs().Number_of_row();i++)
        ui->cmb_organ->addItem(bll.Get_organs().extract_data(bll.Get_organs().Select(i)).Get_name());

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
