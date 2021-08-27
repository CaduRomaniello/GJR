#ifndef UPDATEUSER_H
#define UPDATEUSER_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class UpdateUser;
}

class UpdateUser : public QMainWindow
{
    Q_OBJECT
    friend class UpdateUserTestGUI;

public:
    explicit UpdateUser(QWidget *parent = nullptr, QString user = "");
    ~UpdateUser();

private slots:
    void on_button_update_user_clicked();

    void on_button_cancel_clicked();

private:
    Ui::UpdateUser *ui;
    QWidget* parent;
    QString oldUser;
};

#endif // UPDATEUSER_H
