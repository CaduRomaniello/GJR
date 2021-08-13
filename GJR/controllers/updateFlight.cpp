#include "updateFlight.h"
#include "ui_updateFlight.h"

UpdateFlight::UpdateFlight(QWidget *parent, int id) :
    QMainWindow(parent),
    ui(new Ui::UpdateFlight)
{
    ui->setupUi(this);
    this->parent = parent;
    this->id = id;

    if(this->id != -1) {
        getDataFlightEdit();
    }
}

UpdateFlight::~UpdateFlight()
{
    delete ui;
}

void UpdateFlight::getDataFlightEdit() {
    QLineEdit* origin = ui->line_edit_origin;
    origin->setText("Puta que pariu");
    origin->setDisabled(true);

    QLineEdit* destiny = ui->edit_label_destiny;
    destiny->setText("Casa do caralho");

    QSpinBox* availableSeats = ui->spin_box_available_seats;
    availableSeats->setValue(40);

    QDateEdit* date = ui->date_flight;
    date->setDate(QDate(2021, 12, 11));

    QTimeEdit* time = ui->time_flight;
    time->setTime(QTime(11, 22));

    QComboBox* id = ui->combo_box_id_airplane;
    id->addItem("12");
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
    int editSeats = availableSeats->text().toInt();

    QDateEdit* date = ui->date_flight;
    string editDate = date->text().toStdString();

    QTimeEdit* time = ui->time_flight;
    string editTime = time->text().toStdString();

    QComboBox* id = ui->combo_box_id_airplane;
    int editId = id->currentText().toInt();

    cout << editOrigin << endl;
    cout << editDestiny << endl;
    cout << editSeats << endl;
    cout << editDate << endl;
    cout << editTime << endl;
    cout << editId << endl;

    this->parent->show();
    this->close();
}

