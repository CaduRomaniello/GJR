#ifndef CREATEFLIGHT_H
#define CREATEFLIGHT_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

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
    //void on_spin_box_available_seats_UpdateCapacity();

    void on_combo_box_id_airplane_currentIndexChanged(int index);

private:
    Ui::CreateFlight *ui;
    QWidget* parent;
};

#endif // CREATEFLIGHT_H
