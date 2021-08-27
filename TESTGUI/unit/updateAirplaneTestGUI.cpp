#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/updateAirplane.h"
#include "../GJR/controllers/readAirplane.h"
#include "ui_updateAirplane.h"

class UpdateAirplaneTestGUI : public QObject
{
    Q_OBJECT

public:
    UpdateAirplaneTestGUI();
    ~UpdateAirplaneTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    UpdateAirplane* d;
    bool dialogoAberto;
    QString dialogoMsg;
};

UpdateAirplaneTestGUI::UpdateAirplaneTestGUI() {
    this->d = new UpdateAirplane(new ReadAirplane(nullptr), "1", "aviao", "asadelta", "AA-BBB", "Cadu", "Verona", "200");
}

UpdateAirplaneTestGUI::~UpdateAirplaneTestGUI() {}

void UpdateAirplaneTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QString>("model");
    QTest::addColumn<QString>("manufacturer");
    QTest::addColumn<QString>("pilot");
    QTest::addColumn<QString>("copilot");
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao update") << "AVIAO DO CARALHO" << "ASADELTA DA PORRA" << "Cadu" << "Verona" << d->ui->button_update_airplane << "" << false;
    QTest::addRow("Botao cancel") << "" << "" << "" << "" << d->ui->button_cancel << "" << false;
}

void UpdateAirplaneTestGUI::casoDeTestePrincipal()
{
    QFETCH(QString, model);
    QFETCH(QString, manufacturer);
    QFETCH(QString, pilot);
    QFETCH(QString, copilot);
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    d->show();

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->edit_field_model, "Campo não buildado");
    QVERIFY2(d->ui->edit_field_copilot, "Campo não buildado");
    QVERIFY2(d->ui->edit_field_manufacturer, "Campo não buildado");
    QVERIFY2(d->ui->edit_field_registration, "Campo não buildado");
    QVERIFY2(d->ui->line_edit_pilot, "Campo não buildado");
    QVERIFY2(d->ui->spin_box_capacity, "Campo não buildado");
    QVERIFY2(d->ui->label_field_capacity, "Campo não buildado");
    QVERIFY2(d->ui->label_field_copilot, "Campo não buildado");
    QVERIFY2(d->ui->label_field_manufacturer, "Campo não buildado");
    QVERIFY2(d->ui->label_field_model, "Campo não buildado");
    QVERIFY2(d->ui->label_field_pilot, "Campo não buildado");
    QVERIFY2(d->ui->label_field_registration, "Campo não buildado");
    QVERIFY2(d->ui->label_title, "Campo não buildado");
    QVERIFY2(d->ui->button_cancel, "Campo não buildado");
    QVERIFY2(d->ui->button_update_airplane, "Campo não buildado");

    d->ui->edit_field_model->setText(model);
    d->ui->edit_field_manufacturer->setText(manufacturer);
    d->ui->line_edit_pilot->setText(pilot);
    d->ui->edit_field_copilot->setText(copilot);

    QTest::mouseClick(botao, Qt::LeftButton);
}

void UpdateAirplaneTestGUI::timeOut()
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

#include "updateAirplaneTestGUI.moc"
