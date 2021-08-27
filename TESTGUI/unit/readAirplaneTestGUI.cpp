#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>

#include "../GJR/controllers/readAirplane.h"
#include "../GJR/controllers/manageAirplane.h"
#include "ui_readAirplane.h"

class ReadAirplaneTestGUI : public QObject
{
    Q_OBJECT

public:
    ReadAirplaneTestGUI();
    ~ReadAirplaneTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    ReadAirplane *d;
    bool dialogoAberto;
    QString dialogoMsg;
};

ReadAirplaneTestGUI::ReadAirplaneTestGUI() {
    this->d = new ReadAirplane(new ManageAirplane(nullptr));
}

ReadAirplaneTestGUI::~ReadAirplaneTestGUI() {}

void ReadAirplaneTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao Edit Airplane") << d->ui->button_edit_airplane   << "Invalid selected item" << true;
    QTest::addRow("Botao Delete Airplane") << d->ui->button_delete_airplane << "Invalid selected item" << true;
    QTest::addRow("Botao Cancel") << d->ui->button_cancel          << "" << false;
}

void ReadAirplaneTestGUI::casoDeTestePrincipal()
{
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    d->show();

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->button_edit_airplane, "Campo não buildado");
    QVERIFY2(d->ui->button_delete_airplane, "Campo não buildado");
    QVERIFY2(d->ui->button_cancel, "Campo não buildado");
    QVERIFY2(d->ui->label_title, "Campo não buildado");
    QVERIFY2(d->ui->table_airplane, "Campo não buildado");

    QTest::mouseClick(botao, Qt::LeftButton);
}

void ReadAirplaneTestGUI::timeOut()
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

#include "readAirplaneTestGUI.moc"
