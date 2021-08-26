/********************************************************************************
** Form generated from reading UI file 'manageAdmin.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEADMIN_H
#define UI_MANAGEADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageAdmin
{
public:
    QWidget *centralwidget;
    QPushButton *button_window_GJR;
    QPushButton *button_window_user_manage;
    QPushButton *button_exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManageAdmin)
    {
        if (ManageAdmin->objectName().isEmpty())
            ManageAdmin->setObjectName(QString::fromUtf8("ManageAdmin"));
        ManageAdmin->resize(800, 600);
        centralwidget = new QWidget(ManageAdmin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button_window_GJR = new QPushButton(centralwidget);
        button_window_GJR->setObjectName(QString::fromUtf8("button_window_GJR"));
        button_window_GJR->setGeometry(QRect(120, 110, 549, 91));
        QFont font;
        font.setPointSize(16);
        button_window_GJR->setFont(font);
        button_window_user_manage = new QPushButton(centralwidget);
        button_window_user_manage->setObjectName(QString::fromUtf8("button_window_user_manage"));
        button_window_user_manage->setEnabled(true);
        button_window_user_manage->setGeometry(QRect(120, 250, 549, 91));
        button_window_user_manage->setFont(font);
        button_exit = new QPushButton(centralwidget);
        button_exit->setObjectName(QString::fromUtf8("button_exit"));
        button_exit->setGeometry(QRect(640, 450, 80, 25));
        ManageAdmin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManageAdmin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ManageAdmin->setMenuBar(menubar);
        statusbar = new QStatusBar(ManageAdmin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ManageAdmin->setStatusBar(statusbar);

        retranslateUi(ManageAdmin);

        QMetaObject::connectSlotsByName(ManageAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *ManageAdmin)
    {
        ManageAdmin->setWindowTitle(QCoreApplication::translate("ManageAdmin", "MainWindow", nullptr));
        button_window_GJR->setText(QCoreApplication::translate("ManageAdmin", "GJR", nullptr));
        button_window_user_manage->setText(QCoreApplication::translate("ManageAdmin", "User Management", nullptr));
        button_exit->setText(QCoreApplication::translate("ManageAdmin", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageAdmin: public Ui_ManageAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEADMIN_H
