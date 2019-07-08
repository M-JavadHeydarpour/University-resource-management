#ifndef EXPERTPANEL_2_H
#define EXPERTPANEL_2_H

#include <QMainWindow>

namespace Ui {
class expertpanel_2;
}

class expertpanel_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit expertpanel_2(QWidget *parent = nullptr);
    ~expertpanel_2();

private slots:
    void on_PB_newreq_1_clicked();

private:
    Ui::expertpanel_2 *ui;
};

#endif // EXPERTPANEL_2_H
