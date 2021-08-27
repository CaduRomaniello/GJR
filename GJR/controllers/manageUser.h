#ifndef MANAGEUSER_H
#define MANAGEUSER_H

#include <QMainWindow>
#include <QSqlQuery>
#include "createUser.h"
#include "updateUser.h"

namespace Ui {
class ManageUser;
}

class ManageUser : public QMainWindow
{
    Q_OBJECT
    friend class ManageUserTestGUI;

public:
    explicit ManageUser(QWidget *parent = nullptr);
    ~ManageUser();
    void reloadTable();
    void showEvent(QShowEvent *e);

private slots:
    void on_button_back_clicked();

    void on_button_create_user_clicked();

    void on_button_update_user_clicked();

    void on_button_delete_user_clicked();

private:
    Ui::ManageUser *ui;
    QWidget* parent;
};

#endif // MANAGEUSER_H
