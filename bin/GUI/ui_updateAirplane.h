/********************************************************************************
** Form generated from reading UI file 'updateAirplane.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEAIRPLANE_H
#define UI_UPDATEAIRPLANE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateAirplane
{
public:
    QWidget *centralwidget;
    QLineEdit *edit_field_registration;
    QLineEdit *edit_field_manufacturer;
    QLabel *label_field_manufacturer;
    QLineEdit *edit_field_model;
    QLineEdit *edit_field_copilot;
    QLabel *label_field_model;
    QLabel *label_field_capacity;
    QLabel *label_title;
    QLineEdit *line_edit_pilot;
    QSpinBox *spin_box_capacity;
    QLabel *label_field_pilot;
    QLabel *label_field_registration;
    QLabel *label_field_copilot;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_update_airplane;
    QPushButton *button_cancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdateAirplane)
    {
        if (UpdateAirplane->objectName().isEmpty())
            UpdateAirplane->setObjectName(QString::fromUtf8("UpdateAirplane"));
        UpdateAirplane->resize(800, 600);
        centralwidget = new QWidget(UpdateAirplane);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        edit_field_registration = new QLineEdit(centralwidget);
        edit_field_registration->setObjectName(QString::fromUtf8("edit_field_registration"));
        edit_field_registration->setGeometry(QRect(50, 300, 301, 21));
        edit_field_registration->setFrame(true);
        edit_field_registration->setCursorPosition(0);
        edit_field_registration->setCursorMoveStyle(Qt::LogicalMoveStyle);
        edit_field_registration->setClearButtonEnabled(false);
        edit_field_manufacturer = new QLineEdit(centralwidget);
        edit_field_manufacturer->setObjectName(QString::fromUtf8("edit_field_manufacturer"));
        edit_field_manufacturer->setGeometry(QRect(50, 230, 301, 21));
        label_field_manufacturer = new QLabel(centralwidget);
        label_field_manufacturer->setObjectName(QString::fromUtf8("label_field_manufacturer"));
        label_field_manufacturer->setGeometry(QRect(50, 210, 111, 16));
        edit_field_model = new QLineEdit(centralwidget);
        edit_field_model->setObjectName(QString::fromUtf8("edit_field_model"));
        edit_field_model->setGeometry(QRect(50, 160, 301, 21));
        edit_field_copilot = new QLineEdit(centralwidget);
        edit_field_copilot->setObjectName(QString::fromUtf8("edit_field_copilot"));
        edit_field_copilot->setGeometry(QRect(460, 300, 301, 21));
        label_field_model = new QLabel(centralwidget);
        label_field_model->setObjectName(QString::fromUtf8("label_field_model"));
        label_field_model->setGeometry(QRect(50, 140, 55, 16));
        label_field_capacity = new QLabel(centralwidget);
        label_field_capacity->setObjectName(QString::fromUtf8("label_field_capacity"));
        label_field_capacity->setGeometry(QRect(460, 140, 81, 16));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(50, 70, 401, 41));
        QFont font;
        font.setPointSize(14);
        label_title->setFont(font);
        line_edit_pilot = new QLineEdit(centralwidget);
        line_edit_pilot->setObjectName(QString::fromUtf8("line_edit_pilot"));
        line_edit_pilot->setGeometry(QRect(460, 230, 301, 21));
        spin_box_capacity = new QSpinBox(centralwidget);
        spin_box_capacity->setObjectName(QString::fromUtf8("spin_box_capacity"));
        spin_box_capacity->setGeometry(QRect(460, 160, 91, 22));
        spin_box_capacity->setMaximum(900);
        label_field_pilot = new QLabel(centralwidget);
        label_field_pilot->setObjectName(QString::fromUtf8("label_field_pilot"));
        label_field_pilot->setGeometry(QRect(460, 210, 55, 16));
        label_field_registration = new QLabel(centralwidget);
        label_field_registration->setObjectName(QString::fromUtf8("label_field_registration"));
        label_field_registration->setGeometry(QRect(50, 280, 91, 16));
        label_field_copilot = new QLabel(centralwidget);
        label_field_copilot->setObjectName(QString::fromUtf8("label_field_copilot"));
        label_field_copilot->setGeometry(QRect(460, 280, 55, 16));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(480, 450, 281, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_update_airplane = new QPushButton(horizontalLayoutWidget);
        button_update_airplane->setObjectName(QString::fromUtf8("button_update_airplane"));

        horizontalLayout->addWidget(button_update_airplane);

        button_cancel = new QPushButton(horizontalLayoutWidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));

        horizontalLayout->addWidget(button_cancel);

        UpdateAirplane->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UpdateAirplane);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        UpdateAirplane->setMenuBar(menubar);
        statusbar = new QStatusBar(UpdateAirplane);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UpdateAirplane->setStatusBar(statusbar);

        retranslateUi(UpdateAirplane);

        QMetaObject::connectSlotsByName(UpdateAirplane);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateAirplane)
    {
        UpdateAirplane->setWindowTitle(QCoreApplication::translate("UpdateAirplane", "MainWindow", nullptr));
        edit_field_registration->setInputMask(QCoreApplication::translate("UpdateAirplane", ">AA-AAA", nullptr));
        edit_field_registration->setText(QCoreApplication::translate("UpdateAirplane", "-", nullptr));
        label_field_manufacturer->setText(QCoreApplication::translate("UpdateAirplane", "Manufacturer", nullptr));
        label_field_model->setText(QCoreApplication::translate("UpdateAirplane", "Model", nullptr));
        label_field_capacity->setText(QCoreApplication::translate("UpdateAirplane", "Capacity", nullptr));
        label_title->setText(QCoreApplication::translate("UpdateAirplane", "Edit the desired fields", nullptr));
        label_field_pilot->setText(QCoreApplication::translate("UpdateAirplane", "Pilot", nullptr));
        label_field_registration->setText(QCoreApplication::translate("UpdateAirplane", "Registration", nullptr));
        label_field_copilot->setText(QCoreApplication::translate("UpdateAirplane", "Co-Pilot", nullptr));
        button_update_airplane->setText(QCoreApplication::translate("UpdateAirplane", "Update", nullptr));
        button_cancel->setText(QCoreApplication::translate("UpdateAirplane", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateAirplane: public Ui_UpdateAirplane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEAIRPLANE_H
