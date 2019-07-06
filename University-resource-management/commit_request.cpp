#include "commit_request.h"
#include "ui_commit_request.h"
#include "brain.h"
#include "QTime"

QString start="";
QString end="";
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

void commit_request::on_date_fom_userDateChanged(const QDate &date)
{
   start=date.toString();

}

void commit_request::on_date_to_userDateChanged(const QDate &date)
{
    end=date.toString();
}
