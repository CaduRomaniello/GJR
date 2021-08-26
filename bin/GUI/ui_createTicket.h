/********************************************************************************
** Form generated from reading UI file 'createTicket.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETICKET_H
#define UI_CREATETICKET_H

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

class Ui_CreateTicket
{
public:
    QWidget *centralwidget;
    QLabel *label_title;
    QLabel *label_field_id_flight;
    QLabel *label_field_name;
    QLineEdit *edit_field_name;
    QLabel *label_field_seat;
    QLabel *label_field_time;
    QLineEdit *line_edit_origin;
    QLabel *label_field_date;
    QLabel *label_field_origin;
    QLabel *label_field_destiny;
    QLineEdit *edit_field_destiny;
    QSpinBox *spin_box_number_seat;
    QComboBox *combo_box_id_flight;
    QDateEdit *date_ticket;
    QTimeEdit *time_flight;
    QLabel *label_cpf;
    QLineEdit *edit_field_cpf;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_create;
    QPushButton *button_cancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateTicket)
    {
        if (CreateTicket->objectName().isEmpty())
            CreateTicket->setObjectName(QString::fromUtf8("CreateTicket"));
        CreateTicket->resize(861, 600);
        centralwidget = new QWidget(CreateTicket);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(50, 40, 351, 41));
        QFont font;
        font.setPointSize(14);
        label_title->setFont(font);
        label_field_id_flight = new QLabel(centralwidget);
        label_field_id_flight->setObjectName(QString::fromUtf8("label_field_id_flight"));
        label_field_id_flight->setGeometry(QRect(50, 110, 55, 16));
        label_field_name = new QLabel(centralwidget);
        label_field_name->setObjectName(QString::fromUtf8("label_field_name"));
        label_field_name->setGeometry(QRect(50, 180, 111, 16));
        edit_field_name = new QLineEdit(centralwidget);
        edit_field_name->setObjectName(QString::fromUtf8("edit_field_name"));
        edit_field_name->setGeometry(QRect(50, 200, 301, 21));
        label_field_seat = new QLabel(centralwidget);
        label_field_seat->setObjectName(QString::fromUtf8("label_field_seat"));
        label_field_seat->setGeometry(QRect(50, 250, 55, 16));
        label_field_time = new QLabel(centralwidget);
        label_field_time->setObjectName(QString::fromUtf8("label_field_time"));
        label_field_time->setGeometry(QRect(50, 320, 55, 16));
        line_edit_origin = new QLineEdit(centralwidget);
        line_edit_origin->setObjectName(QString::fromUtf8("line_edit_origin"));
        line_edit_origin->setGeometry(QRect(460, 270, 301, 21));
        label_field_date = new QLabel(centralwidget);
        label_field_date->setObjectName(QString::fromUtf8("label_field_date"));
        label_field_date->setGeometry(QRect(460, 110, 55, 16));
        label_field_origin = new QLabel(centralwidget);
        label_field_origin->setObjectName(QString::fromUtf8("label_field_origin"));
        label_field_origin->setGeometry(QRect(460, 250, 55, 16));
        label_field_destiny = new QLabel(centralwidget);
        label_field_destiny->setObjectName(QString::fromUtf8("label_field_destiny"));
        label_field_destiny->setGeometry(QRect(460, 320, 55, 16));
        edit_field_destiny = new QLineEdit(centralwidget);
        edit_field_destiny->setObjectName(QString::fromUtf8("edit_field_destiny"));
        edit_field_destiny->setGeometry(QRect(460, 340, 301, 21));
        spin_box_number_seat = new QSpinBox(centralwidget);
        spin_box_number_seat->setObjectName(QString::fromUtf8("spin_box_number_seat"));
        spin_box_number_seat->setGeometry(QRect(50, 270, 91, 22));
        spin_box_number_seat->setMaximum(900);
        combo_box_id_flight = new QComboBox(centralwidget);
        combo_box_id_flight->setObjectName(QString::fromUtf8("combo_box_id_flight"));
        combo_box_id_flight->setGeometry(QRect(50, 130, 161, 22));
        date_ticket = new QDateEdit(centralwidget);
        date_ticket->setObjectName(QString::fromUtf8("date_ticket"));
        date_ticket->setGeometry(QRect(460, 130, 110, 22));
        time_flight = new QTimeEdit(centralwidget);
        time_flight->setObjectName(QString::fromUtf8("time_flight"));
        time_flight->setGeometry(QRect(50, 340, 118, 22));
        label_cpf = new QLabel(centralwidget);
        label_cpf->setObjectName(QString::fromUtf8("label_cpf"));
        label_cpf->setGeometry(QRect(460, 180, 55, 16));
        edit_field_cpf = new QLineEdit(centralwidget);
        edit_field_cpf->setObjectName(QString::fromUtf8("edit_field_cpf"));
        edit_field_cpf->setGeometry(QRect(460, 200, 171, 22));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(510, 450, 251, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_create = new QPushButton(horizontalLayoutWidget);
        button_create->setObjectName(QString::fromUtf8("button_create"));

        horizontalLayout->addWidget(button_create);

        button_cancel = new QPushButton(horizontalLayoutWidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));

        horizontalLayout->addWidget(button_cancel);

        CreateTicket->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateTicket);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 861, 25));
        CreateTicket->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateTicket);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CreateTicket->setStatusBar(statusbar);

        retranslateUi(CreateTicket);

        QMetaObject::connectSlotsByName(CreateTicket);
    } // setupUi

    void retranslateUi(QMainWindow *CreateTicket)
    {
        CreateTicket->setWindowTitle(QCoreApplication::translate("CreateTicket", "MainWindow", nullptr));
        label_title->setText(QCoreApplication::translate("CreateTicket", "Fill in the fields to create a ticket", nullptr));
        label_field_id_flight->setText(QCoreApplication::translate("CreateTicket", "Flight ID", nullptr));
        label_field_name->setText(QCoreApplication::translate("CreateTicket", "Passenger Name", nullptr));
        label_field_seat->setText(QCoreApplication::translate("CreateTicket", "Seat", nullptr));
        label_field_time->setText(QCoreApplication::translate("CreateTicket", "Time", nullptr));
        label_field_date->setText(QCoreApplication::translate("CreateTicket", "Date", nullptr));
        label_field_origin->setText(QCoreApplication::translate("CreateTicket", "Origin", nullptr));
        label_field_destiny->setText(QCoreApplication::translate("CreateTicket", "Destiny", nullptr));
        label_cpf->setText(QCoreApplication::translate("CreateTicket", "CPF", nullptr));
        button_create->setText(QCoreApplication::translate("CreateTicket", "Create", nullptr));
        button_cancel->setText(QCoreApplication::translate("CreateTicket", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateTicket: public Ui_CreateTicket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETICKET_H
