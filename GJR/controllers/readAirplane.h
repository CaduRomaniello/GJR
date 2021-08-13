#ifndef READAIRPLANE_H
#define READAIRPLANE_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class ReadAirplane;
}

class ReadAirplane : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReadAirplane(QWidget *parent = nullptr);
    ~ReadAirplane();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::ReadAirplane *ui;
    QWidget* parent;
};

#endif // READAIRPLANE_H
