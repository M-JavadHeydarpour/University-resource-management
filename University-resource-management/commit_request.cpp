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
    /*ui->cmb_organ->setCurrentText("bib");
    ui->cmb_organ->setItemText(0,"salam");*/
    /*ui->cmb_organ->setEditText("sss");
    ui->cmb_unit->*/
    ui->cmb_organ->addItem("سلام");
    ui->cmb_organ->addItem("bye");
    brain bll;
    for(int i=0;i<bll.Number_of_organs();i++)
        ui->cmb_organ->addItem(bll.Get_organs().Select_obj(i,1));

}

commit_request::~commit_request()
{
    delete ui;

}


void commit_request::on_send_req_clicked()
{
    /*
    int start_month=ui->spinBox_month_from->value();
    int start_day=ui->spin_day_from->value();
    int end_month=ui->spinBox_month_to->value();
    int end_day=ui->spinBox_day_to->value();
*/

}

void commit_request::on_cmb_organ_currentIndexChanged(const QString &arg1)
{
    brain bll;
    organ organ_loaded;
    //qDebug()<<ui->cmb_organ->currentText();

    organ_loaded=bll.Get_organs().Search_Organ_Name(ui->cmb_organ->currentText());
    //for(int i=0;i<organ_loaded.Get_COO();i++){
    for(int i=0;i<organ_loaded.Get_COO();i++){
       ui->cmb_office->addItem( organ_loaded.Get_office(i).Get_name());
        //ui->cmb_office->addItem(ui->cmb_organ->currentText());

    }
    //ui->cmb_office->addItem("ssssssssssssss");

}
