#include "createFlight.h"
#include "ui_createFlight.h"

CreateFlight::CreateFlight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateFlight)
{
    ui->setupUi(this);
    this->parent = parent;
}

CreateFlight::~CreateFlight()
{
    delete ui;
}

void CreateFlight::on_button_cancel_clicked()
{
    this->parent->show();
    this->hide();
}


void CreateFlight::on_button_create_clicked()
{
    string time = ui->time_flight->text().toStdString();
    string date = ui->date_flight->text().toStdString();
    int idAirplane = ui->combo_box_id_airplane->currentText().toInt();
    string origin = ui->line_edit_origin->text().toStdString();
    string destiny = ui->edit_label_destiny->text().toStdString();
    int numberAvailable = ui->spin_box_available_seats->text().toInt();

    cout << time << endl;
    cout << date << endl;
    cout << idAirplane << endl;
    cout << origin << endl;
    cout << destiny << endl;
    cout << numberAvailable << endl;

    this->parent->show();
    this->close();
}

