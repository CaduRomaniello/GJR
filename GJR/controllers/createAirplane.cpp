#include "createAirplane.h"
#include "ui_createAirplane.h"
#include "container.h"
#include <QMessageBox>

CreateAirplane::CreateAirplane(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateAirplane)
{
    ui->setupUi(this);
    this->parent = parent;
    this->setFixedSize(800, 600);
}

CreateAirplane::~CreateAirplane()
{
    delete ui;
}

void CreateAirplane::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}


void CreateAirplane::on_button_create_clicked()
{
    QString model = ui->edit_field_model->text();
    QString manufacturer = ui->edit_field_manufacturer->text();
    QString registration = ui->edit_field_registration->text();
    QString pilot = ui->line_edit_pilot->text();
    QString copilot = ui->edit_field_copilot->text();
    QString capacity = ui->spin_box_capacity->text();

    if (capacity.toInt() > 0){
        Container* c = Container::getContainer();
        Airplane* a = c->createAirplane(model.toStdString(), manufacturer.toStdString(), registration.toStdString(), pilot.toStdString(), copilot.toStdString(), capacity.toInt());
        delete a;
        this->parent->show();
        this->close();
    }
    else{
        QMessageBox::information(this, "Login", "Capacity should be greater than 0!", QMessageBox::Close);
    }
}

