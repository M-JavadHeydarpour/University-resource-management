#include "login.h"
#include <QApplication>
#include "qlayout.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    Database h;
    h.Set_URL("info.txt");
    h.Add_Table();
    w.show();


    return a.exec();
}
