#include "homeScreen.h"
#include "ui_homeScreen.h"
#include <QMessageBox>
#include <QtSql>
HomeScreen::HomeScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);

    QTableWidget* tableFlight = ui->table_flight;

    tableFlight->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableFlight->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableFlight->setStyleSheet("QTableView {selection-background-color: gray}");

    // Read and fill in the table with all flights in the database
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

HomeScreen::~HomeScreen()
{
    delete ui;
}

void HomeScreen::on_button_manage_flight_clicked() {
    this->hide();
    ManageFlight* manageFlight = new ManageFlight(this);
    manageFlight->show();
}


void HomeScreen::on_button_manager_airplane_clicked()
{
    this->hide();
    ManageAirplane* manageAirplane = new ManageAirplane(this);
    manageAirplane->show();
}


void HomeScreen::on_button_manage_ticket_clicked()
{
    this->hide();
    ReadTicket* manageTicket = new ReadTicket(this);
    manageTicket->show();
}



void HomeScreen::on_button_edit_flight_clicked()
{
    QTableWidget* table = ui->table_flight;

    if(table->currentItem() != 0) {
        int currentRow = table->currentRow();
        QTableWidgetItem* airplaneId = table->item(currentRow, 1);
        QTableWidgetItem* date = table->item(currentRow, 2);
        QTableWidgetItem* time = table->item(currentRow, 3);
        QTableWidgetItem* origin = table->item(currentRow, 4);
        QTableWidgetItem* destiny = table->item(currentRow, 5);
        QTableWidgetItem* seats = table->item(currentRow, 6);

        QString idAirplane = airplaneId->text();
        QString dateFlight = date->text();
        QString timeFlight = time->text();
        QString originFlight = origin->text();
        QString destinyFlight = destiny->text();
        QString seatsFlight = seats->text();


        this->hide();
        UpdateFlight* updateFlight = new UpdateFlight(this, idAirplane, dateFlight, timeFlight, originFlight, destinyFlight, seatsFlight, table, currentRow);
        updateFlight->show();
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}


void HomeScreen::on_button_delete_flight_clicked()
{
    QTableWidget* table = ui->table_flight;

    if(table->currentItem() != 0) {

        QMessageBox::StandardButton teste = QMessageBox::information(this, "Alert", "Do you really want to delete the flight?", QMessageBox::Ok, QMessageBox::Cancel);

        if(teste == 1024) {
            int currentRow = table->currentRow();
            QTableWidgetItem* flightId = table->item(currentRow, 0);
            int id = flightId->text().toInt();

            table->removeRow(currentRow);

            // Falta passar o Id para exluir no banco de dados
            cout << id << endl;
        }
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}


void HomeScreen::on_button_buy_ticket_clicked()
{
    QTableWidget* table = ui->table_flight;

    if(table->currentItem() != 0) {
        int currentRow = table->currentRow();
        QTableWidgetItem* flightId = table->item(currentRow, 0);
        QTableWidgetItem* date = table->item(currentRow, 2);
        QTableWidgetItem* time = table->item(currentRow, 3);
        QTableWidgetItem* origin = table->item(currentRow, 4);
        QTableWidgetItem* destiny = table->item(currentRow, 5);

        QString idFlight = flightId->text();
        QString dateFlight = date->text();
        QString timeFlight = time->text();
        QString originFlight = origin->text();
        QString destinyFlight = destiny->text();

        CreateTicket* createTicket = new CreateTicket(this, idFlight, dateFlight, timeFlight, originFlight, destinyFlight);
        this->hide();
        createTicket->show();
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}
