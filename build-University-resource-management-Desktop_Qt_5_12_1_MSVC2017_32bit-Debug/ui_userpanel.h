/********************************************************************************
** Form generated from reading UI file 'userpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPANEL_H
#define UI_USERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userpanel
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *userp;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QFrame *line;
    QPushButton *PB_editprof;
    QPushButton *PB_newreq;
    QListView *listView;
    QPushButton *pushButton_2;
    QLabel *label_23;
    QLabel *label_22;
    QWidget *editprof;
    QWidget *set_req;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userpanel)
    {
        if (userpanel->objectName().isEmpty())
            userpanel->setObjectName(QString::fromUtf8("userpanel"));
        userpanel->resize(820, 520);
        userpanel->setMinimumSize(QSize(820, 520));
        userpanel->setMaximumSize(QSize(820, 520));
        centralwidget = new QWidget(userpanel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(40, 10, 731, 461));
        stackedWidget->setLayoutDirection(Qt::RightToLeft);
        userp = new QWidget();
        userp->setObjectName(QString::fromUtf8("userp"));
        userp->setLayoutDirection(Qt::RightToLeft);
        verticalLayoutWidget = new QWidget(userp);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(469, 10, 261, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        line = new QFrame(userp);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 232, 741, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        PB_editprof = new QPushButton(userp);
        PB_editprof->setObjectName(QString::fromUtf8("PB_editprof"));
        PB_editprof->setGeometry(QRect(630, 220, 75, 23));
        PB_newreq = new QPushButton(userp);
        PB_newreq->setObjectName(QString::fromUtf8("PB_newreq"));
        PB_newreq->setGeometry(QRect(450, 382, 281, 41));
        listView = new QListView(userp);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(95, 240, 641, 151));
        pushButton_2 = new QPushButton(userp);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 290, 81, 61));
        label_23 = new QLabel(userp);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(30, 30, 128, 128));
        label_23->setMinimumSize(QSize(128, 128));
        label_23->setMaximumSize(QSize(128, 128));
        label_23->setStyleSheet(QString::fromUtf8("background-image: url(../Images/boy.png);\n"
""));
        label_22 = new QLabel(userp);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 180, 320, 20));
        label_22->setMinimumSize(QSize(320, 20));
        label_22->setMaximumSize(QSize(520, 20));
        QFont font;
        font.setPointSize(12);
        label_22->setFont(font);
        stackedWidget->addWidget(userp);
        editprof = new QWidget();
        editprof->setObjectName(QString::fromUtf8("editprof"));
        stackedWidget->addWidget(editprof);
        set_req = new QWidget();
        set_req->setObjectName(QString::fromUtf8("set_req"));
        set_req->setLayoutDirection(Qt::RightToLeft);
        stackedWidget->addWidget(set_req);
        userpanel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(userpanel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 820, 20));
        userpanel->setMenuBar(menubar);
        statusbar = new QStatusBar(userpanel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        userpanel->setStatusBar(statusbar);

        retranslateUi(userpanel);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(userpanel);
    } // setupUi

    void retranslateUi(QMainWindow *userpanel)
    {
        userpanel->setWindowTitle(QApplication::translate("userpanel", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("userpanel", "\331\206\330\247\331\205 ", nullptr));
        label_2->setText(QApplication::translate("userpanel", "\331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214", nullptr));
        label->setText(QApplication::translate("userpanel", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        PB_editprof->setText(QApplication::translate("userpanel", "\331\210\333\214\330\261\330\247\333\214\330\264 \330\255\330\263\330\247\330\250", nullptr));
        PB_newreq->setText(QApplication::translate("userpanel", "\330\253\330\250\330\252 \330\257\330\261\330\256\331\210\330\247\330\263\330\252 \330\254\330\257\333\214\330\257", nullptr));
        pushButton_2->setText(QApplication::translate("userpanel", "\330\250\330\261\330\261\330\263\333\214 \331\210\330\266\330\271\333\214\330\252", nullptr));
        label_23->setText(QString());
        label_22->setText(QApplication::translate("userpanel", "\330\263\330\247\331\205\330\247\331\206\331\207 \330\252\331\210\330\262\333\214\330\271 \330\256\330\261\330\250\330\262\331\207 \330\257\331\210\331\204\330\252\333\214 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userpanel: public Ui_userpanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPANEL_H
