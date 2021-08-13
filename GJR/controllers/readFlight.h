#ifndef READFLIGHT_H
#define READFLIGHT_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class ReadFlight;
}

class ReadFlight : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReadFlight(QWidget *parent = nullptr);
    ~ReadFlight();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::ReadFlight *ui;
    QWidget* parent;
};

#endif // READFLIGHT_H
