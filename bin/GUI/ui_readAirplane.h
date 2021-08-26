/********************************************************************************
** Form generated from reading UI file 'readAirplane.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READAIRPLANE_H
#define UI_READAIRPLANE_H

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

class Ui_ReadAirplane
{
public:
    QWidget *centralwidget;
    QPushButton *button_cancel;
    QTableWidget *table_airplane;
    QLabel *label_title;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_edit_airplane;
    QPushButton *button_delete_airplane;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReadAirplane)
    {
        if (ReadAirplane->objectName().isEmpty())
            ReadAirplane->setObjectName(QString::fromUtf8("ReadAirplane"));
        ReadAirplane->resize(800, 600);
        centralwidget = new QWidget(ReadAirplane);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button_cancel = new QPushButton(centralwidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(640, 520, 93, 28));
        table_airplane = new QTableWidget(centralwidget);
        if (table_airplane->columnCount() < 7)
            table_airplane->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_airplane->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_airplane->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_airplane->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_airplane->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_airplane->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_airplane->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_airplane->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (table_airplane->rowCount() < 19)
            table_airplane->setRowCount(19);
        table_airplane->setObjectName(QString::fromUtf8("table_airplane"));
        table_airplane->setGeometry(QRect(50, 71, 691, 361));
        table_airplane->setTabletTracking(false);
        table_airplane->setLayoutDirection(Qt::LeftToRight);
        table_airplane->setAutoFillBackground(false);
        table_airplane->setFrameShape(QFrame::Box);
        table_airplane->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        table_airplane->setAutoScroll(true);
        table_airplane->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_airplane->setDragEnabled(false);
        table_airplane->setAlternatingRowColors(true);
        table_airplane->setTextElideMode(Qt::ElideRight);
        table_airplane->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        table_airplane->setShowGrid(true);
        table_airplane->setGridStyle(Qt::SolidLine);
        table_airplane->setSortingEnabled(true);
        table_airplane->setWordWrap(true);
        table_airplane->setCornerButtonEnabled(true);
        table_airplane->setRowCount(19);
        table_airplane->setColumnCount(7);
        table_airplane->horizontalHeader()->setVisible(true);
        table_airplane->horizontalHeader()->setCascadingSectionResizes(false);
        table_airplane->horizontalHeader()->setDefaultSectionSize(134);
        table_airplane->horizontalHeader()->setHighlightSections(true);
        table_airplane->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_airplane->horizontalHeader()->setStretchLastSection(false);
        table_airplane->verticalHeader()->setVisible(false);
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(50, 10, 201, 51));
        QFont font;
        font.setPointSize(22);
        label_title->setFont(font);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(420, 450, 321, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_edit_airplane = new QPushButton(horizontalLayoutWidget);
        button_edit_airplane->setObjectName(QString::fromUtf8("button_edit_airplane"));

        horizontalLayout->addWidget(button_edit_airplane);

        button_delete_airplane = new QPushButton(horizontalLayoutWidget);
        button_delete_airplane->setObjectName(QString::fromUtf8("button_delete_airplane"));

        horizontalLayout->addWidget(button_delete_airplane);

        ReadAirplane->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReadAirplane);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ReadAirplane->setMenuBar(menubar);
        statusbar = new QStatusBar(ReadAirplane);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ReadAirplane->setStatusBar(statusbar);

        retranslateUi(ReadAirplane);

        QMetaObject::connectSlotsByName(ReadAirplane);
    } // setupUi

    void retranslateUi(QMainWindow *ReadAirplane)
    {
        ReadAirplane->setWindowTitle(QCoreApplication::translate("ReadAirplane", "MainWindow", nullptr));
        button_cancel->setText(QCoreApplication::translate("ReadAirplane", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_airplane->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ReadAirplane", "Airplane ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_airplane->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ReadAirplane", "Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_airplane->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ReadAirplane", "Manufacturer", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_airplane->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ReadAirplane", "Registration", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_airplane->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ReadAirplane", "Pilot", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_airplane->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ReadAirplane", "Copilot", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_airplane->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ReadAirplane", "Capacity", nullptr));
        label_title->setText(QCoreApplication::translate("ReadAirplane", "Airplane", nullptr));
        button_edit_airplane->setText(QCoreApplication::translate("ReadAirplane", "Edit Airplane", nullptr));
        button_delete_airplane->setText(QCoreApplication::translate("ReadAirplane", "Delete Airplane", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadAirplane: public Ui_ReadAirplane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READAIRPLANE_H
