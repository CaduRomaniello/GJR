/********************************************************************************
** Form generated from reading UI file 'manageFlight.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEFLIGHT_H
#define UI_MANAGEFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageFlight
{
public:
    QWidget *centralwidget;
    QLabel *label_title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *button_create_flight;
    QPushButton *button_read_flight;
    QPushButton *button_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManageFlight)
    {
        if (ManageFlight->objectName().isEmpty())
            ManageFlight->setObjectName(QString::fromUtf8("ManageFlight"));
        ManageFlight->resize(800, 600);
        centralwidget = new QWidget(ManageFlight);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(60, 40, 231, 51));
        QFont font;
        font.setPointSize(18);
        label_title->setFont(font);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 150, 681, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(40);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        button_create_flight = new QPushButton(verticalLayoutWidget);
        button_create_flight->setObjectName(QString::fromUtf8("button_create_flight"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_create_flight->sizePolicy().hasHeightForWidth());
        button_create_flight->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        button_create_flight->setFont(font1);

        verticalLayout->addWidget(button_create_flight);

        button_read_flight = new QPushButton(verticalLayoutWidget);
        button_read_flight->setObjectName(QString::fromUtf8("button_read_flight"));
        sizePolicy.setHeightForWidth(button_read_flight->sizePolicy().hasHeightForWidth());
        button_read_flight->setSizePolicy(sizePolicy);
        button_read_flight->setFont(font1);

        verticalLayout->addWidget(button_read_flight);

        button_back = new QPushButton(centralwidget);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(602, 480, 141, 41));
        QFont font2;
        font2.setPointSize(12);
        button_back->setFont(font2);
        ManageFlight->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManageFlight);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ManageFlight->setMenuBar(menubar);
        statusbar = new QStatusBar(ManageFlight);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ManageFlight->setStatusBar(statusbar);

        retranslateUi(ManageFlight);

        QMetaObject::connectSlotsByName(ManageFlight);
    } // setupUi

    void retranslateUi(QMainWindow *ManageFlight)
    {
        ManageFlight->setWindowTitle(QCoreApplication::translate("ManageFlight", "MainWindow", nullptr));
        label_title->setText(QCoreApplication::translate("ManageFlight", "Select an option", nullptr));
        button_create_flight->setText(QCoreApplication::translate("ManageFlight", "Create Flight", nullptr));
        button_read_flight->setText(QCoreApplication::translate("ManageFlight", "Read Flight", nullptr));
        button_back->setText(QCoreApplication::translate("ManageFlight", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageFlight: public Ui_ManageFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEFLIGHT_H
