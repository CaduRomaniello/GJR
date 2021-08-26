/********************************************************************************
** Form generated from reading UI file 'readTicket.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READTICKET_H
#define UI_READTICKET_H

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

class Ui_ReadTicket
{
public:
    QWidget *centralwidget;
    QPushButton *button_cancel;
    QLabel *label_title;
    QTableWidget *table_ticket;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_edit_ticket;
    QPushButton *button_delete_ticket;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReadTicket)
    {
        if (ReadTicket->objectName().isEmpty())
            ReadTicket->setObjectName(QString::fromUtf8("ReadTicket"));
        ReadTicket->resize(800, 600);
        centralwidget = new QWidget(ReadTicket);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button_cancel = new QPushButton(centralwidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(640, 520, 93, 28));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(50, 9, 201, 51));
        QFont font;
        font.setPointSize(22);
        label_title->setFont(font);
        table_ticket = new QTableWidget(centralwidget);
        if (table_ticket->columnCount() < 8)
            table_ticket->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_ticket->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_ticket->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_ticket->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_ticket->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_ticket->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_ticket->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_ticket->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_ticket->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (table_ticket->rowCount() < 19)
            table_ticket->setRowCount(19);
        table_ticket->setObjectName(QString::fromUtf8("table_ticket"));
        table_ticket->setGeometry(QRect(50, 70, 691, 361));
        table_ticket->setTabletTracking(false);
        table_ticket->setLayoutDirection(Qt::LeftToRight);
        table_ticket->setAutoFillBackground(false);
        table_ticket->setFrameShape(QFrame::Box);
        table_ticket->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        table_ticket->setAutoScroll(true);
        table_ticket->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_ticket->setDragEnabled(false);
        table_ticket->setAlternatingRowColors(true);
        table_ticket->setTextElideMode(Qt::ElideRight);
        table_ticket->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        table_ticket->setShowGrid(true);
        table_ticket->setGridStyle(Qt::SolidLine);
        table_ticket->setSortingEnabled(true);
        table_ticket->setWordWrap(true);
        table_ticket->setCornerButtonEnabled(true);
        table_ticket->setRowCount(19);
        table_ticket->setColumnCount(8);
        table_ticket->horizontalHeader()->setVisible(true);
        table_ticket->horizontalHeader()->setCascadingSectionResizes(true);
        table_ticket->horizontalHeader()->setDefaultSectionSize(134);
        table_ticket->horizontalHeader()->setHighlightSections(true);
        table_ticket->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_ticket->horizontalHeader()->setStretchLastSection(false);
        table_ticket->verticalHeader()->setVisible(false);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(420, 440, 321, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_edit_ticket = new QPushButton(horizontalLayoutWidget);
        button_edit_ticket->setObjectName(QString::fromUtf8("button_edit_ticket"));

        horizontalLayout->addWidget(button_edit_ticket);

        button_delete_ticket = new QPushButton(horizontalLayoutWidget);
        button_delete_ticket->setObjectName(QString::fromUtf8("button_delete_ticket"));

        horizontalLayout->addWidget(button_delete_ticket);

        ReadTicket->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReadTicket);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ReadTicket->setMenuBar(menubar);
        statusbar = new QStatusBar(ReadTicket);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ReadTicket->setStatusBar(statusbar);

        retranslateUi(ReadTicket);

        QMetaObject::connectSlotsByName(ReadTicket);
    } // setupUi

    void retranslateUi(QMainWindow *ReadTicket)
    {
        ReadTicket->setWindowTitle(QCoreApplication::translate("ReadTicket", "MainWindow", nullptr));
        button_cancel->setText(QCoreApplication::translate("ReadTicket", "Cancel", nullptr));
        label_title->setText(QCoreApplication::translate("ReadTicket", "Ticket", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_ticket->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ReadTicket", "Ticket ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_ticket->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ReadTicket", "Flight ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_ticket->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ReadTicket", "Passenger Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_ticket->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ReadTicket", "Seat", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_ticket->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ReadTicket", "Flight Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_ticket->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ReadTicket", "Flight Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_ticket->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ReadTicket", "Origin", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table_ticket->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ReadTicket", "Destiny", nullptr));
        button_edit_ticket->setText(QCoreApplication::translate("ReadTicket", "Edit Ticket", nullptr));
        button_delete_ticket->setText(QCoreApplication::translate("ReadTicket", "Delete Ticket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadTicket: public Ui_ReadTicket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READTICKET_H
