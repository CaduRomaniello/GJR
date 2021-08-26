#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QMainWindow>
#include <iostream>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

#include "createUser.h"
#include "manageAdmin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class loginScreen; }
QT_END_NAMESPACE

using namespace std;

class loginScreen : public QMainWindow
{
    Q_OBJECT
    friend class LoginScreenTestGUI;

public:
    loginScreen(QWidget *parent = nullptr);
    ~loginScreen();

private slots:
    void on_button_login_clicked();

private:
    Ui::loginScreen *ui;
    void loginUser();
};
#endif // LOGINSCREEN_H
