#ifndef UPDATEFLIGHT_H
#define UPDATEFLIGHT_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class UpdateFlight;
}

class UpdateFlight : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdateFlight(QWidget *parent = nullptr, int id = -1);
    ~UpdateFlight();

private slots:
    void on_button_cancel_clicked();

    void on_button_update_clicked();

private:
    Ui::UpdateFlight *ui;
    QWidget* parent;
    int id;
    void getDataFlightEdit();
};

#endif // UPDATEFLIGHT_H
