#include "updateFlight.h"
#include "ui_updateFlight.h"
#include "container.h"
#include <QTableWidgetItem>

UpdateFlight::UpdateFlight(QWidget *parent, QString idAirplane, QString dateFlight, QString timeFlight, QString originFlight, QString destinyFlight, QString seatsFlight, QTableWidget* table, int row, int id) :
    QMainWindow(parent),
    ui(new Ui::UpdateFlight)
{
    ui->setupUi(this);
    this->parent = parent;
    this->table = table;
    this->row = row;
    this->id = id;
    this->setFixedSize(800, 600);

    if(idAirplane != "") {
        QLineEdit* origin = ui->line_edit_origin;
        origin->setText(originFlight);

        QLineEdit* destiny = ui->edit_label_destiny;
        destiny->setText(destinyFlight);

        QSpinBox* availableSeats = ui->spin_box_available_seats;
        availableSeats->setValue(seatsFlight.toInt());
        availableSeats->setDisabled(true);

        QStringList dateList = dateFlight.split("/");
        QDateEdit* date = ui->date_flight;
        date->setDate(QDate(dateList[2].toInt(), dateList[1].toInt(), dateList[0].toInt()));

        QStringList timeList = timeFlight.split(":");
        QTimeEdit* time = ui->time_flight;
        time->setTime(QTime(timeList[0].toInt(), timeList[1].toInt()));

        QComboBox* id = ui->combo_box_id_airplane;
        id->addItem(idAirplane);
        id->setDisabled(true);
    }
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


void UpdateFlight::on_button_update_clicked()
{

    QLineEdit* origin = ui->line_edit_origin;
    string editOrigin = origin->text().toStdString();

    QLineEdit* destiny = ui->edit_label_destiny;
    string editDestiny = destiny->text().toStdString();

    QSpinBox* availableSeats = ui->spin_box_available_seats;
    string editSeats = availableSeats->text().toStdString();

    QDateEdit* date = ui->date_flight;
    string editDate = date->text().toStdString();

    QTimeEdit* time = ui->time_flight;
    QString editTime = time->text();
    QStringList timeList = editTime.split(" ");
    editTime = timeList[0];

    QComboBox* id = ui->combo_box_id_airplane;
    string editId = id->currentText().toStdString();

    Container* c = Container::getContainer();
    c->updateFlight(this->id, editTime.toStdString(), editDate, editOrigin, editDestiny);

    // Update flight table
    this->table->item(this->row, 1)->setText(QString::fromStdString(editId));
    this->table->item(this->row, 2)->setText(QString::fromStdString(editDate));
    this->table->item(this->row, 3)->setText(editTime);
    this->table->item(this->row, 4)->setText(QString::fromStdString(editOrigin));
    this->table->item(this->row, 5)->setText(QString::fromStdString(editDestiny));
    this->table->item(this->row, 6)->setText(QString::fromStdString(editSeats));

    this->parent->show();
    this->close();
}
