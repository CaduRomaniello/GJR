#include "readTicket.h"
#include "ui_readTicket.h"
#include "container.h"

ReadTicket::ReadTicket(QWidget *parent, QString idFlight) :
    QMainWindow(parent),
    ui(new Ui::ReadTicket)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->parent = parent;

    QTableWidget* tableTicket = ui->table_ticket;

    tableTicket->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableTicket->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableTicket->setStyleSheet("QTableView {selection-background-color: gray}");

    QSqlQuery query;

    if(idFlight != "") {
        query.prepare("select * from ticket where id = ?");
        query.addBindValue(idFlight);
    }

    else {
        query.prepare("select * from ticket");
    }

    if (query.exec()){
        int ticketCounter = 0;
        tableTicket->setColumnCount(8);

        while(query.next()){
            tableTicket->insertRow(ticketCounter);
            tableTicket->setItem(ticketCounter, 0, new QTableWidgetItem(query.value(0).toString()));
            tableTicket->setItem(ticketCounter, 1, new QTableWidgetItem(query.value(1).toString()));
            tableTicket->setItem(ticketCounter, 2, new QTableWidgetItem(query.value(2).toString()));
            tableTicket->setItem(ticketCounter, 3, new QTableWidgetItem(query.value(3).toString()));
            tableTicket->setItem(ticketCounter, 4, new QTableWidgetItem(query.value(4).toString()));
            tableTicket->setItem(ticketCounter, 5, new QTableWidgetItem(query.value(5).toString()));
            tableTicket->setItem(ticketCounter, 6, new QTableWidgetItem(query.value(6).toString()));
            tableTicket->setItem(ticketCounter, 7, new QTableWidgetItem(query.value(7).toString()));
        }
    }
}

ReadTicket::~ReadTicket()
{
    delete ui;
}

void ReadTicket::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}



void ReadTicket::on_button_edit_ticket_clicked()
{
    QTableWidget* table = ui->table_ticket;

    if(table->currentItem() != 0) {
        int currentRow = table->currentRow();
        QTableWidgetItem* tId = table->item(currentRow, 0);
        QTableWidgetItem* flightId = table->item(currentRow, 1);
        QTableWidgetItem* namePassenger = table->item(currentRow, 2);
        QTableWidgetItem* seat = table->item(currentRow, 3);
        QTableWidgetItem* time = table->item(currentRow, 4);
        QTableWidgetItem* date = table->item(currentRow, 5);
        QTableWidgetItem* origin = table->item(currentRow, 6);
        QTableWidgetItem* destiny = table->item(currentRow, 7);

        int ticketId = tId->text().toInt();
        QString idFlight = flightId->text();
        QString namePerson = namePassenger->text();
        QString dateTicket = date->text();
        QString timeTicket = time->text();
        QString originTicket = origin->text();
        QString destinyTicket = destiny->text();
        QString seatTicket = seat->text();

        this->hide();
        UpdateTicket* updateTicket = new UpdateTicket(this, idFlight, namePerson, seatTicket, dateTicket, timeTicket, originTicket, destinyTicket, table, currentRow, ticketId);
        updateTicket->show();
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}


void ReadTicket::on_button_delete_ticket_clicked()
{
    QTableWidget* table = ui->table_ticket;

    if(table->currentItem() != 0) {

        QMessageBox::StandardButton teste = QMessageBox::information(this, "Alert", "Do you really want to delete the ticket?", QMessageBox::Ok, QMessageBox::Cancel);

        if(teste == 1024) {
            int currentRow = table->currentRow();
            QTableWidgetItem* ticketId = table->item(currentRow, 0);
            int ticket_id = ticketId->text().toInt();

            table->removeRow(currentRow);
            Container* c = Container::getContainer();
            c->deleteTicket(ticket_id);

            // Falta passar o Id para exluir no banco de dados
        }
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}

