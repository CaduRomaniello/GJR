#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/loginScreen.h"
#include "ui_loginScreen.h"

class LoginScreenTestGUI : public QObject
{
    Q_OBJECT

public:
    LoginScreenTestGUI();
    ~LoginScreenTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    loginScreen d;
    bool dialogoAberto;
    QString dialogoMsg;
};

LoginScreenTestGUI::LoginScreenTestGUI() {}

LoginScreenTestGUI::~LoginScreenTestGUI() {}

void LoginScreenTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QString>("user");
    QTest::addColumn<QString>("password");
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::newRow("Login incorreto") << "" << "" << d.ui->button_login << "Login Incorrect" << true;
    QTest::newRow("Login correto") << "admin" << "admin" << d.ui->button_login << "" << false;
    QTest::newRow("Botão create user") << "" << "" << d.ui->button_create_user << "" << false;
}

void LoginScreenTestGUI::casoDeTestePrincipal()
{
    QFETCH(QString, user);
    QFETCH(QString, password);
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    d.show();

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d.ui->label, "Campo não buildado");
    QVERIFY2(d.ui->label_user, "Campo não buildado");
    QVERIFY2(d.ui->edit_user, "Campo não buildado");
    QVERIFY2(d.ui->label_password, "Campo não buildado");
    QVERIFY2(d.ui->edit_password, "Campo não buildado");
    QVERIFY2(d.ui->button_login, "Campo não buildado");
    QVERIFY2(d.ui->button_create_user, "Campo não buildado");

    QTest::keyClicks(d.ui->edit_user, user);
    QTest::keyClicks(d.ui->edit_password, password);
    QTest::mouseClick(botao, Qt::LeftButton);
}

void LoginScreenTestGUI::timeOut()
{
    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QMessageBox")) {
            QMessageBox* mb = qobject_cast<QMessageBox*>(w);
            QCOMPARE(mb->text(), dialogoMsg);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }

    QCOMPARE(dialogoAberto, d.isVisible());
}

#include "loginScreenTestGUI.moc"
