#ifndef UPDATETICKET_H
#define UPDATETICKET_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QTableWidget>

using namespace std;

namespace Ui {
class UpdateTicket;
}

class UpdateTicket : public QMainWindow
{
    Q_OBJECT
    friend class UpdateTicketTestGUI;

public:
    explicit UpdateTicket(QWidget *parent = nullptr, QString idFlight = "", QString namePerson = "", QString seatTicket = "", QString dateTicket = "", QString timeTicket = "", QString originTicket = "", QString destinyTicket = "", QTableWidget* table = nullptr, int row = -1, int id = -1);
    ~UpdateTicket();

private slots:
    void on_button_cancel_clicked();

    void on_button_update_ticket_clicked();

private:
    Ui::UpdateTicket *ui;
    QWidget* parent;
    QTableWidget* table;
    int row;
    int id;
};

#endif // UPDATETICKET_H
