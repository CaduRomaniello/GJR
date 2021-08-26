/********************************************************************************
** Form generated from reading UI file 'loginScreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginScreen
{
public:
    QWidget *centralwidget;
    QPushButton *button_login;
    QLineEdit *edit_password;
    QLineEdit *edit_user;
    QLabel *label_user;
    QLabel *label_password;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginScreen)
    {
        if (loginScreen->objectName().isEmpty())
            loginScreen->setObjectName(QString::fromUtf8("loginScreen"));
        loginScreen->resize(800, 600);
        loginScreen->setMinimumSize(QSize(800, 600));
        loginScreen->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(loginScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button_login = new QPushButton(centralwidget);
        button_login->setObjectName(QString::fromUtf8("button_login"));
        button_login->setGeometry(QRect(350, 380, 93, 28));
        QFont font;
        font.setPointSize(9);
        button_login->setFont(font);
        edit_password = new QLineEdit(centralwidget);
        edit_password->setObjectName(QString::fromUtf8("edit_password"));
        edit_password->setGeometry(QRect(120, 280, 561, 31));
        QFont font1;
        font1.setPointSize(11);
        edit_password->setFont(font1);
        edit_password->setEchoMode(QLineEdit::Password);
        edit_user = new QLineEdit(centralwidget);
        edit_user->setObjectName(QString::fromUtf8("edit_user"));
        edit_user->setGeometry(QRect(120, 190, 561, 31));
        edit_user->setFont(font1);
        label_user = new QLabel(centralwidget);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(120, 160, 41, 21));
        label_user->setFont(font1);
        label_password = new QLabel(centralwidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(120, 250, 101, 21));
        label_password->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 50, 81, 61));
        QFont font2;
        font2.setPointSize(26);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        loginScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        loginScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(loginScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        loginScreen->setStatusBar(statusbar);
        QWidget::setTabOrder(edit_user, edit_password);
        QWidget::setTabOrder(edit_password, button_login);

        retranslateUi(loginScreen);

        QMetaObject::connectSlotsByName(loginScreen);
    } // setupUi

    void retranslateUi(QMainWindow *loginScreen)
    {
        loginScreen->setWindowTitle(QCoreApplication::translate("loginScreen", "loginScreen", nullptr));
        button_login->setText(QCoreApplication::translate("loginScreen", "Login", nullptr));
        label_user->setText(QCoreApplication::translate("loginScreen", "User", nullptr));
        label_password->setText(QCoreApplication::translate("loginScreen", "Password", nullptr));
        label->setText(QCoreApplication::translate("loginScreen", "GJR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginScreen: public Ui_loginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
