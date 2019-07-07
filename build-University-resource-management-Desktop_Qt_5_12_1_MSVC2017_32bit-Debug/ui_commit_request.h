/********************************************************************************
** Form generated from reading UI file 'commit_request.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMIT_REQUEST_H
#define UI_COMMIT_REQUEST_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commit_request
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget_2;
    QWidget *page_7;
    QWidget *page_8;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QComboBox *cmb_unit;
    QComboBox *cmb_organ;
    QStackedWidget *stackedWidget;
    QWidget *page_9;
    QWidget *page_10;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *spinBox_month_from_2;
    QSpinBox *spin_day_from_2;
    QSpinBox *spinBox_day_to_2;
    QSpinBox *spinBox_month_to_2;
    QWidget *page_11;
    QDateEdit *dateEdit_5;
    QTimeEdit *timeEdit_3;
    QTimeEdit *timeEdit_4;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *page_12;
    QDateEdit *dateEdit_6;
    QLabel *label_20;
    QRadioButton *s1_2;
    QRadioButton *radioButton_3;
    QRadioButton *s3_2;
    QRadioButton *s4_2;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *send_req;
    QComboBox *cmb_office;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *commit_request)
    {
        if (commit_request->objectName().isEmpty())
            commit_request->setObjectName(QString::fromUtf8("commit_request"));
        commit_request->resize(820, 520);
        commit_request->setMinimumSize(QSize(820, 520));
        commit_request->setMaximumSize(QSize(820, 520));
        commit_request->setStyleSheet(QString::fromUtf8("background-image: url(../Images/panel.png);"));
        centralwidget = new QWidget(commit_request);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(29, 10, 751, 451));
        stackedWidget_2->setAutoFillBackground(false);
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-image: url(../Images/background.png);"));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        stackedWidget_2->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        label_2 = new QLabel(page_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(580, 120, 161, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(page_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(590, 200, 151, 20));
        label_3->setAlignment(Qt::AlignCenter);
        label = new QLabel(page_8);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(560, 40, 201, 20));
        label->setAlignment(Qt::AlignCenter);
        cmb_unit = new QComboBox(page_8);
        cmb_unit->setObjectName(QString::fromUtf8("cmb_unit"));
        cmb_unit->setGeometry(QRect(510, 230, 231, 31));
        cmb_unit->setLayoutDirection(Qt::RightToLeft);
        cmb_organ = new QComboBox(page_8);
        cmb_organ->addItem(QString());
        cmb_organ->setObjectName(QString::fromUtf8("cmb_organ"));
        cmb_organ->setGeometry(QRect(510, 70, 231, 31));
        cmb_organ->setMaximumSize(QSize(16777211, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        cmb_organ->setFont(font);
        cmb_organ->setCursor(QCursor(Qt::WaitCursor));
        cmb_organ->setMouseTracking(true);
        cmb_organ->setTabletTracking(false);
        cmb_organ->setContextMenuPolicy(Qt::CustomContextMenu);
        cmb_organ->setLayoutDirection(Qt::RightToLeft);
        cmb_organ->setStyleSheet(QString::fromUtf8("backfround-image:None;\n"
""));
        cmb_organ->setLocale(QLocale(QLocale::Persian, QLocale::Iran));
        cmb_organ->setMaxCount(200);
        cmb_organ->setInsertPolicy(QComboBox::InsertAtBottom);
        cmb_organ->setFrame(true);
        stackedWidget = new QStackedWidget(page_8);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(60, 70, 321, 211));
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        label_15 = new QLabel(page_10);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(200, 40, 47, 13));
        label_16 = new QLabel(page_10);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(200, 100, 47, 13));
        spinBox_month_from_2 = new QSpinBox(page_10);
        spinBox_month_from_2->setObjectName(QString::fromUtf8("spinBox_month_from_2"));
        spinBox_month_from_2->setGeometry(QRect(60, 30, 42, 22));
        spinBox_month_from_2->setMinimum(1);
        spinBox_month_from_2->setMaximum(12);
        spin_day_from_2 = new QSpinBox(page_10);
        spin_day_from_2->setObjectName(QString::fromUtf8("spin_day_from_2"));
        spin_day_from_2->setGeometry(QRect(130, 30, 42, 22));
        spin_day_from_2->setMinimum(1);
        spin_day_from_2->setMaximum(31);
        spinBox_day_to_2 = new QSpinBox(page_10);
        spinBox_day_to_2->setObjectName(QString::fromUtf8("spinBox_day_to_2"));
        spinBox_day_to_2->setGeometry(QRect(130, 90, 42, 22));
        spinBox_day_to_2->setMinimum(1);
        spinBox_day_to_2->setMaximum(31);
        spinBox_month_to_2 = new QSpinBox(page_10);
        spinBox_month_to_2->setObjectName(QString::fromUtf8("spinBox_month_to_2"));
        spinBox_month_to_2->setGeometry(QRect(60, 90, 42, 22));
        spinBox_month_to_2->setMinimum(1);
        spinBox_month_to_2->setMaximum(12);
        stackedWidget->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        dateEdit_5 = new QDateEdit(page_11);
        dateEdit_5->setObjectName(QString::fromUtf8("dateEdit_5"));
        dateEdit_5->setGeometry(QRect(39, 30, 131, 22));
        timeEdit_3 = new QTimeEdit(page_11);
        timeEdit_3->setObjectName(QString::fromUtf8("timeEdit_3"));
        timeEdit_3->setGeometry(QRect(40, 80, 131, 22));
        timeEdit_4 = new QTimeEdit(page_11);
        timeEdit_4->setObjectName(QString::fromUtf8("timeEdit_4"));
        timeEdit_4->setGeometry(QRect(40, 110, 131, 22));
        label_17 = new QLabel(page_11);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(190, 110, 47, 21));
        label_18 = new QLabel(page_11);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(190, 30, 47, 21));
        label_19 = new QLabel(page_11);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(190, 80, 47, 21));
        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QString::fromUtf8("page_12"));
        dateEdit_6 = new QDateEdit(page_12);
        dateEdit_6->setObjectName(QString::fromUtf8("dateEdit_6"));
        dateEdit_6->setGeometry(QRect(50, 30, 110, 22));
        label_20 = new QLabel(page_12);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(180, 30, 47, 21));
        s1_2 = new QRadioButton(page_12);
        s1_2->setObjectName(QString::fromUtf8("s1_2"));
        s1_2->setGeometry(QRect(150, 70, 16, 17));
        radioButton_3 = new QRadioButton(page_12);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(150, 90, 16, 17));
        s3_2 = new QRadioButton(page_12);
        s3_2->setObjectName(QString::fromUtf8("s3_2"));
        s3_2->setGeometry(QRect(150, 110, 16, 17));
        s4_2 = new QRadioButton(page_12);
        s4_2->setObjectName(QString::fromUtf8("s4_2"));
        s4_2->setGeometry(QRect(150, 130, 16, 17));
        label_21 = new QLabel(page_12);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(150, 92, 81, 21));
        label_22 = new QLabel(page_12);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(90, 70, 41, 16));
        label_23 = new QLabel(page_12);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(90, 90, 47, 16));
        label_24 = new QLabel(page_12);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(90, 110, 47, 16));
        label_25 = new QLabel(page_12);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(90, 130, 47, 16));
        stackedWidget->addWidget(page_12);
        send_req = new QPushButton(page_8);
        send_req->setObjectName(QString::fromUtf8("send_req"));
        send_req->setGeometry(QRect(160, 400, 200, 30));
        send_req->setMinimumSize(QSize(200, 30));
        send_req->setMaximumSize(QSize(100, 30));
        cmb_office = new QComboBox(page_8);
        cmb_office->setObjectName(QString::fromUtf8("cmb_office"));
        cmb_office->setGeometry(QRect(510, 150, 231, 31));
        cmb_office->setLayoutDirection(Qt::RightToLeft);
        pushButton = new QPushButton(page_8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 400, 91, 30));
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setMaximumSize(QSize(16777215, 30));
        stackedWidget_2->addWidget(page_8);
        commit_request->setCentralWidget(centralwidget);
        menubar = new QMenuBar(commit_request);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 820, 20));
        commit_request->setMenuBar(menubar);
        statusbar = new QStatusBar(commit_request);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        commit_request->setStatusBar(statusbar);

        retranslateUi(commit_request);

        stackedWidget_2->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(commit_request);
    } // setupUi

    void retranslateUi(QMainWindow *commit_request)
    {
        commit_request->setWindowTitle(QApplication::translate("commit_request", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("commit_request", "\330\247\330\257\330\247\330\261\331\207 \331\205\331\210\330\261\330\257 \331\206\330\270\330\261 \330\256\331\210\330\257 \330\261\330\247 \330\247\331\206\330\252\330\256\330\247\330\250 \332\251\331\206\333\214\330\257", nullptr));
        label_3->setText(QApplication::translate("commit_request", "\331\205\331\210\330\261\330\257 \330\257\330\261\330\256\331\210\330\247\330\263\330\252 \330\261\330\247 \330\247\331\206\330\252\330\256\330\247\330\250 \332\251\331\206\333\214\330\257", nullptr));
        label->setText(QApplication::translate("commit_request", "\330\263\330\247\330\262\331\205\330\247\331\206 \331\205\331\210\330\261\330\257 \331\206\330\270\330\261 \330\256\331\210\330\257 \330\261\330\247 \330\247\331\206\330\252\330\256\330\247\330\250 \332\251\331\206\333\214\330\257", nullptr));
        cmb_organ->setItemText(0, QString());

#ifndef QT_NO_TOOLTIP
        cmb_organ->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("commit_request", "\330\247\330\262 \330\252\330\247\330\261\333\214\330\256:", nullptr));
        label_16->setText(QApplication::translate("commit_request", "\330\252\330\247 \330\252\330\247\330\261\333\214\330\256:", nullptr));
        label_17->setText(QApplication::translate("commit_request", "\330\252\330\247 \330\263\330\247\330\271\330\252:", nullptr));
        label_18->setText(QApplication::translate("commit_request", "\330\257\330\261 \330\252\330\247\330\261\333\214\330\256:", nullptr));
        label_19->setText(QApplication::translate("commit_request", "\330\247\330\262 \330\263\330\247\330\271\330\252:", nullptr));
        label_20->setText(QApplication::translate("commit_request", "\330\257\330\261 \330\252\330\247\330\261\333\214\330\256 :", nullptr));
        s1_2->setText(QString());
        radioButton_3->setText(QString());
        s3_2->setText(QString());
        s4_2->setText(QString());
        label_21->setText(QApplication::translate("commit_request", "\330\263\330\247\331\206\330\263:", nullptr));
        label_22->setText(QApplication::translate("commit_request", "8:30 -10", nullptr));
        label_23->setText(QApplication::translate("commit_request", "10:30-12", nullptr));
        label_24->setText(QApplication::translate("commit_request", "13:30-15", nullptr));
        label_25->setText(QApplication::translate("commit_request", "15:30-17", nullptr));
        send_req->setText(QApplication::translate("commit_request", "\330\253\330\250\330\252 \330\257\330\261\330\256\331\210\330\247\330\263\330\252", nullptr));
        pushButton->setText(QApplication::translate("commit_request", "\330\250\330\247\330\262\332\257\330\264\330\252 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commit_request: public Ui_commit_request {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMIT_REQUEST_H
