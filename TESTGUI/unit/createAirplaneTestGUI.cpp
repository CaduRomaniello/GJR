#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/createAirplane.h"
#include "../GJR/controllers/manageAirplane.h"
#include "ui_createAirplane.h"

class CreateAirplaneTestGUI : public QObject
{
    Q_OBJECT

public:
    CreateAirplaneTestGUI();
    ~CreateAirplaneTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    CreateAirplane* d;
    bool dialogoAberto;
    QString dialogoMsg;
};

CreateAirplaneTestGUI::CreateAirplaneTestGUI() {
    this->d = new CreateAirplane(new ManageAirplane(nullptr));
}

CreateAirplaneTestGUI::~CreateAirplaneTestGUI() {}

void CreateAirplaneTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QString>("model");
    QTest::addColumn<QString>("manufacturer");
    QTest::addColumn<QString>("registration");
    QTest::addColumn<QString>("capacity");
    QTest::addColumn<QString>("pilot");
    QTest::addColumn<QString>("copilot");
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao create valido") << "aviao" << "asadelta" << "AA-BBB" << "20" << "Cadu" << "Verona" << d->ui->button_create << "" << false;
    QTest::addRow("Botao create invalido") << "" << "" << "" << "" << "" << "" << d->ui->button_create << "Capacity should be greater than 0!" << true;
    QTest::addRow("Botao cancel") << "" << "" << "" << "" << "" << "" << d->ui->button_cancel << "" << false;
}

void CreateAirplaneTestGUI::casoDeTestePrincipal()
{
    QFETCH(QString, model);
    QFETCH(QString, manufacturer);
    QFETCH(QString, registration);
    QFETCH(QString, capacity);
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
    QVERIFY2(d->ui->button_create, "Campo não buildado");

    QTest::keyClicks(d->ui->edit_field_model, model);
    QTest::keyClicks(d->ui->edit_field_manufacturer, manufacturer);
    QTest::keyClicks(d->ui->edit_field_registration, registration);
    QTest::keyClicks(d->ui->spin_box_capacity, capacity);
    QTest::keyClicks(d->ui->line_edit_pilot, pilot);
    QTest::keyClicks(d->ui->edit_field_copilot, copilot);

    QTest::mouseClick(botao, Qt::LeftButton);
}

void CreateAirplaneTestGUI::timeOut()
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

#include "createAirplaneTestGUI.moc"
