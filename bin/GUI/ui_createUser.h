/********************************************************************************
** Form generated from reading UI file 'createUser.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSER_H
#define UI_CREATEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateUser
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_create_user;
    QPushButton *button_cancel;
    QLineEdit *edit_user;
    QLineEdit *edit_password;
    QLineEdit *edit_confirm_password;
    QLabel *label_user;
    QLabel *label_password;
    QLabel *label_confirm_password;
    QLabel *label_title;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateUser)
    {
        if (CreateUser->objectName().isEmpty())
            CreateUser->setObjectName(QString::fromUtf8("CreateUser"));
        CreateUser->resize(800, 600);
        centralwidget = new QWidget(CreateUser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(480, 440, 251, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_create_user = new QPushButton(horizontalLayoutWidget);
        button_create_user->setObjectName(QString::fromUtf8("button_create_user"));

        horizontalLayout->addWidget(button_create_user);

        button_cancel = new QPushButton(horizontalLayoutWidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));

        horizontalLayout->addWidget(button_cancel);

        edit_user = new QLineEdit(centralwidget);
        edit_user->setObjectName(QString::fromUtf8("edit_user"));
        edit_user->setGeometry(QRect(160, 170, 311, 24));
        edit_password = new QLineEdit(centralwidget);
        edit_password->setObjectName(QString::fromUtf8("edit_password"));
        edit_password->setGeometry(QRect(160, 240, 311, 24));
        edit_password->setEchoMode(QLineEdit::Password);
        edit_confirm_password = new QLineEdit(centralwidget);
        edit_confirm_password->setObjectName(QString::fromUtf8("edit_confirm_password"));
        edit_confirm_password->setGeometry(QRect(160, 310, 311, 24));
        edit_confirm_password->setEchoMode(QLineEdit::Password);
        label_user = new QLabel(centralwidget);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(160, 150, 55, 16));
        label_password = new QLabel(centralwidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(160, 220, 71, 16));
        label_confirm_password = new QLabel(centralwidget);
        label_confirm_password->setObjectName(QString::fromUtf8("label_confirm_password"));
        label_confirm_password->setGeometry(QRect(160, 290, 131, 16));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(70, 70, 181, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        label_title->setFont(font);
        CreateUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateUser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        CreateUser->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateUser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CreateUser->setStatusBar(statusbar);

        retranslateUi(CreateUser);

        QMetaObject::connectSlotsByName(CreateUser);
    } // setupUi

    void retranslateUi(QMainWindow *CreateUser)
    {
        CreateUser->setWindowTitle(QCoreApplication::translate("CreateUser", "MainWindow", nullptr));
        button_create_user->setText(QCoreApplication::translate("CreateUser", "Create", nullptr));
        button_cancel->setText(QCoreApplication::translate("CreateUser", "Cancel", nullptr));
        label_user->setText(QCoreApplication::translate("CreateUser", "User", nullptr));
        label_password->setText(QCoreApplication::translate("CreateUser", "Password", nullptr));
        label_confirm_password->setText(QCoreApplication::translate("CreateUser", "Confirm Password", nullptr));
        label_title->setText(QCoreApplication::translate("CreateUser", "Create User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateUser: public Ui_CreateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSER_H
