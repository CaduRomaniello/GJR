/********************************************************************************
** Form generated from reading UI file 'updateFlight.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEFLIGHT_H
#define UI_UPDATEFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_UpdateFlight
{
public:
    QWidget *centralwidget;
    QPushButton *button_cancel;
    QLabel *label_field_available;
    QTimeEdit *time_flight;
    QDateEdit *date_flight;
    QLabel *label_field_time;
    QLabel *label_field_date;
    QLabel *label_field_id_airplane;
    QSpinBox *spin_box_available_seats;
    QLineEdit *line_edit_origin;
    QLabel *label_field_origin;
    QLabel *label_field_destiny;
    QComboBox *combo_box_id_airplane;
    QLineEdit *edit_label_destiny;
    QPushButton *button_update;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdateFlight)
    {
        if (UpdateFlight->objectName().isEmpty())
            UpdateFlight->setObjectName(QString::fromUtf8("UpdateFlight"));
        UpdateFlight->resize(800, 600);
        UpdateFlight->setMinimumSize(QSize(800, 600));
        UpdateFlight->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(UpdateFlight);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button_cancel = new QPushButton(centralwidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(630, 490, 93, 28));
        label_field_available = new QLabel(centralwidget);
        label_field_available->setObjectName(QString::fromUtf8("label_field_available"));
        label_field_available->setGeometry(QRect(460, 140, 171, 16));
        time_flight = new QTimeEdit(centralwidget);
        time_flight->setObjectName(QString::fromUtf8("time_flight"));
        time_flight->setGeometry(QRect(50, 160, 118, 22));
        date_flight = new QDateEdit(centralwidget);
        date_flight->setObjectName(QString::fromUtf8("date_flight"));
        date_flight->setGeometry(QRect(50, 230, 110, 22));
        label_field_time = new QLabel(centralwidget);
        label_field_time->setObjectName(QString::fromUtf8("label_field_time"));
        label_field_time->setGeometry(QRect(50, 140, 55, 16));
        label_field_date = new QLabel(centralwidget);
        label_field_date->setObjectName(QString::fromUtf8("label_field_date"));
        label_field_date->setGeometry(QRect(50, 210, 111, 16));
        label_field_id_airplane = new QLabel(centralwidget);
        label_field_id_airplane->setObjectName(QString::fromUtf8("label_field_id_airplane"));
        label_field_id_airplane->setGeometry(QRect(50, 280, 101, 16));
        spin_box_available_seats = new QSpinBox(centralwidget);
        spin_box_available_seats->setObjectName(QString::fromUtf8("spin_box_available_seats"));
        spin_box_available_seats->setGeometry(QRect(460, 160, 91, 22));
        spin_box_available_seats->setMaximum(900);
        line_edit_origin = new QLineEdit(centralwidget);
        line_edit_origin->setObjectName(QString::fromUtf8("line_edit_origin"));
        line_edit_origin->setGeometry(QRect(460, 230, 301, 21));
        label_field_origin = new QLabel(centralwidget);
        label_field_origin->setObjectName(QString::fromUtf8("label_field_origin"));
        label_field_origin->setGeometry(QRect(460, 210, 55, 16));
        label_field_destiny = new QLabel(centralwidget);
        label_field_destiny->setObjectName(QString::fromUtf8("label_field_destiny"));
        label_field_destiny->setGeometry(QRect(460, 280, 55, 16));
        combo_box_id_airplane = new QComboBox(centralwidget);
        combo_box_id_airplane->setObjectName(QString::fromUtf8("combo_box_id_airplane"));
        combo_box_id_airplane->setGeometry(QRect(50, 300, 161, 22));
        edit_label_destiny = new QLineEdit(centralwidget);
        edit_label_destiny->setObjectName(QString::fromUtf8("edit_label_destiny"));
        edit_label_destiny->setGeometry(QRect(460, 300, 301, 21));
        button_update = new QPushButton(centralwidget);
        button_update->setObjectName(QString::fromUtf8("button_update"));
        button_update->setGeometry(QRect(520, 490, 93, 28));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 251, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        UpdateFlight->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UpdateFlight);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        UpdateFlight->setMenuBar(menubar);
        statusbar = new QStatusBar(UpdateFlight);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UpdateFlight->setStatusBar(statusbar);

        retranslateUi(UpdateFlight);

        QMetaObject::connectSlotsByName(UpdateFlight);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateFlight)
    {
        UpdateFlight->setWindowTitle(QCoreApplication::translate("UpdateFlight", "MainWindow", nullptr));
        button_cancel->setText(QCoreApplication::translate("UpdateFlight", "Cancel", nullptr));
        label_field_available->setText(QCoreApplication::translate("UpdateFlight", "Number of available seates", nullptr));
        label_field_time->setText(QCoreApplication::translate("UpdateFlight", "Time", nullptr));
        label_field_date->setText(QCoreApplication::translate("UpdateFlight", "Date", nullptr));
        label_field_id_airplane->setText(QCoreApplication::translate("UpdateFlight", "Airplane ID", nullptr));
        label_field_origin->setText(QCoreApplication::translate("UpdateFlight", "Origin", nullptr));
        label_field_destiny->setText(QCoreApplication::translate("UpdateFlight", "Destiny", nullptr));
        button_update->setText(QCoreApplication::translate("UpdateFlight", "Update", nullptr));
        label->setText(QCoreApplication::translate("UpdateFlight", "Edit the desired fields", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateFlight: public Ui_UpdateFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEFLIGHT_H
