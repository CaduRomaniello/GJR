#ifndef MANAGEADMIN_H
#define MANAGEADMIN_H

#include <QMainWindow>
#include "homeScreen.h"
#include "manageUser.h"
#include "loginScreen.h"

namespace Ui {
class ManageAdmin;
}

class ManageAdmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManageAdmin(QWidget *parent = nullptr);
    ~ManageAdmin();

private slots:
    void on_button_window_GJR_clicked();

    void on_button_window_user_manage_clicked();

    void on_button_exit_clicked();

private:
    Ui::ManageAdmin *ui;
};

#endif // MANAGEADMIN_H
