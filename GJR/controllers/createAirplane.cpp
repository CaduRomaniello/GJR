#include "createAirplane.h"
#include "ui_createAirplane.h"

CreateAirplane::CreateAirplane(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateAirplane)
{
    ui->setupUi(this);
    this->parent = parent;
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
    string model = ui->edit_field_model->text().toStdString();
    string manufacturer = ui->edit_field_manufacturer->text().toStdString();
    string registration = ui->edit_field_registration->text().toStdString();
    string pilot = ui->edit_field_copilot->text().toStdString();
    string copilot = ui->edit_field_copilot->text().toStdString();
    int capacity = ui->spin_box_capacity->text().toInt();

    cout << model << endl;
    cout << manufacturer << endl;
    cout << registration << endl;
    cout << pilot << endl;
    cout << copilot << endl;
    cout << capacity << endl;

    this->parent->show();
    this->close();
}

