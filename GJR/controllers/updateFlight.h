#ifndef UPDATEFLIGHT_H
#define UPDATEFLIGHT_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QTableWidget>

using namespace std;

namespace Ui {
class UpdateFlight;
}

class UpdateFlight : public QMainWindow
{
    Q_OBJECT
    friend class UpdateFlightTestGUI;

public:
    explicit UpdateFlight(QWidget *parent = nullptr, QString idAirplane = "", QString dateFlight = "", QString timeFlight = "", QString originFlight = "", QString destinyFlight = "", QString seatsFlight = "", QTableWidget* table = nullptr, int row = -1, int id = -1);
    ~UpdateFlight();

private slots:
    void on_button_cancel_clicked();

    void on_button_update_clicked();

private:
    Ui::UpdateFlight *ui;
    QTableWidget* table;
    int row;
    int id;
    QWidget* parent;
};

#endif // UPDATEFLIGHT_H
