#ifndef MANAGEAIRPLANE_H
#define MANAGEAIRPLANE_H

#include <QMainWindow>
#include "createAirplane.h"
#include "readAirplane.h"

namespace Ui {
class ManageAirplane;
}

class ManageAirplane : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManageAirplane(QWidget *parent = nullptr);
    ~ManageAirplane();

private slots:
    void on_button_back_clicked();

    void on_button_create_airplane_clicked();

    void on_button_read_airplane_clicked();

private:
    Ui::ManageAirplane *ui;
    QWidget* parent;
};

#endif // MANAGEAIRPLANE_H
