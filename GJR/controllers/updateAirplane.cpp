#include "updateAirplane.h"
#include "ui_updateAirplane.h"
#include "container.h"

UpdateAirplane::UpdateAirplane(QWidget *parent, QString idAirplane, QString modelAirplane, QString manuAirplane, QString regAirplane, QString pilotAirplane, QString copAirplane, QString capacityAirplane, QTableWidget* table, int row) :
    QMainWindow(parent),
    ui(new Ui::UpdateAirplane)
{
    ui->setupUi(this);
    this->parent = parent;
    this->table = table;
    this->row = row;
    this->setFixedSize(800, 600);

    if(idAirplane != "") {
        ui->edit_field_model->setText(modelAirplane);
        ui->edit_field_manufacturer->setText(manuAirplane);
        ui->edit_field_registration->setText(regAirplane);
        ui->edit_field_registration->setDisabled(true);
        ui->line_edit_pilot->setText(pilotAirplane);
        ui->edit_field_copilot->setText(copAirplane);
        ui->spin_box_capacity->setValue(capacityAirplane.toInt());
        ui->spin_box_capacity->setDisabled(true);
    }
}

UpdateAirplane::~UpdateAirplane()
{
    delete ui;
}

void UpdateAirplane::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}


void UpdateAirplane::on_button_update_airplane_clicked()
{
    QString model = ui->edit_field_model->text();
    QString manufacturer = ui->edit_field_manufacturer->text();
    QString registration = ui->edit_field_registration->text();
    QString pilot = ui->line_edit_pilot->text();
    QString copilot = ui->edit_field_copilot->text();

    Container* c = Container::getContainer();
    c->updateAirplane(model.toStdString(), manufacturer.toStdString(), registration.toStdString(), pilot.toStdString(), copilot.toStdString());

    if(row != -1) {
        this->table->item(this->row, 1)->setText(model);
        this->table->item(this->row, 2)->setText(manufacturer);
        this->table->item(this->row, 4)->setText(pilot);
        this->table->item(this->row, 5)->setText(copilot);
    }

    this->parent->show();
    this->close();
}

