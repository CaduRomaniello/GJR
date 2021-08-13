#ifndef MANAGEFLIGHT_H
#define MANAGEFLIGHT_H

#include <QMainWindow>
#include "createFlight.h"
#include "readFlight.h"
#include "updateFlight.h"
#include "deleteFlight.h"

namespace Ui {
class ManageFlight;
}

class ManageFlight : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManageFlight(QWidget *parent = nullptr);
    ~ManageFlight();

private slots:
    void on_button_back_clicked();

    void on_button_create_flight_clicked();

    void on_button_read_flight_clicked();

    void on_button_update_flight_clicked();

    void on_button_delete_flight_clicked();

private:
    Ui::ManageFlight *ui;
    QWidget* parent;
};

#endif // MANAGEFLIGHT_H