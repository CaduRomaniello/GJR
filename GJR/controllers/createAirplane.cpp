#include "createAirplane.h"
#include "ui_createAirplane.h"

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
    QString pilot = ui->edit_field_copilot->text();
    QString copilot = ui->edit_field_copilot->text();
    QString capacity = ui->spin_box_capacity->text();

    QSqlQuery query;
    query.exec("insert into airplane (model, manufacturer, registration, pilot, copilot, capacity) values ('"+model+"','"+manufacturer+"','"+registration+"','"+pilot+"','"+copilot+"',"+capacity+")");

    //cout << model << endl;
    //cout << manufacturer << endl;
    //cout << registration << endl;
    //cout << pilot << endl;
    //cout << copilot << endl;
    //cout << capacity << endl;

    this->parent->show();
    this->close();
}

