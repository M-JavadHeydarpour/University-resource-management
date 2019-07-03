#include "userpanel.h"
#include "ui_userpanel.h"

userpanel::userpanel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userpanel)
{
    ui->setupUi(this);
}

userpanel::~userpanel()
{
    delete ui;
}
