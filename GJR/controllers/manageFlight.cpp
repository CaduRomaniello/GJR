#include "manageFlight.h"
#include "ui_manageFlight.h"

ManageFlight::ManageFlight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManageFlight)
{
    this->parent = parent;
    ui->setupUi(this);
}

ManageFlight::~ManageFlight()
{
    delete ui;
}

void ManageFlight::on_button_back_clicked()
{
    this->parent->show();
    this->close();
}


void ManageFlight::on_button_create_flight_clicked()
{
    this->hide();
    CreateFlight* createFlight = new CreateFlight(this);
    createFlight->show();
}


void ManageFlight::on_button_read_flight_clicked()
{
    this->hide();
    ReadFlight* readFlight = new ReadFlight(this);
    readFlight->show();
}


void ManageFlight::on_button_update_flight_clicked()
{
    this->hide();
    UpdateFlight* updateFlight = new UpdateFlight(this);
    updateFlight->show();
}


void ManageFlight::on_button_delete_flight_clicked()
{
    this->hide();
    DeleteFlight* deleteUpdate = new DeleteFlight(this);
    deleteUpdate->show();
}

