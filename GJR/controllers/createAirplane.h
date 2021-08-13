#ifndef CREATEAIRPLANE_H
#define CREATEAIRPLANE_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class CreateAirplane;
}

class CreateAirplane : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateAirplane(QWidget *parent = nullptr);
    ~CreateAirplane();

private slots:
    void on_button_cancel_clicked();

    void on_button_create_clicked();

private:
    Ui::CreateAirplane *ui;
    QWidget* parent;
};

#endif // CREATEAIRPLANE_H
