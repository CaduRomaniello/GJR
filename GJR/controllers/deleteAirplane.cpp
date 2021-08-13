#include "deleteAirplane.h"
#include "ui_deleteAirplane.h"

DeleteAirplane::DeleteAirplane(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteAirplane)
{
    ui->setupUi(this);
    this->parent = parent;
}

DeleteAirplane::~DeleteAirplane()
{
    delete ui;
}

void DeleteAirplane::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}

