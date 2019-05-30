#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QFileInfo>
#include <QDebug>
#include <QString>
#include <database.h>
namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:



private:
    Ui::Login *ui;


};

#endif // LOGIN_H
