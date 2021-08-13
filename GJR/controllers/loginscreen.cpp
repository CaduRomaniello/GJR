#include "loginScreen.h"
#include "ui_loginscreen.h"
#include "homeScreen.h"
#include <string>
#include <QMessageBox>

loginScreen::loginScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginScreen)
{
    ui->setupUi(this);
}

loginScreen::~loginScreen()
{
    delete ui;
}

void loginScreen::loginUser() {
    QLineEdit* user = ui->edit_user;
    QLineEdit* password = ui->edit_password;

    if(user->text() == "admin" && password->text() == "admin") {
        user->clear();
        password->clear();

        this->close();

        HomeScreen* home = new HomeScreen(this);
        home->show();
    }

    else {
        QMessageBox::information(this, "Login", "Login Incorrect", QMessageBox::Close);
    }
}

void loginScreen::on_button_login_clicked() {
    loginUser();
}

