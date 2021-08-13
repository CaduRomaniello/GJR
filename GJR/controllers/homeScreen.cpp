#include "homeScreen.h"
#include "ui_homeScreen.h"
#include <QMessageBox>

HomeScreen::HomeScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);

    QTableWidget* tableFlight = ui->table_flight;
    tableFlight->setColumnCount(4);
    tableFlight->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableFlight->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableFlight->setStyleSheet("QTableView {selection-background-color: gray}");
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
    ManageTicket* manageTicket = new ManageTicket(this);
    manageTicket->show();
}



void HomeScreen::on_button_edit_flight_clicked()
{
    QTableWidget* table = ui->table_flight;

    if(table->currentItem() != 0) {
        int currentRow = table->currentRow();
        QTableWidgetItem* flightId = table->item(currentRow, 0);
        int id = flightId->text().toInt();

        this->hide();
        UpdateFlight* updateFlight = new UpdateFlight(this, id);
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

        QMessageBox::StandardButton teste = QMessageBox::information(this, "Alert", "Are you ready??", QMessageBox::Ok, QMessageBox::Cancel);

        if(teste == 1024) {
            int currentRow = table->currentRow();
            QTableWidgetItem* flightId = table->item(currentRow, 0);
            int id = flightId->text().toInt();
            cout << id << endl;
        }
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}

