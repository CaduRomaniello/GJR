#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>

#include "../GJR/controllers/readTicket.h"
#include "../GJR/controllers/homeScreen.h"
#include "ui_readTicket.h"

class ReadTicketTestGUI : public QObject
{
    Q_OBJECT

public:
    ReadTicketTestGUI();
    ~ReadTicketTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    ReadTicket *d;
    bool dialogoAberto;
    QString dialogoMsg;
};

ReadTicketTestGUI::ReadTicketTestGUI() {
    this->d = new ReadTicket(new HomeScreen(nullptr));
}

ReadTicketTestGUI::~ReadTicketTestGUI() {}

void ReadTicketTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao Edit   Ticket") << d->ui->button_edit_ticket   << "Invalid selected item" << true;
    QTest::addRow("Botao Delete Ticket") << d->ui->button_delete_ticket << "Invalid selected item" << true;
    QTest::addRow("Botao Cancel") << d->ui->button_cancel                   << "" << false;
}

void ReadTicketTestGUI::casoDeTestePrincipal()
{
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    d->show();

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->button_edit_ticket, "Campo não buildado");
    QVERIFY2(d->ui->button_delete_ticket, "Campo não buildado");
    QVERIFY2(d->ui->button_cancel, "Campo não buildado");
    QVERIFY2(d->ui->label_title, "Campo não buildado");
    QVERIFY2(d->ui->table_ticket, "Campo não buildado");

    QTest::mouseClick(botao, Qt::LeftButton);
}

void ReadTicketTestGUI::timeOut()
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

#include "readTicketTestGUI.moc"
