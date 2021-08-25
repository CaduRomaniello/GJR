/********************************************************************************
** Form generated from reading UI file 'updateTicket.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATETICKET_H
#define UI_UPDATETICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateTicket
{
public:
    QWidget *centralwidget;
    QLineEdit *edit_field_destiny;
    QLineEdit *edit_field_name;
    QLabel *label_field_seat;
    QComboBox *combo_box_id_flight;
    QLabel *label_field_origin;
    QLineEdit *line_edit_origin;
    QLabel *label_title;
    QLabel *label_field_date;
    QTimeEdit *time_flight;
    QLabel *label_field_destiny;
    QSpinBox *spin_box_number_seat;
    QLabel *label_field_id_flight;
    QLabel *label_field_name;
    QLabel *label_field_time;
    QDateEdit *date_ticket;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_update_ticket;
    QPushButton *button_cancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdateTicket)
    {
        if (UpdateTicket->objectName().isEmpty())
            UpdateTicket->setObjectName(QString::fromUtf8("UpdateTicket"));
        UpdateTicket->resize(800, 800);
        UpdateTicket->setMinimumSize(QSize(800, 800));
        UpdateTicket->setMaximumSize(QSize(800, 800));
        centralwidget = new QWidget(UpdateTicket);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        edit_field_destiny = new QLineEdit(centralwidget);
        edit_field_destiny->setObjectName(QString::fromUtf8("edit_field_destiny"));
        edit_field_destiny->setGeometry(QRect(450, 380, 301, 21));
        edit_field_name = new QLineEdit(centralwidget);
        edit_field_name->setObjectName(QString::fromUtf8("edit_field_name"));
        edit_field_name->setGeometry(QRect(40, 240, 301, 21));
        label_field_seat = new QLabel(centralwidget);
        label_field_seat->setObjectName(QString::fromUtf8("label_field_seat"));
        label_field_seat->setGeometry(QRect(40, 290, 55, 16));
        combo_box_id_flight = new QComboBox(centralwidget);
        combo_box_id_flight->setObjectName(QString::fromUtf8("combo_box_id_flight"));
        combo_box_id_flight->setGeometry(QRect(40, 170, 161, 22));
        label_field_origin = new QLabel(centralwidget);
        label_field_origin->setObjectName(QString::fromUtf8("label_field_origin"));
        label_field_origin->setGeometry(QRect(450, 290, 55, 16));
        line_edit_origin = new QLineEdit(centralwidget);
        line_edit_origin->setObjectName(QString::fromUtf8("line_edit_origin"));
        line_edit_origin->setGeometry(QRect(450, 310, 301, 21));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(40, 80, 351, 41));
        QFont font;
        font.setPointSize(14);
        label_title->setFont(font);
        label_field_date = new QLabel(centralwidget);
        label_field_date->setObjectName(QString::fromUtf8("label_field_date"));
        label_field_date->setGeometry(QRect(450, 150, 55, 16));
        time_flight = new QTimeEdit(centralwidget);
        time_flight->setObjectName(QString::fromUtf8("time_flight"));
        time_flight->setGeometry(QRect(40, 380, 118, 22));
        label_field_destiny = new QLabel(centralwidget);
        label_field_destiny->setObjectName(QString::fromUtf8("label_field_destiny"));
        label_field_destiny->setGeometry(QRect(450, 360, 55, 16));
        spin_box_number_seat = new QSpinBox(centralwidget);
        spin_box_number_seat->setObjectName(QString::fromUtf8("spin_box_number_seat"));
        spin_box_number_seat->setGeometry(QRect(40, 310, 91, 22));
        spin_box_number_seat->setMaximum(900);
        label_field_id_flight = new QLabel(centralwidget);
        label_field_id_flight->setObjectName(QString::fromUtf8("label_field_id_flight"));
        label_field_id_flight->setGeometry(QRect(40, 150, 55, 16));
        label_field_name = new QLabel(centralwidget);
        label_field_name->setObjectName(QString::fromUtf8("label_field_name"));
        label_field_name->setGeometry(QRect(40, 220, 111, 16));
        label_field_time = new QLabel(centralwidget);
        label_field_time->setObjectName(QString::fromUtf8("label_field_time"));
        label_field_time->setGeometry(QRect(40, 360, 55, 16));
        date_ticket = new QDateEdit(centralwidget);
        date_ticket->setObjectName(QString::fromUtf8("date_ticket"));
        date_ticket->setGeometry(QRect(450, 170, 110, 22));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(490, 470, 261, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_update_ticket = new QPushButton(horizontalLayoutWidget);
        button_update_ticket->setObjectName(QString::fromUtf8("button_update_ticket"));

        horizontalLayout->addWidget(button_update_ticket);

        button_cancel = new QPushButton(horizontalLayoutWidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));

        horizontalLayout->addWidget(button_cancel);

        UpdateTicket->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UpdateTicket);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        UpdateTicket->setMenuBar(menubar);
        statusbar = new QStatusBar(UpdateTicket);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UpdateTicket->setStatusBar(statusbar);

        retranslateUi(UpdateTicket);

        QMetaObject::connectSlotsByName(UpdateTicket);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateTicket)
    {
        UpdateTicket->setWindowTitle(QCoreApplication::translate("UpdateTicket", "MainWindow", nullptr));
        label_field_seat->setText(QCoreApplication::translate("UpdateTicket", "Seat", nullptr));
        label_field_origin->setText(QCoreApplication::translate("UpdateTicket", "Origin", nullptr));
        label_title->setText(QCoreApplication::translate("UpdateTicket", "Edit the desired fields", nullptr));
        label_field_date->setText(QCoreApplication::translate("UpdateTicket", "Date", nullptr));
        label_field_destiny->setText(QCoreApplication::translate("UpdateTicket", "Destiny", nullptr));
        label_field_id_flight->setText(QCoreApplication::translate("UpdateTicket", "Flight ID", nullptr));
        label_field_name->setText(QCoreApplication::translate("UpdateTicket", "Passenger Name", nullptr));
        label_field_time->setText(QCoreApplication::translate("UpdateTicket", "Time", nullptr));
        button_update_ticket->setText(QCoreApplication::translate("UpdateTicket", "Update", nullptr));
        button_cancel->setText(QCoreApplication::translate("UpdateTicket", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateTicket: public Ui_UpdateTicket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATETICKET_H
