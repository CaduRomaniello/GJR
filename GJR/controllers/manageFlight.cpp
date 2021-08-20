#include "manageFlight.h"
#include "ui_manageFlight.h"

ManageFlight::ManageFlight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManageFlight)
{
    ui->setupUi(this);
    this->parent = parent;
    this->setFixedSize(800, 600);
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


