#include "readAirplane.h"
#include "ui_readAirplane.h"
#include "container.h"

ReadAirplane::ReadAirplane(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReadAirplane)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->parent = parent;

    QTableWidget* tableAirplane = ui->table_airplane;

    tableAirplane->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableAirplane->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableAirplane->setStyleSheet("QTableView {selection-background-color: gray}");

    QSqlQuery query;
    query.prepare("select * from airplane");

    if (query.exec()){
        int airplaneCounter = 0;
        tableAirplane->setColumnCount(7);

        while(query.next()){
            tableAirplane->insertRow(airplaneCounter);
            tableAirplane->setItem(airplaneCounter, 0, new QTableWidgetItem(query.value(0).toString()));
            tableAirplane->setItem(airplaneCounter, 1, new QTableWidgetItem(query.value(1).toString()));
            tableAirplane->setItem(airplaneCounter, 2, new QTableWidgetItem(query.value(2).toString()));
            tableAirplane->setItem(airplaneCounter, 3, new QTableWidgetItem(query.value(3).toString()));
            tableAirplane->setItem(airplaneCounter, 4, new QTableWidgetItem(query.value(4).toString()));
            tableAirplane->setItem(airplaneCounter, 5, new QTableWidgetItem(query.value(5).toString()));
            tableAirplane->setItem(airplaneCounter, 6, new QTableWidgetItem(query.value(6).toString()));
        }
    }
}

ReadAirplane::~ReadAirplane()
{
    delete ui;
}

void ReadAirplane::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}


void ReadAirplane::on_button_edit_airplane_clicked()
{
    QTableWidget* table = ui->table_airplane;

    if(table->currentItem() != 0) {
        int currentRow = table->currentRow();
        QTableWidgetItem* airplaneId = table->item(currentRow, 0);
        QTableWidgetItem* model = table->item(currentRow, 1);
        QTableWidgetItem* manufacturer = table->item(currentRow, 2);
        QTableWidgetItem* registration = table->item(currentRow, 3);
        QTableWidgetItem* pilot = table->item(currentRow, 4);
        QTableWidgetItem* copilot = table->item(currentRow, 5);
        QTableWidgetItem* capacity = table->item(currentRow, 6);

        QString idAirplane = airplaneId->text();
        QString modelAirplane = model->text();
        QString manuAirplane = manufacturer->text();
        QString regAirplane = registration->text();
        QString pilotAirplane = pilot->text();
        QString copAirplane = copilot->text();
        QString capacityAirplane = capacity->text();

        this->hide();
        UpdateAirplane* updateAirplane = new UpdateAirplane(this, idAirplane, modelAirplane, manuAirplane, regAirplane, pilotAirplane, copAirplane, capacityAirplane, table, currentRow);
        updateAirplane->show();
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}


void ReadAirplane::on_button_delete_airplane_clicked()
{
    QTableWidget* table = ui->table_airplane;

    if(table->currentItem() != 0) {

        QMessageBox::StandardButton teste = QMessageBox::information(this, "Alert", "Do you really want to delete the airplane?", QMessageBox::Ok, QMessageBox::Cancel);

        if(teste == 1024) {
            int currentRow = table->currentRow();
            QTableWidgetItem* flightId = table->item(currentRow, 3);
            QString registration = flightId->text();

            table->removeRow(currentRow);
            Container* c = Container::getContainer();
            c->deleteAirplane(registration.toStdString());

            // Falta passar o Id para exluir no banco de dados
        }
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}

