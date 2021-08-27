#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>

#include "../GJR/controllers/manageUser.h"
#include "ui_manageUser.h"

class ManageUserTestGUI : public QObject
{
    Q_OBJECT

public:
    ManageUserTestGUI();
    ~ManageUserTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    ManageUser *d;
    bool dialogoAberto;
    QString dialogoMsg;
};

ManageUserTestGUI::ManageUserTestGUI() {
    this->d = new ManageUser(new ManageAdmin(nullptr));
}

ManageUserTestGUI::~ManageUserTestGUI() {}

void ManageUserTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao Create User") << d->ui->button_create_user << "Invalid selected item" << true;
    QTest::addRow("Botao Delete User") << d->ui->button_delete_user << "Invalid selected item" << true;
    QTest::addRow("Botao Update User") << d->ui->button_update_user << "Invalid selected item" << true;
    QTest::addRow("Botao Back")        << d->ui->button_back        << ""                      << false;
}

void ManageUserTestGUI::casoDeTestePrincipal()
{
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    d->show();

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->button_create_user, "Campo não buildado");
    QVERIFY2(d->ui->button_delete_user, "Campo não buildado");
    QVERIFY2(d->ui->button_update_user, "Campo não buildado");
    QVERIFY2(d->ui->button_back, "Campo não buildado");
    QVERIFY2(d->ui->label_title, "Campo não buildado");
    QVERIFY2(d->ui->table_users, "Campo não buildado");

    QTest::mouseClick(botao, Qt::LeftButton);
}

void ManageUserTestGUI::timeOut()
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

#include "manageUserTestGUI.moc"
