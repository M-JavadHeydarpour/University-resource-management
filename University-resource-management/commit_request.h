#ifndef COMMIT_REQUEST_H
#define COMMIT_REQUEST_H

#include <QMainWindow>

namespace Ui {
class commit_request;
}

class commit_request : public QMainWindow
{
    Q_OBJECT

public:
    explicit commit_request(QWidget *parent = nullptr);
    ~commit_request();

private slots:
    void on_date_fom_userDateChanged(const QDate &date);

    void on_date_to_userDateChanged(const QDate &date);

private:
    Ui::commit_request *ui;
};

#endif // COMMIT_REQUEST_H
