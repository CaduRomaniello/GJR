#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/updateFlight.h"
#include "../GJR/controllers/readFlight.h"
#include "ui_updateFlight.h"

class UpdateFlightTestGUI : public QObject
{
    Q_OBJECT

public:
    UpdateFlightTestGUI();
    ~UpdateFlightTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    UpdateFlight* d;
    bool dialogoAberto;
    QString dialogoMsg;
};

UpdateFlightTestGUI::UpdateFlightTestGUI() {
    this->d = new UpdateFlight(new ReadFlight(nullptr), "1", "28/09/2021", "11:11", "RJ", "SP", "199", nullptr, -1, 1);
}

UpdateFlightTestGUI::~UpdateFlightTestGUI() {}

void UpdateFlightTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QString>("time");
    QTest::addColumn<QString>("date");
    QTest::addColumn<QString>("origin");
    QTest::addColumn<QString>("destiny");
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao update") << "11:11" << "30/09/2021" << "RJ" << "SC" << d->ui->button_update << "" << false;
    QTest::addRow("Botao cancel") << "" << "" << "" << "" << d->ui->button_cancel << "" << false;
}

void UpdateFlightTestGUI::casoDeTestePrincipal()
{
    QFETCH(QString, time);
    QFETCH(QString, date);
    QFETCH(QString, origin);
    QFETCH(QString, destiny);
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    d->show();

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->edit_label_destiny, "Campo não buildado");
    QVERIFY2(d->ui->line_edit_origin, "Campo não buildado");
    QVERIFY2(d->ui->time_flight, "Campo não buildado");
    QVERIFY2(d->ui->date_flight, "Campo não buildado");
    QVERIFY2(d->ui->combo_box_id_airplane, "Campo não buildado");
    QVERIFY2(d->ui->spin_box_available_seats, "Campo não buildado");
    QVERIFY2(d->ui->label_field_available, "Campo não buildado");
    QVERIFY2(d->ui->label_field_date, "Campo não buildado");
    QVERIFY2(d->ui->label_field_destiny, "Campo não buildado");
    QVERIFY2(d->ui->label_field_id_airplane, "Campo não buildado");
    QVERIFY2(d->ui->label_field_origin, "Campo não buildado");
    QVERIFY2(d->ui->label_field_time, "Campo não buildado");
    QVERIFY2(d->ui->label, "Campo não buildado");
    QVERIFY2(d->ui->button_cancel, "Campo não buildado");
    QVERIFY2(d->ui->button_update, "Campo não buildado");

    if(time != "") {
        QStringList dateset = date.split("/");
        d->ui->date_flight->setDate(QDate(dateset[2].toInt(), dateset[1].toInt(), dateset[0].toInt()));

        QStringList timeset = time.split(":");
        d->ui->time_flight->setTime(QTime(timeset[0].toInt(), timeset[1].toInt()));
    }

    else {
        QTest::keyClicks(d->ui->time_flight, time);
        QTest::keyClicks(d->ui->date_flight, date);
    }

    d->ui->line_edit_origin->setText(origin);
    d->ui->edit_label_destiny->setText(destiny);

    QTest::mouseClick(botao, Qt::LeftButton);
}

void UpdateFlightTestGUI::timeOut()
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

#include "updateFlightTestGUI.moc"
