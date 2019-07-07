/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *LE_user;
    QLineEdit *LE_pass;
    QLabel *user;
    QLabel *pass;
    QLabel *label_title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *PB_login;
    QPushButton *pushButton_signup;
    QLineEdit *lineEdit_12;
    QWidget *page_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *LE_name;
    QLineEdit *LE_family;
    QLineEdit *LE_email;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *LE_pass_2;
    QLineEdit *LE_pass_correct;
    QLineEdit *LE_user_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *LE_phone;
    QLineEdit *LE_phone98;
    QLineEdit *LE_address;
    QLabel *label_person;
    QLabel *label_username;
    QLabel *Label_email;
    QLabel *label_password;
    QLabel *head;
    QLabel *label_ad;
    QPushButton *PB_back_to_login;
    QPushButton *PB_register;
    QLabel *label_head;
    QLineEdit *underline;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(577, 360);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(577, 360));
        Login->setMaximumSize(QSize(577, 360));
        Login->setStyleSheet(QString::fromUtf8("background-image: url(../Images/back.png);"));
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(40, 20, 500, 311));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(33);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setBaseSize(QSize(6, 0));
        stackedWidget->setLayoutDirection(Qt::RightToLeft);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-image: url(../Images/background.png);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayoutWidget = new QWidget(page);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(160, 80, 191, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        LE_user = new QLineEdit(gridLayoutWidget);
        LE_user->setObjectName(QString::fromUtf8("LE_user"));

        gridLayout->addWidget(LE_user, 0, 1, 1, 1);

        LE_pass = new QLineEdit(gridLayoutWidget);
        LE_pass->setObjectName(QString::fromUtf8("LE_pass"));
        LE_pass->setMaxLength(40);
        LE_pass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(LE_pass, 1, 1, 1, 1);

        user = new QLabel(gridLayoutWidget);
        user->setObjectName(QString::fromUtf8("user"));
        user->setMinimumSize(QSize(32, 32));
        user->setMaximumSize(QSize(32, 32));
        user->setStyleSheet(QString::fromUtf8("background-image: url(../Images/username1.png);"));

        gridLayout->addWidget(user, 0, 0, 1, 1);

        pass = new QLabel(gridLayoutWidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setMinimumSize(QSize(32, 32));
        pass->setMaximumSize(QSize(32, 32));
        pass->setStyleSheet(QString::fromUtf8("background-image: url(../Images/pass.png);"));

        gridLayout->addWidget(pass, 1, 0, 1, 1);

        label_title = new QLabel(page);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(160, 20, 191, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei Light"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_title->setFont(font);
        label_title->setStyleSheet(QString::fromUtf8("color:rgb(14, 10, 130)"));
        label_title->setFrameShape(QFrame::NoFrame);
        label_title->setTextFormat(Qt::RichText);
        label_title->setScaledContents(true);
        label_title->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(160, 210, 192, 64));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PB_login = new QPushButton(verticalLayoutWidget);
        PB_login->setObjectName(QString::fromUtf8("PB_login"));
        PB_login->setMinimumSize(QSize(190, 30));
        PB_login->setMaximumSize(QSize(190, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(8);
        PB_login->setFont(font1);
        PB_login->setContextMenuPolicy(Qt::PreventContextMenu);
        PB_login->setStyleSheet(QString::fromUtf8("font: 70 10pt \"Yu Gothic UI\";"));
        PB_login->setAutoDefault(true);

        verticalLayout->addWidget(PB_login);

        pushButton_signup = new QPushButton(verticalLayoutWidget);
        pushButton_signup->setObjectName(QString::fromUtf8("pushButton_signup"));
        pushButton_signup->setMinimumSize(QSize(190, 25));
        pushButton_signup->setMaximumSize(QSize(190, 25));
        pushButton_signup->setStyleSheet(QString::fromUtf8("font: 60 9pt \"Yu Gothic UI\";"));

        verticalLayout->addWidget(pushButton_signup);

        lineEdit_12 = new QLineEdit(page);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(162, 60, 191, 1));
        lineEdit_12->setMaximumSize(QSize(16777215, 1));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayoutWidget = new QWidget(page_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 50, 261, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LE_name = new QLineEdit(horizontalLayoutWidget);
        LE_name->setObjectName(QString::fromUtf8("LE_name"));

        horizontalLayout->addWidget(LE_name);

        LE_family = new QLineEdit(horizontalLayoutWidget);
        LE_family->setObjectName(QString::fromUtf8("LE_family"));

        horizontalLayout->addWidget(LE_family);

        LE_email = new QLineEdit(page_2);
        LE_email->setObjectName(QString::fromUtf8("LE_email"));
        LE_email->setGeometry(QRect(100, 90, 261, 21));
        horizontalLayoutWidget_2 = new QWidget(page_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(100, 150, 261, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LE_pass_2 = new QLineEdit(horizontalLayoutWidget_2);
        LE_pass_2->setObjectName(QString::fromUtf8("LE_pass_2"));
        LE_pass_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(LE_pass_2);

        LE_pass_correct = new QLineEdit(horizontalLayoutWidget_2);
        LE_pass_correct->setObjectName(QString::fromUtf8("LE_pass_correct"));
        LE_pass_correct->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(LE_pass_correct);

        LE_user_2 = new QLineEdit(page_2);
        LE_user_2->setObjectName(QString::fromUtf8("LE_user_2"));
        LE_user_2->setGeometry(QRect(100, 120, 261, 21));
        horizontalLayoutWidget_3 = new QWidget(page_2);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(100, 190, 261, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        LE_phone = new QLineEdit(horizontalLayoutWidget_3);
        LE_phone->setObjectName(QString::fromUtf8("LE_phone"));

        horizontalLayout_3->addWidget(LE_phone);

        LE_phone98 = new QLineEdit(horizontalLayoutWidget_3);
        LE_phone98->setObjectName(QString::fromUtf8("LE_phone98"));
        LE_phone98->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_3->addWidget(LE_phone98);

        LE_address = new QLineEdit(page_2);
        LE_address->setObjectName(QString::fromUtf8("LE_address"));
        LE_address->setGeometry(QRect(100, 230, 261, 31));
        label_person = new QLabel(page_2);
        label_person->setObjectName(QString::fromUtf8("label_person"));
        label_person->setGeometry(QRect(370, 50, 32, 32));
        label_person->setMinimumSize(QSize(32, 32));
        label_person->setMaximumSize(QSize(32, 32));
        label_person->setStyleSheet(QString::fromUtf8("background-image: url(../Images/stock.png);"));
        label_username = new QLabel(page_2);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(370, 110, 32, 32));
        label_username->setMinimumSize(QSize(32, 32));
        label_username->setMaximumSize(QSize(32, 32));
        label_username->setStyleSheet(QString::fromUtf8("background-image: url(../Images/username.png);"));
        Label_email = new QLabel(page_2);
        Label_email->setObjectName(QString::fromUtf8("Label_email"));
        Label_email->setGeometry(QRect(370, 80, 32, 32));
        Label_email->setMinimumSize(QSize(32, 32));
        Label_email->setMaximumSize(QSize(32, 32));
        Label_email->setStyleSheet(QString::fromUtf8("background-image: url(../Images/email.png);"));
        label_password = new QLabel(page_2);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(370, 150, 32, 32));
        label_password->setMinimumSize(QSize(32, 32));
        label_password->setMaximumSize(QSize(32, 32));
        label_password->setStyleSheet(QString::fromUtf8("background-image: url(../Images/passwd.png);"));
        head = new QLabel(page_2);
        head->setObjectName(QString::fromUtf8("head"));
        head->setGeometry(QRect(370, 190, 32, 32));
        head->setMinimumSize(QSize(32, 32));
        head->setMaximumSize(QSize(32, 32));
        head->setStyleSheet(QString::fromUtf8("background-image: url(../Images/phoneicon.png);"));
        label_ad = new QLabel(page_2);
        label_ad->setObjectName(QString::fromUtf8("label_ad"));
        label_ad->setGeometry(QRect(370, 230, 32, 32));
        label_ad->setMinimumSize(QSize(32, 32));
        label_ad->setMaximumSize(QSize(32, 32));
        label_ad->setStyleSheet(QString::fromUtf8("background-image: url(../Images/home.png);"));
        PB_back_to_login = new QPushButton(page_2);
        PB_back_to_login->setObjectName(QString::fromUtf8("PB_back_to_login"));
        PB_back_to_login->setGeometry(QRect(140, 270, 91, 22));
        PB_back_to_login->setMinimumSize(QSize(0, 22));
        PB_back_to_login->setMaximumSize(QSize(16777215, 22));
        PB_back_to_login->setAutoDefault(true);
        PB_register = new QPushButton(page_2);
        PB_register->setObjectName(QString::fromUtf8("PB_register"));
        PB_register->setGeometry(QRect(240, 270, 91, 22));
        PB_register->setMinimumSize(QSize(0, 22));
        PB_register->setMaximumSize(QSize(16777215, 22));
        PB_register->setStyleSheet(QString::fromUtf8(""));
        PB_register->setAutoDefault(true);
        label_head = new QLabel(page_2);
        label_head->setObjectName(QString::fromUtf8("label_head"));
        label_head->setGeometry(QRect(210, 0, 181, 21));
        QFont font2;
        font2.setPointSize(11);
        label_head->setFont(font2);
        label_head->setStyleSheet(QString::fromUtf8("color:rgb(8, 23, 120)"));
        underline = new QLineEdit(page_2);
        underline->setObjectName(QString::fromUtf8("underline"));
        underline->setGeometry(QRect(100, 30, 291, 2));
        underline->setMaximumSize(QSize(16777215, 2));
        stackedWidget->addWidget(page_2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 120, 101, 28));
        Login->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Login->setStatusBar(statusBar);
        QWidget::setTabOrder(LE_user, LE_pass);
        QWidget::setTabOrder(LE_pass, PB_login);
        QWidget::setTabOrder(PB_login, pushButton_signup);
        QWidget::setTabOrder(pushButton_signup, LE_name);
        QWidget::setTabOrder(LE_name, LE_family);
        QWidget::setTabOrder(LE_family, LE_email);
        QWidget::setTabOrder(LE_email, LE_user_2);
        QWidget::setTabOrder(LE_user_2, LE_pass_2);
        QWidget::setTabOrder(LE_pass_2, LE_pass_correct);
        QWidget::setTabOrder(LE_pass_correct, LE_phone98);
        QWidget::setTabOrder(LE_phone98, LE_phone);
        QWidget::setTabOrder(LE_phone, LE_address);
        QWidget::setTabOrder(LE_address, PB_register);
        QWidget::setTabOrder(PB_register, PB_back_to_login);
        QWidget::setTabOrder(PB_back_to_login, underline);
        QWidget::setTabOrder(underline, lineEdit_12);

        retranslateUi(Login);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        LE_user->setPlaceholderText(QApplication::translate("Login", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214 ", nullptr));
        LE_pass->setPlaceholderText(QApplication::translate("Login", "\332\251\331\204\331\205\331\207 \330\271\330\250\331\210\330\261", nullptr));
        user->setText(QString());
        pass->setText(QString());
        label_title->setText(QApplication::translate("Login", "\331\210\330\261\331\210\330\257 \330\250\331\207 \330\263\333\214\330\263\330\252\331\205", nullptr));
        PB_login->setText(QApplication::translate("Login", "\331\210\330\261\331\210\330\257", nullptr));
        pushButton_signup->setText(QApplication::translate("Login", "\330\247\333\214\330\254\330\247\330\257 \330\255\330\263\330\247\330\250 \332\251\330\247\330\261\330\250\330\261\333\214 \330\254\330\257\333\214\330\257", nullptr));
        LE_name->setPlaceholderText(QApplication::translate("Login", "\331\206\330\247\331\205", nullptr));
        LE_family->setPlaceholderText(QApplication::translate("Login", "\331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214", nullptr));
        LE_email->setPlaceholderText(QApplication::translate("Login", "\331\276\330\263\330\252 \330\247\331\204\332\251\330\252\330\261\331\210\331\206\333\214\332\251", nullptr));
        LE_pass_2->setPlaceholderText(QApplication::translate("Login", "\332\251\331\204\331\205\331\207 \330\271\330\250\331\210\330\261", nullptr));
        LE_pass_correct->setPlaceholderText(QApplication::translate("Login", "\330\252\330\247\333\214\333\214\330\257 \332\251\331\204\331\205\331\207 \330\271\330\250\331\210\330\261", nullptr));
        LE_user_2->setPlaceholderText(QApplication::translate("Login", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        LE_phone->setPlaceholderText(QApplication::translate("Login", "  912 1234 478", nullptr));
        LE_phone98->setText(QString());
        LE_phone98->setPlaceholderText(QApplication::translate("Login", "+98", nullptr));
        LE_address->setPlaceholderText(QApplication::translate("Login", "\331\206\330\264\330\247\331\206\333\214 \332\251\330\247\331\205\331\204 ", nullptr));
        label_person->setText(QString());
        label_username->setText(QString());
        Label_email->setText(QString());
        label_password->setText(QString());
        head->setText(QString());
        label_ad->setText(QString());
        PB_back_to_login->setText(QApplication::translate("Login", "\331\210\330\261\331\210\330\257 \330\250\331\207 \330\263\333\214\330\263\330\252\331\205 ", nullptr));
        PB_register->setText(QApplication::translate("Login", "\330\253\330\250\330\252 \330\247\330\267\331\204\330\247\330\271\330\247\330\252 ", nullptr));
        label_head->setText(QApplication::translate("Login", "\330\253\330\250\330\252 \330\247\330\267\331\204\330\247\330\271\330\247\330\252 ", nullptr));
        pushButton->setText(QApplication::translate("Login", "mamad debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
