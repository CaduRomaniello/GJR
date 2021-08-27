#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/createFlight.h"
#include "../GJR/controllers/manageFlight.h"
#include "ui_createFlight.h"

class CreateFlightTestGUI : public QObject
{
    Q_OBJECT

public:
    CreateFlightTestGUI();
    ~CreateFlightTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    CreateFlight* d;
    bool dialogoAberto;
    QString dialogoMsg;
};

CreateFlightTestGUI::CreateFlightTestGUI() {
    this->d = new CreateFlight(new ManageFlight(nullptr));
}

CreateFlightTestGUI::~CreateFlightTestGUI() {}

void CreateFlightTestGUI::casoDeTestePrincipal_data()
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

    QTest::addRow("Botao create") << "11:11" << "28/09/2021" << "RJ" << "SP" << d->ui->button_create << "" << false;
    QTest::addRow("Botao cancel") << "" << "" << "" << "" << d->ui->button_cancel << "" << false;
}

void CreateFlightTestGUI::casoDeTestePrincipal()
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
    QVERIFY2(d->ui->label_title, "Campo não buildado");
    QVERIFY2(d->ui->button_cancel, "Campo não buildado");
    QVERIFY2(d->ui->button_create, "Campo não buildado");

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

    QTest::keyClicks(d->ui->line_edit_origin, origin);
    QTest::keyClicks(d->ui->edit_label_destiny, destiny);

    QTest::mouseClick(botao, Qt::LeftButton);
}

void CreateFlightTestGUI::timeOut()
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

#include "createFlightTestGUI.moc"
