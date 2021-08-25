#ifndef READFLIGHT_H
#define READFLIGHT_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QMessageBox>
#include "updateFlight.h"

using namespace std;

namespace Ui {
class ReadFlight;
}

class ReadFlight : public QMainWindow
{
    Q_OBJECT
    friend class ReadFlightTestGUI;

public:
    explicit ReadFlight(QWidget *parent = nullptr);
    ~ReadFlight();

private slots:
    void on_button_cancel_clicked();

    void on_button_delete_flight_clicked();

    void on_button_edit_flight_clicked();

private:
    Ui::ReadFlight *ui;
    QWidget* parent;
};

#endif // READFLIGHT_H
