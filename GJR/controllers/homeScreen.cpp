#include "homeScreen.h"
#include "ui_homeScreen.h"
#include "manageFlight.h"
#include "manageAirplane.h"
#include "manageTicket.h"

HomeScreen::HomeScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
    QTableWidget* tableFlight = ui->table_flight;
    tableFlight->setColumnCount(4);
    tableFlight->insertRow(0);
    tableFlight->setItem(0, 0, new QTableWidgetItem("Teste"));
    tableFlight->setItem(0, 1, new QTableWidgetItem("Teste"));
    tableFlight->setItem(0, 2, new QTableWidgetItem("Teste"));
    tableFlight->setItem(0, 3, new QTableWidgetItem("Teste"));
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

