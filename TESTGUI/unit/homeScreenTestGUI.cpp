#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>

#include "../GJR/controllers/homeScreen.h"
#include "ui_homeScreen.h"

class HomeScreenTestGUI : public QObject
{
    Q_OBJECT

public:
    HomeScreenTestGUI();
    ~HomeScreenTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    HomeScreen d;
    bool dialogoAberto;
    QString dialogoMsg;
};

HomeScreenTestGUI::HomeScreenTestGUI() {}

HomeScreenTestGUI::~HomeScreenTestGUI() {}

void HomeScreenTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao edit flight") << d.ui->button_edit_flight << "Invalid selected item" << true;
    QTest::addRow("Botao delete flight") << d.ui->button_delete_flight << "Invalid selected item" << true;
    QTest::addRow("Botao buy ticket") << d.ui->button_buy_ticket << "Invalid selected item" << true;
}

void HomeScreenTestGUI::casoDeTestePrincipal()
{
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    d.show();

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d.ui->button_buy_ticket, "Campo não buildado");
    QVERIFY2(d.ui->button_delete_flight, "Campo não buildado");
    QVERIFY2(d.ui->button_edit_flight, "Campo não buildado");
    QVERIFY2(d.ui->button_manage_flight, "Campo não buildado");
    QVERIFY2(d.ui->button_manage_ticket, "Campo não buildado");
    QVERIFY2(d.ui->button_manager_airplane, "Campo não buildado");
    QVERIFY2(d.ui->label_title, "Campo não buildado");
    QVERIFY2(d.ui->table_flight, "Campo não buildado");

    QTest::mouseClick(botao, Qt::LeftButton);
}

void HomeScreenTestGUI::timeOut()
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

#include "homeScreenTestGUI.moc"
