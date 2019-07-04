#include "login.h"
#include <QApplication>
#include "qlayout.h"
#include "brain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();


    return a.exec();
}
