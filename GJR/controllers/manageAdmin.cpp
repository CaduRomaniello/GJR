#include "manageAdmin.h"
#include "ui_manageAdmin.h"

ManageAdmin::ManageAdmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManageAdmin)
{
    this->setFixedSize(800, 600);
    ui->setupUi(this);
}

ManageAdmin::~ManageAdmin()
{
    delete ui;
}

void ManageAdmin::on_button_window_GJR_clicked()
{
    HomeScreen* home = new HomeScreen(this);
    this->close();
    home->show();
}


void ManageAdmin::on_button_window_user_manage_clicked()
{
    ManageUser* user = new ManageUser(this);
    this->close();
    user->show();
}


void ManageAdmin::on_button_exit_clicked()
{
    loginScreen* login = new loginScreen();
    this->close();
    login->show();
}

