#include "updateFlight.h"
#include "ui_updateFlight.h"

UpdateFlight::UpdateFlight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UpdateFlight)
{
    ui->setupUi(this);
    this->parent = parent;
}

UpdateFlight::~UpdateFlight()
{
    delete ui;
}

void UpdateFlight::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}

