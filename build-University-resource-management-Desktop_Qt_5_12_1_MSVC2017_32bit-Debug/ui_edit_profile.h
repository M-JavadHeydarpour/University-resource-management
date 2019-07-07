/********************************************************************************
** Form generated from reading UI file 'edit_profile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_PROFILE_H
#define UI_EDIT_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit_profile
{
public:
    QWidget *centralwidget;
    QPushButton *PB_back;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLineEdit *LE_family;
    QLineEdit *LE_name;
    QLineEdit *LE_phone;
    QLineEdit *LE_user_2;
    QLineEdit *LE_address;
    QLineEdit *LE_email;
    QLineEdit *LE_pass_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QPushButton *pb_getinfo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *edit_profile)
    {
        if (edit_profile->objectName().isEmpty())
            edit_profile->setObjectName(QString::fromUtf8("edit_profile"));
        edit_profile->resize(588, 367);
        centralwidget = new QWidget(edit_profile);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        PB_back = new QPushButton(centralwidget);
        PB_back->setObjectName(QString::fromUtf8("PB_back"));
        PB_back->setGeometry(QRect(70, 240, 75, 23));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(190, 30, 222, 235));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        LE_family = new QLineEdit(verticalLayoutWidget_2);
        LE_family->setObjectName(QString::fromUtf8("LE_family"));

        gridLayout_2->addWidget(LE_family, 1, 1, 1, 1);

        LE_name = new QLineEdit(verticalLayoutWidget_2);
        LE_name->setObjectName(QString::fromUtf8("LE_name"));

        gridLayout_2->addWidget(LE_name, 0, 1, 1, 1);

        LE_phone = new QLineEdit(verticalLayoutWidget_2);
        LE_phone->setObjectName(QString::fromUtf8("LE_phone"));

        gridLayout_2->addWidget(LE_phone, 3, 1, 1, 1);

        LE_user_2 = new QLineEdit(verticalLayoutWidget_2);
        LE_user_2->setObjectName(QString::fromUtf8("LE_user_2"));

        gridLayout_2->addWidget(LE_user_2, 2, 1, 1, 1);

        LE_address = new QLineEdit(verticalLayoutWidget_2);
        LE_address->setObjectName(QString::fromUtf8("LE_address"));

        gridLayout_2->addWidget(LE_address, 6, 1, 1, 1);

        LE_email = new QLineEdit(verticalLayoutWidget_2);
        LE_email->setObjectName(QString::fromUtf8("LE_email"));

        gridLayout_2->addWidget(LE_email, 4, 1, 1, 1);

        LE_pass_2 = new QLineEdit(verticalLayoutWidget_2);
        LE_pass_2->setObjectName(QString::fromUtf8("LE_pass_2"));

        gridLayout_2->addWidget(LE_pass_2, 5, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 2, 2, 1, 1);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 3, 2, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 4, 2, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 5, 2, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 6, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        pb_getinfo = new QPushButton(verticalLayoutWidget_2);
        pb_getinfo->setObjectName(QString::fromUtf8("pb_getinfo"));

        verticalLayout_2->addWidget(pb_getinfo);

        edit_profile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(edit_profile);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 588, 21));
        edit_profile->setMenuBar(menubar);
        statusbar = new QStatusBar(edit_profile);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        edit_profile->setStatusBar(statusbar);

        retranslateUi(edit_profile);

        QMetaObject::connectSlotsByName(edit_profile);
    } // setupUi

    void retranslateUi(QMainWindow *edit_profile)
    {
        edit_profile->setWindowTitle(QApplication::translate("edit_profile", "MainWindow", nullptr));
        PB_back->setText(QApplication::translate("edit_profile", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
        LE_address->setText(QString());
        LE_pass_2->setText(QString());
        label_2->setText(QApplication::translate("edit_profile", "\331\206\330\247\331\205:", nullptr));
        label_3->setText(QApplication::translate("edit_profile", "\331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", nullptr));
        label_4->setText(QApplication::translate("edit_profile", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214:", nullptr));
        label->setText(QApplication::translate("edit_profile", "\330\252\331\204\331\201\331\206:", nullptr));
        label_6->setText(QApplication::translate("edit_profile", "\330\247\333\214\331\205\333\214\331\204:", nullptr));
        label_5->setText(QApplication::translate("edit_profile", "\332\251\331\204\331\205\331\207 \330\271\330\250\331\210\330\261:", nullptr));
        label_7->setText(QApplication::translate("edit_profile", "\330\242\330\257\330\261\330\263", nullptr));
        pb_getinfo->setText(QApplication::translate("edit_profile", "\330\253\330\250\330\252 \330\252\330\272\333\214\333\214\330\261\330\247\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_profile: public Ui_edit_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_PROFILE_H
