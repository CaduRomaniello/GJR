#ifndef UPDATEAIRPLANE_H
#define UPDATEAIRPLANE_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QTableWidget>

using namespace std;

namespace Ui {
class UpdateAirplane;
}

class UpdateAirplane : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdateAirplane(QWidget *parent = nullptr, QString idAirplane = "", QString modelAirplane = "", QString manuAirplane = "", QString regAirplane = "", QString pilotAirplane = "", QString copAirplane = "", QString capacityAirplane = "", QTableWidget* table=nullptr, int row=-1);
    ~UpdateAirplane();

private slots:
    void on_button_cancel_clicked();

    void on_button_update_airplane_clicked();

private:
    Ui::UpdateAirplane *ui;
    QWidget* parent;
    QTableWidget* table;
    int row;
};

#endif // UPDATEAIRPLANE_H
