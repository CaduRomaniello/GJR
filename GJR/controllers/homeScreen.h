#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QMainWindow>
#include <iostream>
#include <QTableWidgetItem>

namespace Ui {
class HomeScreen;
}

using namespace std;

class HomeScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomeScreen(QWidget *parent = nullptr);
    ~HomeScreen();

private slots:
    void on_button_manage_flight_clicked();

    void on_button_manager_airplane_clicked();

    void on_button_manage_ticket_clicked();

private:
    Ui::HomeScreen *ui;
};

#endif // HOMESCREEN_H
