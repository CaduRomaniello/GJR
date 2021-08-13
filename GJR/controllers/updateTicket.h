#ifndef UPDATETICKET_H
#define UPDATETICKET_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class UpdateTicket;
}

class UpdateTicket : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdateTicket(QWidget *parent = nullptr);
    ~UpdateTicket();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::UpdateTicket *ui;
    QWidget* parent;
};

#endif // UPDATETICKET_H
