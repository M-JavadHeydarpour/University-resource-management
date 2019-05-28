#ifndef EXPERTSPANEL_H
#define EXPERTSPANEL_H

#include <QMainWindow>

namespace Ui {
class ExpertsPanel;
}

class ExpertsPanel : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExpertsPanel(QWidget *parent = nullptr);
    ~ExpertsPanel();

private:
    Ui::ExpertsPanel *ui;
};

#endif // EXPERTSPANEL_H
