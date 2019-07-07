/********************************************************************************
** Form generated from reading UI file 'expertspanel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERTSPANEL_H
#define UI_EXPERTSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
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

class Ui_ExpertsPanel
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *experFP;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *PB_mojry;
    QPushButton *PB_shora;
    QPushButton *PB_reqexpert;
    QPushButton *PB_chek;
    QPushButton *PB_editprof;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QGraphicsView *graphicsView;
    QFrame *line;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PB_newreq;
    QPushButton *pushButton;
    QListView *listView_2;
    QWidget *mojry;
    QWidget *shora;
    QWidget *fani;
    QLabel *label_4;
    QListView *listView;
    QLabel *label_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_accept;
    QPushButton *pushButton_2;
    QWidget *check;
    QLabel *label_6;
    QLabel *label_7;
    QListView *listView_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ExpertsPanel)
    {
        if (ExpertsPanel->objectName().isEmpty())
            ExpertsPanel->setObjectName(QString::fromUtf8("ExpertsPanel"));
        ExpertsPanel->resize(800, 600);
        ExpertsPanel->setMinimumSize(QSize(800, 600));
        ExpertsPanel->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(ExpertsPanel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 20, 741, 541));
        stackedWidget->setLayoutDirection(Qt::RightToLeft);
        experFP = new QWidget();
        experFP->setObjectName(QString::fromUtf8("experFP"));
        verticalLayoutWidget_3 = new QWidget(experFP);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(390, 250, 351, 251));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        PB_mojry = new QPushButton(verticalLayoutWidget_3);
        PB_mojry->setObjectName(QString::fromUtf8("PB_mojry"));

        verticalLayout_3->addWidget(PB_mojry);

        PB_shora = new QPushButton(verticalLayoutWidget_3);
        PB_shora->setObjectName(QString::fromUtf8("PB_shora"));

        verticalLayout_3->addWidget(PB_shora);

        PB_reqexpert = new QPushButton(verticalLayoutWidget_3);
        PB_reqexpert->setObjectName(QString::fromUtf8("PB_reqexpert"));

        verticalLayout_3->addWidget(PB_reqexpert);

        PB_chek = new QPushButton(verticalLayoutWidget_3);
        PB_chek->setObjectName(QString::fromUtf8("PB_chek"));

        verticalLayout_3->addWidget(PB_chek);

        PB_editprof = new QPushButton(experFP);
        PB_editprof->setObjectName(QString::fromUtf8("PB_editprof"));
        PB_editprof->setGeometry(QRect(640, 210, 75, 23));
        verticalLayoutWidget = new QWidget(experFP);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(459, 20, 261, 191));
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

        graphicsView = new QGraphicsView(experFP);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 20, 241, 192));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image:url(\"sha.jpg\");\n"
"border-radius:80px;"));
        line = new QFrame(experFP);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-3, 230, 741, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_2 = new QWidget(experFP);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 500, 371, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PB_newreq = new QPushButton(horizontalLayoutWidget_2);
        PB_newreq->setObjectName(QString::fromUtf8("PB_newreq"));

        horizontalLayout_2->addWidget(PB_newreq);

        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        listView_2 = new QListView(experFP);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(0, 250, 371, 241));
        stackedWidget->addWidget(experFP);
        mojry = new QWidget();
        mojry->setObjectName(QString::fromUtf8("mojry"));
        stackedWidget->addWidget(mojry);
        shora = new QWidget();
        shora->setObjectName(QString::fromUtf8("shora"));
        stackedWidget->addWidget(shora);
        fani = new QWidget();
        fani->setObjectName(QString::fromUtf8("fani"));
        label_4 = new QLabel(fani);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 30, 171, 31));
        label_4->setAlignment(Qt::AlignCenter);
        listView = new QListView(fani);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(20, 121, 701, 271));
        label_5 = new QLabel(fani);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 80, 151, 31));
        label_5->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(fani);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(260, 400, 241, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PB_accept = new QPushButton(horizontalLayoutWidget);
        PB_accept->setObjectName(QString::fromUtf8("PB_accept"));

        horizontalLayout->addWidget(PB_accept);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        stackedWidget->addWidget(fani);
        check = new QWidget();
        check->setObjectName(QString::fromUtf8("check"));
        label_6 = new QLabel(check);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 30, 81, 20));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(check);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 60, 161, 31));
        label_7->setAlignment(Qt::AlignCenter);
        listView_3 = new QListView(check);
        listView_3->setObjectName(QString::fromUtf8("listView_3"));
        listView_3->setGeometry(QRect(90, 120, 561, 221));
        horizontalLayoutWidget_3 = new QWidget(check);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(240, 350, 271, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        stackedWidget->addWidget(check);
        ExpertsPanel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExpertsPanel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ExpertsPanel->setMenuBar(menubar);
        statusbar = new QStatusBar(ExpertsPanel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ExpertsPanel->setStatusBar(statusbar);

        retranslateUi(ExpertsPanel);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(ExpertsPanel);
    } // setupUi

    void retranslateUi(QMainWindow *ExpertsPanel)
    {
        ExpertsPanel->setWindowTitle(QApplication::translate("ExpertsPanel", "MainWindow", nullptr));
        PB_mojry->setText(QApplication::translate("ExpertsPanel", "\331\205\330\254\330\261\333\214", nullptr));
        PB_shora->setText(QApplication::translate("ExpertsPanel", "\330\271\330\266\331\210 \330\264\331\210\330\261\330\247\333\214 \331\201\331\206\333\214", nullptr));
        PB_reqexpert->setText(QApplication::translate("ExpertsPanel", "\332\251\330\247\330\261\330\264\331\206\330\247\330\263 \331\201\331\206\333\214", nullptr));
        PB_chek->setText(QApplication::translate("ExpertsPanel", "\331\205\330\263\330\246\331\210\331\204\333\214\330\252 \332\206\332\251 \331\201\331\206\333\214 \330\257\330\261\330\256\331\210\330\247\330\263\330\252", nullptr));
        PB_editprof->setText(QApplication::translate("ExpertsPanel", "\331\210\333\214\330\261\330\247\333\214\330\264 \330\255\330\263\330\247\330\250", nullptr));
        label_3->setText(QApplication::translate("ExpertsPanel", "\331\206\330\247\331\205 ", nullptr));
        label_2->setText(QApplication::translate("ExpertsPanel", "\331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214", nullptr));
        label->setText(QApplication::translate("ExpertsPanel", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        PB_newreq->setText(QApplication::translate("ExpertsPanel", "\330\253\330\250\330\252 \330\257\330\261\330\256\331\210\330\247\330\263\330\252 \330\254\330\257\333\214\330\257", nullptr));
        pushButton->setText(QApplication::translate("ExpertsPanel", "\330\250\330\261\330\261\330\263\333\214 \331\210\330\266\330\271\333\214\330\252", nullptr));
        label_4->setText(QApplication::translate("ExpertsPanel", "\332\251\330\247\330\261\330\264\331\206\330\247\330\263\333\214 \331\201\331\206\333\214 \330\257\330\261\330\256\331\210\330\247\330\263\330\252 \331\207\330\247", nullptr));
        label_5->setText(QApplication::translate("ExpertsPanel", "\330\257\330\261\330\256\331\210\330\247\330\263\330\252 \331\207\330\247\333\214 \330\257\330\261 \330\255\330\247\331\204 \330\250\330\261\330\261\330\263\333\214", nullptr));
        PB_accept->setText(QApplication::translate("ExpertsPanel", "\330\252\330\247\333\214\333\214\330\257", nullptr));
        pushButton_2->setText(QApplication::translate("ExpertsPanel", "\330\271\330\257\331\205 \330\252\330\247\333\214\333\214\330\257", nullptr));
        label_6->setText(QApplication::translate("ExpertsPanel", "\332\206\332\251 \331\201\331\206\333\214", nullptr));
        label_7->setText(QApplication::translate("ExpertsPanel", "\330\257\330\261\330\256\331\210\330\247\330\263\330\252 \331\207\330\247\333\214 \331\205\331\210\330\254\331\210\330\257", nullptr));
        pushButton_3->setText(QApplication::translate("ExpertsPanel", "\330\250\330\261\330\261\330\263\333\214 \331\201\330\261\331\205", nullptr));
        pushButton_4->setText(QApplication::translate("ExpertsPanel", "\330\252\330\247\333\214\333\214\330\257 \331\201\330\261\331\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpertsPanel: public Ui_ExpertsPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERTSPANEL_H
