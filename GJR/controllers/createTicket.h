#ifndef CREATETICKET_H
#define CREATETICKET_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

#include "homeScreen.h"

using namespace std;

namespace Ui {
class CreateTicket;
}

class CreateTicket : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateTicket(QWidget *parent = nullptr, QString idFlight = "", QString dateFlight = "", QString timeFlight = "", QString originFlight = "", QString destinyFlight = "");
    ~CreateTicket();

private slots:
    void on_button_cancel_clicked();

    void on_button_create_clicked();

private:
    Ui::CreateTicket *ui;
    QWidget* parent;
};

#endif // CREATETICKET_H
