#include "updateTicket.h"
#include "ui_updateTicket.h"
#include "container.h"

UpdateTicket::UpdateTicket(QWidget *parent, QString idFlight, QString namePerson, QString seatTicket, QString dateTicket, QString timeTicket, QString originTicket, QString destinyTicket, QTableWidget* table, int row, int id) :
    QMainWindow(parent),
    ui(new Ui::UpdateTicket)
{
    ui->setupUi(this);
    this->parent = parent;
    this->table = table;
    this->row = row;
    this->id = id;
    this->setFixedSize(800, 600);
    
    if(idFlight != "") {
        ui->combo_box_id_flight->addItem(idFlight);
        ui->combo_box_id_flight->setDisabled(true);
        
        ui->edit_field_name->setText(namePerson);
        
        ui->spin_box_number_seat->setValue(seatTicket.toInt());
        
        QStringList date = dateTicket.split("/");
        ui->date_ticket->setDate(QDate(date[2].toInt(), date[1].toInt(), date[0].toInt()));
        ui->date_ticket->setDisabled(true);

        QStringList time = timeTicket.split(":");
        ui->time_flight->setTime(QTime(time[0].toInt(), time[1].toInt()));
        ui->time_flight->setDisabled(true);

        ui->line_edit_origin->setText(originTicket);
        ui->line_edit_origin->setDisabled(true);

        ui->edit_field_destiny->setText(destinyTicket);
        ui->edit_field_destiny->setDisabled(true);
    }
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


void UpdateTicket::on_button_update_ticket_clicked()
{
    QString idFlight = ui->combo_box_id_flight->currentText();
    QString name = ui->edit_field_name->text();
    int seat = ui->spin_box_number_seat->value();
    QString date = ui->date_ticket->text();
    QString time = ui->time_flight->text();
    QString origin = ui->line_edit_origin->text();
    QString destiny = ui->edit_field_destiny->text();

    Container* c = Container::getContainer();
    c->updateTicket(this->id, name.toStdString(), seat);

    this->table->item(this->row, 2)->setText(name);
    this->table->item(this->row, 3)->setText(QString::number(seat));

    this->parent->show();
    this->close();
}

