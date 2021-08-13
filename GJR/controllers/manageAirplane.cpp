#include "manageAirplane.h"
#include "ui_manageAirplane.h"

ManageAirplane::ManageAirplane(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManageAirplane)
{
    ui->setupUi(this);
    this->parent = parent;
}

ManageAirplane::~ManageAirplane()
{
    delete ui;
}

void ManageAirplane::on_button_back_clicked()
{
    this->parent->show();
    this->close();
}


void ManageAirplane::on_button_create_airplane_clicked()
{
    this->hide();
    CreateAirplane* createAirplane = new CreateAirplane(this);
    createAirplane->show();
}


void ManageAirplane::on_button_read_airplane_clicked()
{
    this->hide();
    ReadAirplane* readAirplane = new ReadAirplane(this);
    readAirplane->show();
}


void ManageAirplane::on_button_update_airplane_clicked()
{
    this->hide();
    UpdateAirplane* updateAirplane = new UpdateAirplane(this);
    updateAirplane->show();
}


void ManageAirplane::on_button_delete_airplane_clicked()
{
    this->hide();
    DeleteAirplane* deleteAirplane = new DeleteAirplane(this);
    deleteAirplane->show();
}

