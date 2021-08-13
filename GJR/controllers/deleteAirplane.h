#ifndef DELETEAIRPLANE_H
#define DELETEAIRPLANE_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class DeleteAirplane;
}

class DeleteAirplane : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteAirplane(QWidget *parent = nullptr);
    ~DeleteAirplane();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::DeleteAirplane *ui;
    QWidget* parent;
};

#endif // DELETEAIRPLANE_H
