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
    ui->stackedWidget->setCurrentIndex(0);
    brain bll;
    for(int i=0;i<bll.Number_of_organs();i++)
    //for(int i=0;i<2;i++)
      //  ui->cmb_organ->addItem("##");
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

if(ui->cmb_organ->currentText()!=""){
    brain bll;
    organ organ_loaded;



    organ_loaded=bll.Get_organs().Search_Organ_Name(ui->cmb_organ->currentText());

    for(int i=0;i<organ_loaded.Get_COO();i++){
       ui->cmb_office->addItem( organ_loaded.Get_office(i).Get_name());


    }

}
}

void commit_request::on_cmb_office_currentIndexChanged(const QString &arg1)
{
//    ui->cmb_unit->clear();
    if(ui->cmb_organ->currentText()!="")
{
       brain bll;
       organ organ_loaded;
       office office_loaded;

       organ_loaded=bll.Get_organs().Search_Organ_Name(ui->cmb_organ->currentText());
       office_loaded= bll.Get_organs().Search_Office_Name(ui->cmb_office->currentText());

       //qDebug()<<ui->cmb_office->currentIndex()*-1;

       for (int i=0;i<office_loaded.Get_COU();i++){
           ui->cmb_unit->addItem(office_loaded.Get_unit(i).Get_name());
       }}
      //for(int i=0;i<organ_loaded.Get_office(ui->cmb_office->currentIndex()).Get_COU();i++){
  //        ui->cmb_unit->addItem( organ_loaded.Get_office(ui->cmb_office->currentIndex()).Get_unit(i).Get_name());

        /*} ui->cmb_unit->addItem( "organ_loaded.Get_office(ui->cmb_office->currentIndex()).Get_unit(i).Get_name()");
       ui->cmb_unit->addItem( "organ_loaded.Get_office(ui->cmb_office->currentIndex()).Get_unit(i).Get_name()");
      */
}

void commit_request::on_cmb_unit_currentIndexChanged(const QString &arg1)
{
    brain bll;
    Unit unit_loaded;
    unit_loaded=bll.Get_organs().Search_Unit_Name(ui->cmb_unit->currentText());
    ui->stackedWidget->setCurrentIndex(1);
    if(ui->cmb_unit->currentText()!="")
    {
        if(unit_loaded.Get_reqtype()=='C')
            ui->stackedWidget->setCurrentIndex(1);
        else if(unit_loaded.Get_reqtype()=='H')
            ui->stackedWidget->setCurrentIndex(2);
        else if(unit_loaded.Get_reqtype()=='S')
            ui->stackedWidget->setCurrentIndex(3);
    }
}

