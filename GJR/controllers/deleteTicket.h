#ifndef DELETETICKET_H
#define DELETETICKET_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class DeleteTicket;
}

class DeleteTicket : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteTicket(QWidget *parent = nullptr);
    ~DeleteTicket();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::DeleteTicket *ui;
    QWidget* parent;
};

#endif // DELETETICKET_H
