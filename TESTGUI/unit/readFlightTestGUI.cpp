#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>

#include "../GJR/controllers/readFlight.h"
#include "../GJR/controllers/manageFlight.h"
#include "ui_readFlight.h"

class ReadFlightTestGUI : public QObject
{
    Q_OBJECT

public:
    ReadFlightTestGUI();
    ~ReadFlightTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    ReadFlight *d;
    bool dialogoAberto;
    QString dialogoMsg;
};

ReadFlightTestGUI::ReadFlightTestGUI() {
    this->d = new ReadFlight(new ManageFlight(nullptr));
}

ReadFlightTestGUI::~ReadFlightTestGUI() {}

void ReadFlightTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao Edit   Flight") << d->ui->button_edit_flight   << "Invalid selected item" << true;
    QTest::addRow("Botao Delete Flight") << d->ui->button_delete_flight << "Invalid selected item" << true;
    QTest::addRow("Botao Cancel") << d->ui->button_cancel                   << "" << false;
}

void ReadFlightTestGUI::casoDeTestePrincipal()
{
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    d->show();

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->button_edit_flight, "Campo não buildado");
    QVERIFY2(d->ui->button_delete_flight, "Campo não buildado");
    QVERIFY2(d->ui->button_cancel, "Campo não buildado");
    QVERIFY2(d->ui->label_title, "Campo não buildado");
    QVERIFY2(d->ui->table_flight, "Campo não buildado");

    QTest::mouseClick(botao, Qt::LeftButton);
}

void ReadFlightTestGUI::timeOut()
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

#include "readFlightTestGUI.moc"
