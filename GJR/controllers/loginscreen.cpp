#include "loginScreen.h"
#include "ui_loginScreen.h"
#include "homeScreen.h"
#include <string>
#include <QMessageBox>

static QSqlDatabase bdd = QSqlDatabase::addDatabase("QSQLITE");

loginScreen::loginScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginScreen)
{
    bdd.setDatabaseName("D:/Facul/eng_software_1/GJR/GJR/database/db_GJR.db");
    if (!bdd.open()){
        QMessageBox::information(this, "Erro", "Não foi possível abrir o banco de dados!", QMessageBox::Close);
        exit(1);
    }

    ui->setupUi(this);
    this->setFixedSize(800, 600);
}

loginScreen::~loginScreen()
{
    delete ui;
}

void loginScreen::loginUser() {
    QLineEdit* user = ui->edit_user;
    QLineEdit* password = ui->edit_password;

    QSqlQuery query;

    if(query.exec("select * from users where username='"+user->text()+"' and password='"+password->text()+"'")) {
        int count = 0;
        while(query.next()){
            count++;
        }
        if (count > 0){
            user->clear();
            password->clear();

            this->close();

            HomeScreen* home = new HomeScreen(this);
            home->show();
        }
        else{
            QMessageBox::information(this, "Login", "Login Incorrect", QMessageBox::Close);
        }
    }

    else {
        QMessageBox::information(this, "Login", "Login Incorrect", QMessageBox::Close);
    }
}

void loginScreen::on_button_login_clicked() {
    loginUser();
}

