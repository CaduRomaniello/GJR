#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/createUser.h"
#include "../GJR/controllers/manageUser.h"
#include "ui_createUser.h"

class CreateUserTestGUI : public QObject
{
    Q_OBJECT

public:
    CreateUserTestGUI();
    ~CreateUserTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    CreateUser* d;
    bool dialogoAberto;
    QString dialogoMsg;
};

CreateUserTestGUI::CreateUserTestGUI() {
    this->d = new CreateUser(new ManageUser(nullptr));
}

CreateUserTestGUI::~CreateUserTestGUI() {}

void CreateUserTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QString>("user");
    QTest::addColumn<QString>("password");
    QTest::addColumn<QString>("confirm");
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao create user") << "teste" << "123" << "123" << d->ui->button_create_user << "User created successfully." << true;
    QTest::addRow("Botao cancel") << "" << "" << "" << d->ui->button_cancel << "" << false;
}

void CreateUserTestGUI::casoDeTestePrincipal()
{
    QFETCH(QString, user);
    QFETCH(QString, password);
    QFETCH(QString, confirm);
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    d->show();

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->edit_user, "Campo não buildado");
    QVERIFY2(d->ui->edit_confirm_password, "Campo não buildado");
    QVERIFY2(d->ui->edit_password, "Campo não buildado");
    QVERIFY2(d->ui->label_confirm_password, "Campo não buildado");
    QVERIFY2(d->ui->label_password, "Campo não buildado");
    QVERIFY2(d->ui->label_title, "Campo não buildado");
    QVERIFY2(d->ui->label_user, "Campo não buildado");
    QVERIFY2(d->ui->button_cancel, "Campo não buildado");
    QVERIFY2(d->ui->button_create_user, "Campo não buildado");

    QTest::keyClicks(d->ui->edit_user, user);
    QTest::keyClicks(d->ui->edit_password, password);
    QTest::keyClicks(d->ui->edit_confirm_password, confirm);

    QTest::mouseClick(botao, Qt::LeftButton);
}

void CreateUserTestGUI::timeOut()
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

    QCOMPARE(dialogoAberto, d->isVisible());
}

#include "createUserTestGUI.moc"
