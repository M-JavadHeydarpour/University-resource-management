#include "expertspanel.h"
#include "ui_expertspanel.h"

ExpertsPanel::ExpertsPanel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExpertsPanel)
{
    ui->setupUi(this);
}

ExpertsPanel::~ExpertsPanel()
{
    delete ui;
}
