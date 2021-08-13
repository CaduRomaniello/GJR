#include "createTicket.h"
#include "ui_createTicket.h"

CreateTicket::CreateTicket(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateTicket)
{
    ui->setupUi(this);
    this->parent = parent;
    this->setFixedSize(800, 600);
}

CreateTicket::~CreateTicket()
{
    delete ui;
}

void CreateTicket::on_button_cancel_clicked()
{
    this->parent->show();
    this->hide();
}


void CreateTicket::on_button_create_clicked()
{
    QString idFlight = ui->combo_box_id_flight->currentText();
    QString passengerName = ui->edit_field_name->text();
    QString seat = ui->spin_box_number_seat->text();
    QString time = ui->time_flight->text();
    QString date = ui->date_ticket->text();
    QString origin = ui->line_edit_origin->text();
    QString destiny = ui->edit_field_destiny->text();

    QSqlQuery query;
    query.exec("insert into ticket (idFlight, passengerName, seat, time, date, origin, destiny) values (1,'"+passengerName+"',"+seat+",'"+time+"','"+date+"','"+origin+"','"+destiny+"')");

    //cout << idFlight << endl;
    //cout << passengerName << endl;
    //cout << seat << endl;
    //cout << time << endl;
    //cout << date << endl;
    //cout << origin << endl;
    //cout << destiny << endl;

    this->parent->show();
    this->close();
}

