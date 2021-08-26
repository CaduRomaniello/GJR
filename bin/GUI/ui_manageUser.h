/********************************************************************************
** Form generated from reading UI file 'manageUser.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEUSER_H
#define UI_MANAGEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageUser
{
public:
    QWidget *centralwidget;
    QPushButton *button_back;
    QTableWidget *table_users;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_create_user;
    QPushButton *button_update_user;
    QPushButton *button_delete_user;
    QLabel *label_title;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManageUser)
    {
        if (ManageUser->objectName().isEmpty())
            ManageUser->setObjectName(QString::fromUtf8("ManageUser"));
        ManageUser->resize(800, 600);
        centralwidget = new QWidget(ManageUser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button_back = new QPushButton(centralwidget);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(650, 490, 80, 25));
        table_users = new QTableWidget(centralwidget);
        if (table_users->columnCount() < 1)
            table_users->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_users->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (table_users->rowCount() < 10)
            table_users->setRowCount(10);
        table_users->setObjectName(QString::fromUtf8("table_users"));
        table_users->setGeometry(QRect(100, 90, 601, 291));
        table_users->setFrameShape(QFrame::Box);
        table_users->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_users->setAlternatingRowColors(true);
        table_users->setSelectionMode(QAbstractItemView::SingleSelection);
        table_users->setSortingEnabled(true);
        table_users->setRowCount(10);
        table_users->setColumnCount(1);
        table_users->horizontalHeader()->setMinimumSectionSize(32);
        table_users->horizontalHeader()->setDefaultSectionSize(299);
        table_users->horizontalHeader()->setStretchLastSection(true);
        table_users->verticalHeader()->setVisible(false);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 390, 601, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(93);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_create_user = new QPushButton(horizontalLayoutWidget);
        button_create_user->setObjectName(QString::fromUtf8("button_create_user"));

        horizontalLayout->addWidget(button_create_user);

        button_update_user = new QPushButton(horizontalLayoutWidget);
        button_update_user->setObjectName(QString::fromUtf8("button_update_user"));

        horizontalLayout->addWidget(button_update_user);

        button_delete_user = new QPushButton(horizontalLayoutWidget);
        button_delete_user->setObjectName(QString::fromUtf8("button_delete_user"));

        horizontalLayout->addWidget(button_delete_user);

        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(100, 50, 91, 31));
        QFont font;
        font.setPointSize(14);
        label_title->setFont(font);
        ManageUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManageUser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ManageUser->setMenuBar(menubar);
        statusbar = new QStatusBar(ManageUser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ManageUser->setStatusBar(statusbar);

        retranslateUi(ManageUser);

        QMetaObject::connectSlotsByName(ManageUser);
    } // setupUi

    void retranslateUi(QMainWindow *ManageUser)
    {
        ManageUser->setWindowTitle(QCoreApplication::translate("ManageUser", "MainWindow", nullptr));
        button_back->setText(QCoreApplication::translate("ManageUser", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_users->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ManageUser", "User", nullptr));
        button_create_user->setText(QCoreApplication::translate("ManageUser", "Create", nullptr));
        button_update_user->setText(QCoreApplication::translate("ManageUser", "Update", nullptr));
        button_delete_user->setText(QCoreApplication::translate("ManageUser", "Delete", nullptr));
        label_title->setText(QCoreApplication::translate("ManageUser", "Users", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageUser: public Ui_ManageUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEUSER_H
