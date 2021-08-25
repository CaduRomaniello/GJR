/********************************************************************************
** Form generated from reading UI file 'createAirplane.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEAIRPLANE_H
#define UI_CREATEAIRPLANE_H

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

class Ui_CreateAirplane
{
public:
    QWidget *centralwidget;
    QLineEdit *edit_field_manufacturer;
    QLabel *label_field_model;
    QLabel *label_field_copilot;
    QLabel *label_field_capacity;
    QSpinBox *spin_box_capacity;
    QLineEdit *edit_field_copilot;
    QLabel *label_field_pilot;
    QLabel *label_title;
    QLabel *label_field_manufacturer;
    QLabel *label_field_registration;
    QLineEdit *line_edit_pilot;
    QLineEdit *edit_field_registration;
    QLineEdit *edit_field_model;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_create;
    QPushButton *button_cancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateAirplane)
    {
        if (CreateAirplane->objectName().isEmpty())
            CreateAirplane->setObjectName(QString::fromUtf8("CreateAirplane"));
        CreateAirplane->resize(800, 600);
        centralwidget = new QWidget(CreateAirplane);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        edit_field_manufacturer = new QLineEdit(centralwidget);
        edit_field_manufacturer->setObjectName(QString::fromUtf8("edit_field_manufacturer"));
        edit_field_manufacturer->setGeometry(QRect(40, 210, 301, 21));
        label_field_model = new QLabel(centralwidget);
        label_field_model->setObjectName(QString::fromUtf8("label_field_model"));
        label_field_model->setGeometry(QRect(40, 120, 55, 16));
        label_field_copilot = new QLabel(centralwidget);
        label_field_copilot->setObjectName(QString::fromUtf8("label_field_copilot"));
        label_field_copilot->setGeometry(QRect(450, 260, 55, 16));
        label_field_capacity = new QLabel(centralwidget);
        label_field_capacity->setObjectName(QString::fromUtf8("label_field_capacity"));
        label_field_capacity->setGeometry(QRect(450, 120, 81, 16));
        spin_box_capacity = new QSpinBox(centralwidget);
        spin_box_capacity->setObjectName(QString::fromUtf8("spin_box_capacity"));
        spin_box_capacity->setGeometry(QRect(450, 140, 91, 22));
        spin_box_capacity->setMaximum(900);
        edit_field_copilot = new QLineEdit(centralwidget);
        edit_field_copilot->setObjectName(QString::fromUtf8("edit_field_copilot"));
        edit_field_copilot->setGeometry(QRect(450, 280, 301, 21));
        label_field_pilot = new QLabel(centralwidget);
        label_field_pilot->setObjectName(QString::fromUtf8("label_field_pilot"));
        label_field_pilot->setGeometry(QRect(450, 190, 55, 16));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(40, 50, 401, 41));
        QFont font;
        font.setPointSize(14);
        label_title->setFont(font);
        label_field_manufacturer = new QLabel(centralwidget);
        label_field_manufacturer->setObjectName(QString::fromUtf8("label_field_manufacturer"));
        label_field_manufacturer->setGeometry(QRect(40, 190, 111, 16));
        label_field_registration = new QLabel(centralwidget);
        label_field_registration->setObjectName(QString::fromUtf8("label_field_registration"));
        label_field_registration->setGeometry(QRect(40, 260, 91, 16));
        line_edit_pilot = new QLineEdit(centralwidget);
        line_edit_pilot->setObjectName(QString::fromUtf8("line_edit_pilot"));
        line_edit_pilot->setGeometry(QRect(450, 210, 301, 21));
        edit_field_registration = new QLineEdit(centralwidget);
        edit_field_registration->setObjectName(QString::fromUtf8("edit_field_registration"));
        edit_field_registration->setGeometry(QRect(40, 280, 301, 21));
        edit_field_registration->setFrame(true);
        edit_field_registration->setCursorPosition(0);
        edit_field_registration->setCursorMoveStyle(Qt::LogicalMoveStyle);
        edit_field_registration->setClearButtonEnabled(false);
        edit_field_model = new QLineEdit(centralwidget);
        edit_field_model->setObjectName(QString::fromUtf8("edit_field_model"));
        edit_field_model->setGeometry(QRect(40, 140, 301, 21));
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

        CreateAirplane->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateAirplane);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        CreateAirplane->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateAirplane);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CreateAirplane->setStatusBar(statusbar);
        QWidget::setTabOrder(edit_field_model, spin_box_capacity);
        QWidget::setTabOrder(spin_box_capacity, edit_field_manufacturer);
        QWidget::setTabOrder(edit_field_manufacturer, line_edit_pilot);
        QWidget::setTabOrder(line_edit_pilot, edit_field_registration);
        QWidget::setTabOrder(edit_field_registration, edit_field_copilot);
        QWidget::setTabOrder(edit_field_copilot, button_create);
        QWidget::setTabOrder(button_create, button_cancel);

        retranslateUi(CreateAirplane);

        QMetaObject::connectSlotsByName(CreateAirplane);
    } // setupUi

    void retranslateUi(QMainWindow *CreateAirplane)
    {
        CreateAirplane->setWindowTitle(QCoreApplication::translate("CreateAirplane", "MainWindow", nullptr));
        label_field_model->setText(QCoreApplication::translate("CreateAirplane", "Model", nullptr));
        label_field_copilot->setText(QCoreApplication::translate("CreateAirplane", "Co-Pilot", nullptr));
        label_field_capacity->setText(QCoreApplication::translate("CreateAirplane", "Capacity", nullptr));
        label_field_pilot->setText(QCoreApplication::translate("CreateAirplane", "Pilot", nullptr));
        label_title->setText(QCoreApplication::translate("CreateAirplane", "Fill in the fields to create a airplane", nullptr));
        label_field_manufacturer->setText(QCoreApplication::translate("CreateAirplane", "Manufacturer", nullptr));
        label_field_registration->setText(QCoreApplication::translate("CreateAirplane", "Registration", nullptr));
        edit_field_registration->setInputMask(QCoreApplication::translate("CreateAirplane", ">AA-AAA", nullptr));
        edit_field_registration->setText(QCoreApplication::translate("CreateAirplane", "-", nullptr));
        button_create->setText(QCoreApplication::translate("CreateAirplane", "Create", nullptr));
        button_cancel->setText(QCoreApplication::translate("CreateAirplane", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateAirplane: public Ui_CreateAirplane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEAIRPLANE_H
