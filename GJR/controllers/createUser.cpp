#include "createUser.h"
#include "ui_createUser.h"

CreateUser::CreateUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateUser)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
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
            // É necessario adicionar no banco de dados
            // Seria daora pedir a senha do admin
            HomeScreen* home = new HomeScreen(this);
            this->close();
            home->show();
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
    loginScreen* login = new loginScreen(this);
    this->close();
    login->show();
}

