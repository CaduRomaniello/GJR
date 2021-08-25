/********************************************************************************
** Form generated from reading UI file 'manageAirplane.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEAIRPLANE_H
#define UI_MANAGEAIRPLANE_H

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

class Ui_ManageAirplane
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *button_create_airplane;
    QPushButton *button_read_airplane;
    QLabel *label_title;
    QPushButton *button_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManageAirplane)
    {
        if (ManageAirplane->objectName().isEmpty())
            ManageAirplane->setObjectName(QString::fromUtf8("ManageAirplane"));
        ManageAirplane->resize(800, 600);
        centralwidget = new QWidget(ManageAirplane);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 150, 681, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(40);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        button_create_airplane = new QPushButton(verticalLayoutWidget);
        button_create_airplane->setObjectName(QString::fromUtf8("button_create_airplane"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_create_airplane->sizePolicy().hasHeightForWidth());
        button_create_airplane->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        button_create_airplane->setFont(font);

        verticalLayout->addWidget(button_create_airplane);

        button_read_airplane = new QPushButton(verticalLayoutWidget);
        button_read_airplane->setObjectName(QString::fromUtf8("button_read_airplane"));
        sizePolicy.setHeightForWidth(button_read_airplane->sizePolicy().hasHeightForWidth());
        button_read_airplane->setSizePolicy(sizePolicy);
        button_read_airplane->setFont(font);

        verticalLayout->addWidget(button_read_airplane);

        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(60, 40, 231, 51));
        QFont font1;
        font1.setPointSize(18);
        label_title->setFont(font1);
        button_back = new QPushButton(centralwidget);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(602, 480, 141, 41));
        QFont font2;
        font2.setPointSize(12);
        button_back->setFont(font2);
        ManageAirplane->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManageAirplane);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ManageAirplane->setMenuBar(menubar);
        statusbar = new QStatusBar(ManageAirplane);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ManageAirplane->setStatusBar(statusbar);

        retranslateUi(ManageAirplane);

        QMetaObject::connectSlotsByName(ManageAirplane);
    } // setupUi

    void retranslateUi(QMainWindow *ManageAirplane)
    {
        ManageAirplane->setWindowTitle(QCoreApplication::translate("ManageAirplane", "MainWindow", nullptr));
        button_create_airplane->setText(QCoreApplication::translate("ManageAirplane", "Create Airplane", nullptr));
        button_read_airplane->setText(QCoreApplication::translate("ManageAirplane", "Read Airplane", nullptr));
        label_title->setText(QCoreApplication::translate("ManageAirplane", "Select an option", nullptr));
        button_back->setText(QCoreApplication::translate("ManageAirplane", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageAirplane: public Ui_ManageAirplane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEAIRPLANE_H
