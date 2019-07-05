#include "commit_request.h"
#include "ui_commit_request.h"

commit_request::commit_request(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::commit_request)
{
    ui->setupUi(this);
}

commit_request::~commit_request()
{
    delete ui;
}
