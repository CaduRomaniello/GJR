#ifndef MANAGEFLIGHT_H
#define MANAGEFLIGHT_H

#include <QMainWindow>
#include "createFlight.h"
#include "readFlight.h"

namespace Ui {
class ManageFlight;
}

class ManageFlight : public QMainWindow
{
    Q_OBJECT
    friend class ManageFlightTestGUI;

public:
    explicit ManageFlight(QWidget *parent = nullptr);
    ~ManageFlight();

private slots:
    void on_button_back_clicked();

    void on_button_create_flight_clicked();

    void on_button_read_flight_clicked();

private:
    Ui::ManageFlight *ui;
    QWidget* parent;
};

#endif // MANAGEFLIGHT_H
