#ifndef UPDATEAIRPLANE_H
#define UPDATEAIRPLANE_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class UpdateAirplane;
}

class UpdateAirplane : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdateAirplane(QWidget *parent = nullptr);
    ~UpdateAirplane();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::UpdateAirplane *ui;
    QWidget* parent;
};

#endif // UPDATEAIRPLANE_H
