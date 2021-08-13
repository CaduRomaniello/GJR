#ifndef READTICKET_H
#define READTICKET_H

#include <QMainWindow>

#include <iostream>
#include <string>

using namespace std;

namespace Ui {
class ReadTicket;
}

class ReadTicket : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReadTicket(QWidget *parent = nullptr);
    ~ReadTicket();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::ReadTicket *ui;
    QWidget* parent;
};

#endif // READTICKET_H
