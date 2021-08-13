#include "updateTicket.h"
#include "ui_updateTicket.h"

UpdateTicket::UpdateTicket(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UpdateTicket)
{
    ui->setupUi(this);
    this->parent = parent;
}

UpdateTicket::~UpdateTicket()
{
    delete ui;
}

void UpdateTicket::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}

