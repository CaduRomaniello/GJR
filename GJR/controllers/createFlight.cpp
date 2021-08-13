#include "createFlight.h"
#include "ui_createFlight.h"

CreateFlight::CreateFlight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateFlight)
{
    ui->setupUi(this);
    this->parent = parent;
    this->setFixedSize(800, 600);
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
    QString time = ui->time_flight->text();
    QString date = ui->date_flight->text();
    QString idAirplane = ui->combo_box_id_airplane->currentText();
    QString origin = ui->line_edit_origin->text();
    QString destiny = ui->edit_label_destiny->text();
    QString numberAvailable = ui->spin_box_available_seats->text();

    QSqlQuery query;
    query.exec("insert into flight (time, date, idAirplane, origin, destiny, numberOfAvailableSeats) values ('"+time+"','"+date+"',1,'"+origin+"','"+destiny+"',"+numberAvailable+")");

    //cout << time << endl;
    //cout << date << endl;
    //cout << idAirplane << endl;
    //cout << origin << endl;
    //cout << destiny << endl;
    //cout << numberAvailable << endl;

    this->parent->show();
    this->close();
}

