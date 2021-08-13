#ifndef CREATETICKET_H
#define CREATETICKET_H

#include <QMainWindow>
#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class CreateTicket;
}

class CreateTicket : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateTicket(QWidget *parent = nullptr);
    ~CreateTicket();

private slots:
    void on_button_cancel_clicked();

    void on_button_create_clicked();

private:
    Ui::CreateTicket *ui;
    QWidget* parent;
};

#endif // CREATETICKET_H
