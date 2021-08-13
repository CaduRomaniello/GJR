#include "readAirplane.h"
#include "ui_readAirplane.h"

ReadAirplane::ReadAirplane(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReadAirplane)
{
    ui->setupUi(this);
    this->parent = parent;
}

ReadAirplane::~ReadAirplane()
{
    delete ui;
}

void ReadAirplane::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}

