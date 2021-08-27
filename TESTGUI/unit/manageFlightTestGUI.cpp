#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/manageFlight.h"
#include "ui_manageFlight.h"

class ManageFlightTestGUI : public QObject
{
    Q_OBJECT

public:
    ManageFlightTestGUI();
    ~ManageFlightTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    ManageFlight *d;
    bool dialogoAberto;
    QString dialogoMsg;
};

ManageFlightTestGUI::ManageFlightTestGUI() {
    this->d = new ManageFlight(new HomeScreen(nullptr));
}

ManageFlightTestGUI::~ManageFlightTestGUI() {}

void ManageFlightTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao window Create Flight") << d->ui->button_create_flight << "" << false;
    QTest::addRow("Botao window Read Flight") << d->ui->button_read_flight << "" << false;
    QTest::addRow("Botao back") << d->ui->button_back << "" << false;
}

void ManageFlightTestGUI::casoDeTestePrincipal()
{
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    d->show();

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->button_back, "Campo não buildado");
    QVERIFY2(d->ui->button_create_flight, "Campo não buildado");
    QVERIFY2(d->ui->button_read_flight, "Campo não buildado");

    QTest::mouseClick(botao, Qt::LeftButton);
}

void ManageFlightTestGUI::timeOut()
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

#include "manageFlightTestGUI.moc"
