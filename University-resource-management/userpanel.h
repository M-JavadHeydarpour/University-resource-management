#ifndef USERPANEL_H
#define USERPANEL_H

#include <QMainWindow>

namespace Ui {
class userpanel;
}

class userpanel : public QMainWindow
{
    Q_OBJECT

public:
    explicit userpanel(QWidget *parent = nullptr);
    ~userpanel();

private slots:
    void on_PB_editprof_clicked();

    void on_PB_newreq_clicked();

private:
    Ui::userpanel *ui;
};

#endif // USERPANEL_H
