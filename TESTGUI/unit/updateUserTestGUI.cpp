#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/updateUser.h"
#include "../GJR/controllers/manageUser.h"
#include "ui_updateUser.h"

class UpdateUserTestGUI : public QObject
{
    Q_OBJECT

public:
    UpdateUserTestGUI();
    ~UpdateUserTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    UpdateUser* d;
    bool dialogoAberto;
    QString dialogoMsg;
};

UpdateUserTestGUI::UpdateUserTestGUI() {
    this->d = new UpdateUser(new ManageUser(nullptr));
}

UpdateUserTestGUI::~UpdateUserTestGUI() {}

void UpdateUserTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QString>("user");
    QTest::addColumn<QString>("oldPassword");
    QTest::addColumn<QString>("password");
    QTest::addColumn<QString>("confirm");
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao update user") << "testeTestando" << "123" << "456" << "456" << d->ui->button_update_user << "User updated successfully." << true;
    QTest::addRow("Botao cancel") << "" << "" << "" << "" << d->ui->button_cancel << "" << false;
}

void UpdateUserTestGUI::casoDeTestePrincipal()
{
    QFETCH(QString, user);
    QFETCH(QString, oldPassword);
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
    QVERIFY2(d->ui->edit_old_password, "Campo não buildado");
    QVERIFY2(d->ui->edit_new_password, "Campo não buildado");
    QVERIFY2(d->ui->edit_confirm_new_password, "Campo não buildado");
    QVERIFY2(d->ui->label_confirm_password, "Campo não buildado");
    QVERIFY2(d->ui->label_password, "Campo não buildado");
    QVERIFY2(d->ui->label_title, "Campo não buildado");
    QVERIFY2(d->ui->label, "Campo não buildado");
    QVERIFY2(d->ui->label_user, "Campo não buildado");
    QVERIFY2(d->ui->button_cancel, "Campo não buildado");
    QVERIFY2(d->ui->button_update_user, "Campo não buildado");

    d->ui->edit_user->setText(user);
    d->ui->edit_old_password->setText(oldPassword);
    d->ui->edit_new_password->setText(password);
    d->ui->edit_confirm_new_password->setText(confirm);

    QTest::mouseClick(botao, Qt::LeftButton);
}

void UpdateUserTestGUI::timeOut()
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

#include "updateUserTestGUI.moc"
