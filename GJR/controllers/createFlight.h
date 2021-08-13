#ifndef CREATEFLIGHT_H
#define CREATEFLIGHT_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class CreateFlight;
}

class CreateFlight : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateFlight(QWidget *parent = nullptr);
    ~CreateFlight();

private slots:
    void on_button_cancel_clicked();

    void on_button_create_clicked();

private:
    Ui::CreateFlight *ui;
    QWidget* parent;
};

#endif // CREATEFLIGHT_H
