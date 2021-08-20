#include "createTicket.h"
#include "ui_createTicket.h"
#include "container.h"

CreateTicket::CreateTicket(QWidget *parent, QString idFlight, QString dateFlight, QString timeFlight, QString originFlight, QString destinyFlight) :
    QMainWindow(parent),
    ui(new Ui::CreateTicket)
{
    ui->setupUi(this);
    this->parent = parent;
    this->setFixedSize(800, 600);

    if(idFlight != "") {
        ui->combo_box_id_flight->addItem(idFlight);
        ui->combo_box_id_flight->setDisabled(true);

        QStringList time = timeFlight.split(":");
        ui->time_flight->setTime(QTime(time[0].toInt(), time[1].toInt()));
        ui->time_flight->setDisabled(true);

        QStringList date = dateFlight.split("/");
        ui->date_ticket->setDate(QDate(date[2].toInt(), date[1].toInt(), date[0].toInt()));
        ui->date_ticket->setDisabled(true);

        ui->line_edit_origin->setText(originFlight);
        ui->line_edit_origin->setDisabled(true);

        ui->edit_field_destiny->setText(destinyFlight);
        ui->edit_field_destiny->setDisabled(true);
    }
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

    Container* c = Container::getContainer();
    Ticket* t = c->createTicket(idFlight.toInt(), passengerName.toStdString(), seat.toInt());
    delete t;

    this->parent->show();
    this->close();
}

