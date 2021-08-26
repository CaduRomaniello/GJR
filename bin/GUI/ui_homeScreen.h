/********************************************************************************
** Form generated from reading UI file 'homeScreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

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

class Ui_HomeScreen
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_manager_airplane;
    QPushButton *button_manage_flight;
    QPushButton *button_manage_ticket;
    QLabel *label_title;
    QTableWidget *table_flight;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_edit_flight;
    QPushButton *button_delete_flight;
    QPushButton *button_buy_ticket;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName(QString::fromUtf8("HomeScreen"));
        HomeScreen->resize(800, 600);
        HomeScreen->setMinimumSize(QSize(800, 600));
        HomeScreen->setMaximumSize(QSize(800, 600));
        HomeScreen->setLayoutDirection(Qt::LeftToRight);
        HomeScreen->setAutoFillBackground(false);
        centralwidget = new QWidget(HomeScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(800, 549));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 510, 691, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_manager_airplane = new QPushButton(horizontalLayoutWidget);
        button_manager_airplane->setObjectName(QString::fromUtf8("button_manager_airplane"));

        horizontalLayout->addWidget(button_manager_airplane);

        button_manage_flight = new QPushButton(horizontalLayoutWidget);
        button_manage_flight->setObjectName(QString::fromUtf8("button_manage_flight"));

        horizontalLayout->addWidget(button_manage_flight);

        button_manage_ticket = new QPushButton(horizontalLayoutWidget);
        button_manage_ticket->setObjectName(QString::fromUtf8("button_manage_ticket"));

        horizontalLayout->addWidget(button_manage_ticket);

        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(50, 20, 201, 51));
        QFont font;
        font.setPointSize(22);
        label_title->setFont(font);
        table_flight = new QTableWidget(centralwidget);
        if (table_flight->columnCount() < 7)
            table_flight->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_flight->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_flight->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_flight->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_flight->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_flight->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_flight->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_flight->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (table_flight->rowCount() < 19)
            table_flight->setRowCount(19);
        table_flight->setObjectName(QString::fromUtf8("table_flight"));
        table_flight->setGeometry(QRect(50, 81, 691, 361));
        table_flight->setTabletTracking(false);
        table_flight->setLayoutDirection(Qt::LeftToRight);
        table_flight->setAutoFillBackground(false);
        table_flight->setFrameShape(QFrame::Box);
        table_flight->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        table_flight->setAutoScroll(true);
        table_flight->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_flight->setDragEnabled(false);
        table_flight->setAlternatingRowColors(true);
        table_flight->setTextElideMode(Qt::ElideRight);
        table_flight->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        table_flight->setShowGrid(true);
        table_flight->setGridStyle(Qt::SolidLine);
        table_flight->setSortingEnabled(true);
        table_flight->setWordWrap(true);
        table_flight->setCornerButtonEnabled(true);
        table_flight->setRowCount(19);
        table_flight->setColumnCount(7);
        table_flight->horizontalHeader()->setVisible(true);
        table_flight->horizontalHeader()->setCascadingSectionResizes(true);
        table_flight->horizontalHeader()->setDefaultSectionSize(134);
        table_flight->horizontalHeader()->setHighlightSections(true);
        table_flight->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_flight->horizontalHeader()->setStretchLastSection(false);
        table_flight->verticalHeader()->setVisible(false);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(290, 450, 451, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        button_edit_flight = new QPushButton(horizontalLayoutWidget_2);
        button_edit_flight->setObjectName(QString::fromUtf8("button_edit_flight"));

        horizontalLayout_2->addWidget(button_edit_flight);

        button_delete_flight = new QPushButton(horizontalLayoutWidget_2);
        button_delete_flight->setObjectName(QString::fromUtf8("button_delete_flight"));

        horizontalLayout_2->addWidget(button_delete_flight);

        button_buy_ticket = new QPushButton(horizontalLayoutWidget_2);
        button_buy_ticket->setObjectName(QString::fromUtf8("button_buy_ticket"));

        horizontalLayout_2->addWidget(button_buy_ticket);

        HomeScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomeScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        HomeScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(HomeScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HomeScreen->setStatusBar(statusbar);

        retranslateUi(HomeScreen);

        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QMainWindow *HomeScreen)
    {
        HomeScreen->setWindowTitle(QCoreApplication::translate("HomeScreen", "Home", nullptr));
        button_manager_airplane->setText(QCoreApplication::translate("HomeScreen", "Manage Airplanes", nullptr));
        button_manage_flight->setText(QCoreApplication::translate("HomeScreen", "Manage Flights", nullptr));
        button_manage_ticket->setText(QCoreApplication::translate("HomeScreen", "Manage Tickets", nullptr));
        label_title->setText(QCoreApplication::translate("HomeScreen", "Agency GJR", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_flight->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("HomeScreen", "Flight ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_flight->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("HomeScreen", "Airplane ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_flight->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("HomeScreen", "Flight Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_flight->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("HomeScreen", "Flight Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_flight->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("HomeScreen", "Origin", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_flight->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("HomeScreen", "Destiny", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_flight->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("HomeScreen", "Seats Available", nullptr));
        button_edit_flight->setText(QCoreApplication::translate("HomeScreen", "Edit Flight", nullptr));
        button_delete_flight->setText(QCoreApplication::translate("HomeScreen", "Delete Flight", nullptr));
        button_buy_ticket->setText(QCoreApplication::translate("HomeScreen", "Buy Ticket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
