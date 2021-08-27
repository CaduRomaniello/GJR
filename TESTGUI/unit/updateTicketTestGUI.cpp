#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/updateTicket.h"
#include "../GJR/controllers/readTicket.h"
#include "ui_updateTicket.h"

class UpdateTicketTestGUI : public QObject
{
    Q_OBJECT

public:
    UpdateTicketTestGUI();
    ~UpdateTicketTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    UpdateTicket* d;
    bool dialogoAberto;
    QString dialogoMsg;
};

UpdateTicketTestGUI::UpdateTicketTestGUI() {
    this->d = new UpdateTicket(new ReadTicket(nullptr), "1", "Cadu", "10", "30/09/2021", "11:11", "RJ", "SC", nullptr, -1, 1);
}

UpdateTicketTestGUI::~UpdateTicketTestGUI() {}

void UpdateTicketTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QString>("name");
    QTest::addColumn<int>("seat");
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao update ticket") << "CaduLocao" << 22 << d->ui->button_update_ticket << "" << false;
    QTest::addRow("Botao cancel") << "" << 0 << d->ui->button_cancel << "" << false;
}

void UpdateTicketTestGUI::casoDeTestePrincipal()
{
    QFETCH(QString, name);
    QFETCH(int, seat);
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    d->show();

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->edit_field_destiny, "Campo não buildado");
    QVERIFY2(d->ui->edit_field_name, "Campo não buildado");
    QVERIFY2(d->ui->line_edit_origin, "Campo não buildado");
    QVERIFY2(d->ui->spin_box_number_seat, "Campo não buildado");
    QVERIFY2(d->ui->time_flight, "Campo não buildado");
    QVERIFY2(d->ui->combo_box_id_flight, "Campo não buildado");
    QVERIFY2(d->ui->label_field_date, "Campo não buildado");
    QVERIFY2(d->ui->label_field_destiny, "Campo não buildado");
    QVERIFY2(d->ui->label_field_id_flight, "Campo não buildado");
    QVERIFY2(d->ui->label_field_origin, "Campo não buildado");
    QVERIFY2(d->ui->label_field_time, "Campo não buildado");
    QVERIFY2(d->ui->label_title, "Campo não buildado");
    QVERIFY2(d->ui->button_cancel, "Campo não buildado");
    QVERIFY2(d->ui->button_update_ticket, "Campo não buildado");

    d->ui->edit_field_name->setText(name);
    d->ui->spin_box_number_seat->setValue(seat);

    QTest::mouseClick(botao, Qt::LeftButton);
}

void UpdateTicketTestGUI::timeOut()
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

#include "updateTicketTestGUI.moc"
