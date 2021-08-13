#ifndef MANAGETICKET_H
#define MANAGETICKET_H

#include <QMainWindow>
#include "createTicket.h"
#include "readTicket.h"
#include "updateTicket.h"
#include "deleteTicket.h"

namespace Ui {
class ManageTicket;
}

class ManageTicket : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManageTicket(QWidget *parent = nullptr);
    ~ManageTicket();

private slots:
    void on_button_back_clicked();

    void on_button_create_ticket_clicked();

    void on_button_read_ticket_clicked();

    void on_button_update_ticket_clicked();

    void on_button_delete_ticket_clicked();

private:
    Ui::ManageTicket *ui;
    QWidget* parent;
};

#endif // MANAGETICKET_H
