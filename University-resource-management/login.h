#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QFileInfo>
#include <QDebug>
#include <QString>

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
    QSqlDatabase mydb;

};

#endif // LOGIN_H
