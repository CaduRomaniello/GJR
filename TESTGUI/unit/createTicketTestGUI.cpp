#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/createTicket.h"
#include "../GJR/controllers/homeScreen.h"
#include "ui_createTicket.h"

class CreateTicketTestGUI : public QObject
{
    Q_OBJECT

public:
    CreateTicketTestGUI();
    ~CreateTicketTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    CreateTicket* d;
    bool dialogoAberto;
    QString dialogoMsg;
};

CreateTicketTestGUI::CreateTicketTestGUI() {
    this->d = new CreateTicket(new HomeScreen(nullptr), "1", "28/09/2021", "11:11", "RJ", "SP");
}

CreateTicketTestGUI::~CreateTicketTestGUI() {}

void CreateTicketTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QString>("name");
    QTest::addColumn<QString>("cpf");
    QTest::addColumn<QString>("seat");
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao create") << "Cadu" << "111.111.111-11" << "10" << d->ui->button_create << "" << false;
    QTest::addRow("Botao cancel") << "" << "" << "" << d->ui->button_cancel << "" << false;
}

void CreateTicketTestGUI::casoDeTestePrincipal()
{
    QFETCH(QString, name);
    QFETCH(QString, cpf);
    QFETCH(QString, seat);
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    d->show();

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->edit_field_cpf, "Campo não buildado");
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
    QVERIFY2(d->ui->button_create, "Campo não buildado");

    QTest::keyClicks(d->ui->edit_field_name, name);
    d->ui->edit_field_cpf->setText(cpf);
    QTest::keyClicks(d->ui->spin_box_number_seat, seat);

    QTest::mouseClick(botao, Qt::LeftButton);
}

void CreateTicketTestGUI::timeOut()
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

#include "createTicketTestGUI.moc"
