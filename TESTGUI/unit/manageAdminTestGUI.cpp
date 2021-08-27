#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/manageAdmin.h"
#include "ui_manageAdmin.h"

class ManageAdminTestGUI : public QObject
{
    Q_OBJECT

public:
    ManageAdminTestGUI();
    ~ManageAdminTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    ManageAdmin d;
    bool dialogoAberto;
    QString dialogoMsg;
};

ManageAdminTestGUI::ManageAdminTestGUI() {}

ManageAdminTestGUI::~ManageAdminTestGUI() {}

void ManageAdminTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao window GJR") << d.ui->button_window_GJR << "" << false;
    QTest::addRow("Botao window user manage") << d.ui->button_window_user_manage << "" << false;
    QTest::addRow("Botao exit") << d.ui->button_exit << "" << false;
}

void ManageAdminTestGUI::casoDeTestePrincipal()
{
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    d.show();

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d.ui->button_exit, "Campo não buildado");
    QVERIFY2(d.ui->button_window_GJR, "Campo não buildado");
    QVERIFY2(d.ui->button_window_user_manage, "Campo não buildado");

    QTest::mouseClick(botao, Qt::LeftButton);
}

void ManageAdminTestGUI::timeOut()
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

#include "manageAdminTestGUI.moc"
