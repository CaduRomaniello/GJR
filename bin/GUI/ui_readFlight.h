/********************************************************************************
** Form generated from reading UI file 'readFlight.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READFLIGHT_H
#define UI_READFLIGHT_H

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

class Ui_ReadFlight
{
public:
    QWidget *centralwidget;
    QPushButton *button_cancel;
    QLabel *label_title;
    QTableWidget *table_flight;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_edit_flight;
    QPushButton *button_delete_flight;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReadFlight)
    {
        if (ReadFlight->objectName().isEmpty())
            ReadFlight->setObjectName(QString::fromUtf8("ReadFlight"));
        ReadFlight->resize(800, 600);
        centralwidget = new QWidget(ReadFlight);
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
        table_flight->setGeometry(QRect(50, 70, 691, 361));
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
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(420, 440, 321, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_edit_flight = new QPushButton(horizontalLayoutWidget);
        button_edit_flight->setObjectName(QString::fromUtf8("button_edit_flight"));

        horizontalLayout->addWidget(button_edit_flight);

        button_delete_flight = new QPushButton(horizontalLayoutWidget);
        button_delete_flight->setObjectName(QString::fromUtf8("button_delete_flight"));

        horizontalLayout->addWidget(button_delete_flight);

        ReadFlight->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReadFlight);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ReadFlight->setMenuBar(menubar);
        statusbar = new QStatusBar(ReadFlight);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ReadFlight->setStatusBar(statusbar);

        retranslateUi(ReadFlight);

        QMetaObject::connectSlotsByName(ReadFlight);
    } // setupUi

    void retranslateUi(QMainWindow *ReadFlight)
    {
        ReadFlight->setWindowTitle(QCoreApplication::translate("ReadFlight", "MainWindow", nullptr));
        button_cancel->setText(QCoreApplication::translate("ReadFlight", "Back", nullptr));
        label_title->setText(QCoreApplication::translate("ReadFlight", "Flight", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_flight->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ReadFlight", "Flight ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_flight->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ReadFlight", "Airplane ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_flight->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ReadFlight", "Flight Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_flight->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ReadFlight", "Flight Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_flight->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ReadFlight", "Origin", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_flight->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ReadFlight", "Destiny", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_flight->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ReadFlight", "Seats Available", nullptr));
        button_edit_flight->setText(QCoreApplication::translate("ReadFlight", "Edit Flight", nullptr));
        button_delete_flight->setText(QCoreApplication::translate("ReadFlight", "Delete Flight", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadFlight: public Ui_ReadFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READFLIGHT_H
