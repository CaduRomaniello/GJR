#include "updateAirplane.h"
#include "ui_updateAirplane.h"

UpdateAirplane::UpdateAirplane(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UpdateAirplane)
{
    ui->setupUi(this);
    this->parent = parent;
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

