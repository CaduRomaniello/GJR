#include "readFlight.h"
#include "ui_readFlight.h"

ReadFlight::ReadFlight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReadFlight)
{
    ui->setupUi(this);
    this->parent = parent;
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

