#include "createFlight.h"
#include "ui_createFlight.h"
#include "container.h"

CreateFlight::CreateFlight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateFlight)
{
    ui->setupUi(this);
    this->parent = parent;
    this->setFixedSize(800, 600);

    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select registration from airplane");
    query.exec();
    model->setQuery(query);
    ui->combo_box_id_airplane->setModel(model);
    ui->spin_box_available_seats->setDisabled(true);
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
    QString origin  = ui->line_edit_origin->text();
    QString destiny = ui->edit_label_destiny->text();

    Container* c = Container::getContainer();
    Flight* f = c->createFlight(idAirplane.toStdString(), time.toStdString(), date.toStdString(), origin.toStdString(), destiny.toStdString());

    delete f;

    this->parent->show();
    this->close();
}

void CreateFlight::on_combo_box_id_airplane_currentIndexChanged(int index)
{
    QSqlQuery query;
    query.exec("select * from airplane where registration='" + ui->combo_box_id_airplane->currentText() + "'");
    query.first();
    QString seats = query.value(6).toString();
    ui->spin_box_available_seats->setValue(seats.toInt());
}

