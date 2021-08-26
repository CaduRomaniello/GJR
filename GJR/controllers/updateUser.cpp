#include "updateUser.h"
#include "ui_updateUser.h"

UpdateUser::UpdateUser(QWidget *parent, QString user) :
    QMainWindow(parent),
    ui(new Ui::UpdateUser)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->parent = parent;

    ui->edit_user->setText(user);
    this->oldUser = user;
}

UpdateUser::~UpdateUser()
{
    delete ui;
}

void UpdateUser::on_button_update_user_clicked()
{
    QString newUser = ui->edit_user->text();
    QString oldPassword = ui->edit_old_password->text();
    QString newPassword = ui->edit_new_password->text();
    QString confirm = ui->edit_confirm_new_password->text();

    if(newUser != "") {
        if(newPassword == confirm) {
            QMessageBox::information(this, "Successfully created", "User updated successfully.", QMessageBox::Ok);
            QSqlQuery query;

            query.prepare("UPDATE users SET username = ?, password = ? WHERE username = ? and password = ?");
            query.addBindValue(newUser);
            query.addBindValue(newPassword);
            query.addBindValue(this->oldUser);
            query.addBindValue(oldPassword);
            query.exec();

            this->close();
            this->parent->show();
        }

        else {
            QMessageBox::information(this, "Create User", "Password incorrect", QMessageBox::Close);
        }
    }

    else {
       QMessageBox::information(this, "Create User", "User cannot be undefined", QMessageBox::Close);
    }
}


void UpdateUser::on_button_cancel_clicked()
{
    this->parent->show();
    this->close();
}

