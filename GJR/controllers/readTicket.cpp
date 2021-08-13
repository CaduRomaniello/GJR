#include "readTicket.h"
#include "ui_readTicket.h"

ReadTicket::ReadTicket(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReadTicket)
{
    ui->setupUi(this);
    this->parent = parent;
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

