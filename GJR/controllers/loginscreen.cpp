#include "loginScreen.h"
#include "ui_loginScreen.h"
#include "homeScreen.h"
#include "container.h"
#include <string>
#include <QMessageBox>

static QSqlDatabase bdd = QSqlDatabase::addDatabase("QSQLITE");

loginScreen::loginScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginScreen)
{
    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../GJR/database/db_GJR.db";
    bdd.setDatabaseName(db_path);
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

            Container* c = Container::getContainer();
            if (user->text().toStdString() == "admin"){
                c->setAdmPermission(true);
            }
            else{
                c->setAdmPermission(false);
            }

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


void loginScreen::on_button_create_user_clicked()
{
    CreateUser* createUser = new CreateUser(this);
    this->close();
    createUser->show();
}

