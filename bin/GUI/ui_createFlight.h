/********************************************************************************
** Form generated from reading UI file 'createFlight.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEFLIGHT_H
#define UI_CREATEFLIGHT_H

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

class Ui_CreateFlight
{
public:
    QWidget *centralwidget;
    QLabel *label_field_time;
    QLabel *label_field_destiny;
    QLabel *label_field_available;
    QComboBox *combo_box_id_airplane;
    QSpinBox *spin_box_available_seats;
    QTimeEdit *time_flight;
    QLineEdit *edit_label_destiny;
    QDateEdit *date_flight;
    QLabel *label_field_origin;
    QLabel *label_title;
    QLabel *label_field_date;
    QLabel *label_field_id_airplane;
    QLineEdit *line_edit_origin;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_create;
    QPushButton *button_cancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateFlight)
    {
        if (CreateFlight->objectName().isEmpty())
            CreateFlight->setObjectName(QString::fromUtf8("CreateFlight"));
        CreateFlight->resize(800, 600);
        centralwidget = new QWidget(CreateFlight);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_field_time = new QLabel(centralwidget);
        label_field_time->setObjectName(QString::fromUtf8("label_field_time"));
        label_field_time->setGeometry(QRect(40, 110, 55, 16));
        label_field_destiny = new QLabel(centralwidget);
        label_field_destiny->setObjectName(QString::fromUtf8("label_field_destiny"));
        label_field_destiny->setGeometry(QRect(450, 250, 55, 16));
        label_field_available = new QLabel(centralwidget);
        label_field_available->setObjectName(QString::fromUtf8("label_field_available"));
        label_field_available->setGeometry(QRect(450, 110, 171, 16));
        combo_box_id_airplane = new QComboBox(centralwidget);
        combo_box_id_airplane->setObjectName(QString::fromUtf8("combo_box_id_airplane"));
        combo_box_id_airplane->setGeometry(QRect(40, 270, 161, 22));
        spin_box_available_seats = new QSpinBox(centralwidget);
        spin_box_available_seats->setObjectName(QString::fromUtf8("spin_box_available_seats"));
        spin_box_available_seats->setGeometry(QRect(450, 130, 91, 22));
        spin_box_available_seats->setMaximum(900);
        time_flight = new QTimeEdit(centralwidget);
        time_flight->setObjectName(QString::fromUtf8("time_flight"));
        time_flight->setGeometry(QRect(40, 130, 118, 22));
        edit_label_destiny = new QLineEdit(centralwidget);
        edit_label_destiny->setObjectName(QString::fromUtf8("edit_label_destiny"));
        edit_label_destiny->setGeometry(QRect(450, 270, 301, 21));
        date_flight = new QDateEdit(centralwidget);
        date_flight->setObjectName(QString::fromUtf8("date_flight"));
        date_flight->setGeometry(QRect(40, 200, 110, 22));
        label_field_origin = new QLabel(centralwidget);
        label_field_origin->setObjectName(QString::fromUtf8("label_field_origin"));
        label_field_origin->setGeometry(QRect(450, 180, 55, 16));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(40, 40, 351, 41));
        QFont font;
        font.setPointSize(14);
        label_title->setFont(font);
        label_field_date = new QLabel(centralwidget);
        label_field_date->setObjectName(QString::fromUtf8("label_field_date"));
        label_field_date->setGeometry(QRect(40, 180, 111, 16));
        label_field_id_airplane = new QLabel(centralwidget);
        label_field_id_airplane->setObjectName(QString::fromUtf8("label_field_id_airplane"));
        label_field_id_airplane->setGeometry(QRect(40, 250, 101, 16));
        line_edit_origin = new QLineEdit(centralwidget);
        line_edit_origin->setObjectName(QString::fromUtf8("line_edit_origin"));
        line_edit_origin->setGeometry(QRect(450, 200, 301, 21));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(548, 450, 231, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_create = new QPushButton(horizontalLayoutWidget);
        button_create->setObjectName(QString::fromUtf8("button_create"));

        horizontalLayout->addWidget(button_create);

        button_cancel = new QPushButton(horizontalLayoutWidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));

        horizontalLayout->addWidget(button_cancel);

        CreateFlight->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateFlight);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        CreateFlight->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateFlight);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CreateFlight->setStatusBar(statusbar);

        retranslateUi(CreateFlight);

        QMetaObject::connectSlotsByName(CreateFlight);
    } // setupUi

    void retranslateUi(QMainWindow *CreateFlight)
    {
        CreateFlight->setWindowTitle(QCoreApplication::translate("CreateFlight", "MainWindow", nullptr));
        label_field_time->setText(QCoreApplication::translate("CreateFlight", "Time", nullptr));
        label_field_destiny->setText(QCoreApplication::translate("CreateFlight", "Destiny", nullptr));
        label_field_available->setText(QCoreApplication::translate("CreateFlight", "Number of available seates", nullptr));
        label_field_origin->setText(QCoreApplication::translate("CreateFlight", "Origin", nullptr));
        label_title->setText(QCoreApplication::translate("CreateFlight", "Fill in the fields to create a flight", nullptr));
        label_field_date->setText(QCoreApplication::translate("CreateFlight", "Date", nullptr));
        label_field_id_airplane->setText(QCoreApplication::translate("CreateFlight", "Airplane ID", nullptr));
        button_create->setText(QCoreApplication::translate("CreateFlight", "Create", nullptr));
        button_cancel->setText(QCoreApplication::translate("CreateFlight", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateFlight: public Ui_CreateFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEFLIGHT_H
