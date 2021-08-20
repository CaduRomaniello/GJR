#ifndef CREATEUSER_H
#define CREATEUSER_H

#include <QMainWindow>
#include <QMessageBox>
#include "loginScreen.h"
#include "homeScreen.h"

namespace Ui {
class CreateUser;
}

class CreateUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateUser(QWidget *parent = nullptr);
    ~CreateUser();

private slots:
    void on_button_create_user_clicked();

    void on_button_cancel_clicked();

private:
    Ui::CreateUser *ui;
};

#endif // CREATEUSER_H
