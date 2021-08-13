#include "deleteFlight.h"
#include "ui_deleteFlight.h"

DeleteFlight::DeleteFlight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteFlight)
{
    ui->setupUi(this);
    this->parent = parent;
}

DeleteFlight::~DeleteFlight()
{
    delete ui;
}

void DeleteFlight::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}

