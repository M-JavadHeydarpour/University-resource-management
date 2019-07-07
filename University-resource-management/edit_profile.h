#ifndef EDIT_PROFILE_H
#define EDIT_PROFILE_H

#include <QMainWindow>

namespace Ui {
class edit_profile;
}

class edit_profile : public QMainWindow
{
    Q_OBJECT

public:
    explicit edit_profile(QWidget *parent = nullptr);
    ~edit_profile();

private slots:
    void on_pb_getinfo_clicked();

    void on_PB_back_clicked();

private:
    Ui::edit_profile *ui;
};

#endif // EDIT_PROFILE_H
