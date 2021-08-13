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
    explicit UpdateFlight(QWidget *parent = nullptr);
    ~UpdateFlight();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::UpdateFlight *ui;
    QWidget* parent;
};

#endif // UPDATEFLIGHT_H
