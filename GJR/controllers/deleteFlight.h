#ifndef DELETEFLIGHT_H
#define DELETEFLIGHT_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class DeleteFlight;
}

class DeleteFlight : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteFlight(QWidget *parent = nullptr);
    ~DeleteFlight();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::DeleteFlight *ui;
    QWidget* parent;
};

#endif // DELETEFLIGHT_H
