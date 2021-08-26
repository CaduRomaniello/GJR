#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QMainWindow>
#include <iostream>
#include <QTableWidgetItem>
#include "manageFlight.h"
#include "manageAirplane.h"
#include "readTicket.h"
#include "createTicket.h"
#include "updateFlight.h"

namespace Ui {
class HomeScreen;
}

using namespace std;

class HomeScreen : public QMainWindow
{
    Q_OBJECT
    friend class HomeScreenTestGUI;

public:
    explicit HomeScreen(QWidget *parent = nullptr);
    ~HomeScreen();

    void reloadTable();
    void showEvent(QShowEvent *e);

private slots:
    void on_button_manage_flight_clicked();

    void on_button_manager_airplane_clicked();

    void on_button_manage_ticket_clicked();

    void on_button_edit_flight_clicked();

    void on_button_delete_flight_clicked();

    void on_button_buy_ticket_clicked();

    void on_table_flight_itemDoubleClicked(QTableWidgetItem *item);

private:
    Ui::HomeScreen *ui;
};

#endif // HOMESCREEN_H
