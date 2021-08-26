#include "createUser.h"
#include "ui_createUser.h"

CreateUser::CreateUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateUser)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->parent = parent;
}

CreateUser::~CreateUser()
{
    delete ui;
}

void CreateUser::on_button_create_user_clicked()
{
    QString user = ui->edit_user->text();
    QString password = ui->edit_password->text();
    QString confirm = ui->edit_confirm_password->text();

    if(user != "") {
        if(password == confirm) {
            QMessageBox::information(this, "Successfully created", "User created successfully.", QMessageBox::Ok);
            QSqlQuery query;

            query.prepare("insert into users (username, password) values (?, ?)");
            query.addBindValue(user);
            query.addBindValue(password);
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


void CreateUser::on_button_cancel_clicked()
{
    this->close();
    this->parent->show();
}

