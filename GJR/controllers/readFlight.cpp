#include "readFlight.h"
#include "ui_readFlight.h"
#include "container.h"

ReadFlight::ReadFlight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReadFlight)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->parent = parent;

    QTableWidget* tableFlight = ui->table_flight;

    tableFlight->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableFlight->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableFlight->setStyleSheet("QTableView {selection-background-color: gray}");

    QSqlQuery query;
    query.prepare("select * from flight");

    if (query.exec()){
        int flightCounter = 0;
        tableFlight->setColumnCount(7);

        while(query.next()){
            tableFlight->insertRow(flightCounter);
            tableFlight->setItem(flightCounter, 0, new QTableWidgetItem(query.value(0).toString()));
            tableFlight->setItem(flightCounter, 1, new QTableWidgetItem(query.value(3).toString()));
            tableFlight->setItem(flightCounter, 2, new QTableWidgetItem(query.value(2).toString()));
            tableFlight->setItem(flightCounter, 3, new QTableWidgetItem(query.value(1).toString()));
            tableFlight->setItem(flightCounter, 4, new QTableWidgetItem(query.value(4).toString()));
            tableFlight->setItem(flightCounter, 5, new QTableWidgetItem(query.value(5).toString()));
            tableFlight->setItem(flightCounter, 6, new QTableWidgetItem(query.value(6).toString()));
        }
    }
}

ReadFlight::~ReadFlight()
{
    delete ui;
}

void ReadFlight::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}


void ReadFlight::on_button_delete_flight_clicked()
{
    QTableWidget* table = ui->table_flight;

    if(table->currentItem() != 0) {

        QMessageBox::StandardButton teste = QMessageBox::information(this, "Alert", "Do you really want to delete the flight?", QMessageBox::Ok, QMessageBox::Cancel);

        if(teste == 1024) {
            int currentRow = table->currentRow();
            QTableWidgetItem* flightId = table->item(currentRow, 0);
            int flight_id = flightId->text().toInt();

            table->removeRow(currentRow);
            Container* c = Container::getContainer();
            c->deleteFlight(flight_id);

        }
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}


void ReadFlight::on_button_edit_flight_clicked()
{
    QTableWidget* table = ui->table_flight;

    if(table->currentItem() != 0) {
        int currentRow = table->currentRow();
        QTableWidgetItem* fId = table->item(currentRow, 0);
        QTableWidgetItem* airplaneId = table->item(currentRow, 1);
        QTableWidgetItem* date = table->item(currentRow, 2);
        QTableWidgetItem* time = table->item(currentRow, 3);
        QTableWidgetItem* origin = table->item(currentRow, 4);
        QTableWidgetItem* destiny = table->item(currentRow, 5);
        QTableWidgetItem* seats = table->item(currentRow, 6);

        int flightId = fId->text().toInt();
        QString idAirplane = airplaneId->text();
        QString dateFlight = date->text();
        QString timeFlight = time->text();
        QString originFlight = origin->text();
        QString destinyFlight = destiny->text();
        QString seatsFlight = seats->text();

        this->hide();
        UpdateFlight* updateFlight = new UpdateFlight(this, idAirplane, dateFlight, timeFlight, originFlight, destinyFlight, seatsFlight, table, currentRow, flightId);
        updateFlight->show();
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}

