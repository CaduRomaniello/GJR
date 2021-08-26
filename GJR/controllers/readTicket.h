#ifndef READTICKET_H
#define READTICKET_H

#include <QMainWindow>

#include <iostream>
#include <string>
#include <QMessageBox>
#include "updateTicket.h"

using namespace std;

namespace Ui {
class ReadTicket;
}

class ReadTicket : public QMainWindow
{
    Q_OBJECT
    friend class ReadTicketTestGUI;

public:
    explicit ReadTicket(QWidget *parent = nullptr, QString idFlight = "");
    ~ReadTicket();

private slots:
    void on_button_cancel_clicked();

    void on_button_edit_ticket_clicked();

    void on_button_delete_ticket_clicked();

private:
    Ui::ReadTicket *ui;
    QWidget* parent;
};

#endif // READTICKET_H
