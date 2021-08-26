/********************************************************************************
** Form generated from reading UI file 'updateUser.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEUSER_H
#define UI_UPDATEUSER_H

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

class Ui_UpdateUser
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_update_user;
    QPushButton *button_cancel;
    QLabel *label_title;
    QLabel *label_user;
    QLabel *label_confirm_password;
    QLabel *label_password;
    QLineEdit *edit_user;
    QLineEdit *edit_new_password;
    QLineEdit *edit_confirm_new_password;
    QLineEdit *edit_old_password;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdateUser)
    {
        if (UpdateUser->objectName().isEmpty())
            UpdateUser->setObjectName(QString::fromUtf8("UpdateUser"));
        UpdateUser->resize(800, 600);
        centralwidget = new QWidget(UpdateUser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(480, 430, 251, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_update_user = new QPushButton(horizontalLayoutWidget);
        button_update_user->setObjectName(QString::fromUtf8("button_update_user"));

        horizontalLayout->addWidget(button_update_user);

        button_cancel = new QPushButton(horizontalLayoutWidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));

        horizontalLayout->addWidget(button_cancel);

        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(70, 60, 181, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        label_title->setFont(font);
        label_user = new QLabel(centralwidget);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(160, 140, 55, 16));
        label_confirm_password = new QLabel(centralwidget);
        label_confirm_password->setObjectName(QString::fromUtf8("label_confirm_password"));
        label_confirm_password->setGeometry(QRect(160, 340, 141, 16));
        label_password = new QLabel(centralwidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(160, 270, 101, 16));
        edit_user = new QLineEdit(centralwidget);
        edit_user->setObjectName(QString::fromUtf8("edit_user"));
        edit_user->setGeometry(QRect(160, 160, 311, 24));
        edit_new_password = new QLineEdit(centralwidget);
        edit_new_password->setObjectName(QString::fromUtf8("edit_new_password"));
        edit_new_password->setGeometry(QRect(160, 290, 311, 24));
        edit_new_password->setEchoMode(QLineEdit::Password);
        edit_confirm_new_password = new QLineEdit(centralwidget);
        edit_confirm_new_password->setObjectName(QString::fromUtf8("edit_confirm_new_password"));
        edit_confirm_new_password->setGeometry(QRect(160, 360, 311, 24));
        edit_confirm_new_password->setEchoMode(QLineEdit::Password);
        edit_old_password = new QLineEdit(centralwidget);
        edit_old_password->setObjectName(QString::fromUtf8("edit_old_password"));
        edit_old_password->setGeometry(QRect(160, 220, 311, 24));
        edit_old_password->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 200, 101, 16));
        UpdateUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UpdateUser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        UpdateUser->setMenuBar(menubar);
        statusbar = new QStatusBar(UpdateUser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UpdateUser->setStatusBar(statusbar);

        retranslateUi(UpdateUser);

        QMetaObject::connectSlotsByName(UpdateUser);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateUser)
    {
        UpdateUser->setWindowTitle(QCoreApplication::translate("UpdateUser", "MainWindow", nullptr));
        button_update_user->setText(QCoreApplication::translate("UpdateUser", "Update", nullptr));
        button_cancel->setText(QCoreApplication::translate("UpdateUser", "Cancel", nullptr));
        label_title->setText(QCoreApplication::translate("UpdateUser", "Update User", nullptr));
        label_user->setText(QCoreApplication::translate("UpdateUser", "User", nullptr));
        label_confirm_password->setText(QCoreApplication::translate("UpdateUser", "Confirm New Password", nullptr));
        label_password->setText(QCoreApplication::translate("UpdateUser", "New Password", nullptr));
        label->setText(QCoreApplication::translate("UpdateUser", "Old Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateUser: public Ui_UpdateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEUSER_H
