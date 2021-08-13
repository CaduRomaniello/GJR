#include "deleteTicket.h"
#include "ui_deleteTicket.h"

DeleteTicket::DeleteTicket(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteTicket)
{
    ui->setupUi(this);
    this->parent = parent;
}

DeleteTicket::~DeleteTicket()
{
    delete ui;
}

void DeleteTicket::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}

