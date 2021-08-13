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
    int idFlight = ui->combo_box_id_flight->currentText().toInt();
    string passengerName = ui->edit_field_name->text().toStdString();
    int seat = ui->spin_box_number_seat->text().toInt();
    string time = ui->time_flight->text().toStdString();
    string date = ui->date_ticket->text().toStdString();
    int origin = ui->line_edit_origin->text().toInt();
    int destiny = ui->edit_field_destiny->text().toInt();

    cout << idFlight << endl;
    cout << passengerName << endl;
    cout << seat << endl;
    cout << time << endl;
    cout << date << endl;
    cout << origin << endl;
    cout << destiny << endl;

    this->parent->show();
    this->close();
}

