#include "manageTicket.h"
#include "ui_manageTicket.h"

ManageTicket::ManageTicket(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManageTicket)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->parent = parent;
}

ManageTicket::~ManageTicket()
{
    delete ui;
}

void ManageTicket::on_button_back_clicked()
{
    this->parent->show();
    this->close();
}


void ManageTicket::on_button_create_ticket_clicked()
{
    this->hide();
    CreateTicket* createTicket = new CreateTicket(this);
    createTicket->show();
}


void ManageTicket::on_button_read_ticket_clicked()
{
    this->hide();
    ReadTicket* readTicket = new ReadTicket(this);
    readTicket->show();
}


void ManageTicket::on_button_update_ticket_clicked()
{
    this->hide();
    UpdateTicket* updateTicket = new UpdateTicket(this);
    updateTicket->show();
}


void ManageTicket::on_button_delete_ticket_clicked()
{
    this->hide();
    DeleteTicket* deleteTicket = new DeleteTicket(this);
    deleteTicket->show();
}

