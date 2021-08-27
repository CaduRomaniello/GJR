#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QCoreApplication>

#include "../GJR/controllers/manageAirplane.h"
#include "ui_manageAirplane.h"

class ManageAirplaneTestGUI : public QObject
{
    Q_OBJECT

public:
    ManageAirplaneTestGUI();
    ~ManageAirplaneTestGUI();

private slots:
    void casoDeTestePrincipal_data();
    void casoDeTestePrincipal();
    void timeOut();

private:
    ManageAirplane* d;
    bool dialogoAberto;
    QString dialogoMsg;
};

ManageAirplaneTestGUI::ManageAirplaneTestGUI(){
    this->d = new ManageAirplane(new HomeScreen(nullptr));
}

ManageAirplaneTestGUI::~ManageAirplaneTestGUI() {}

void ManageAirplaneTestGUI::casoDeTestePrincipal_data()
{
    // INPUT
    QTest::addColumn<QPushButton*>("botao");

    // OUTPUT
    QTest::addColumn<QString>("mensagem");
    QTest::addColumn<bool>("visivel");

    QTest::addRow("Botao window Create Airplane") << d->ui->button_create_airplane << "" << false;
    QTest::addRow("Botao window Read Airplane") << d->ui->button_read_airplane << "" << false;
    QTest::addRow("Botao back") << d->ui->button_back << "" << false;
}

void ManageAirplaneTestGUI::casoDeTestePrincipal()
{
    QFETCH(QPushButton*, botao);
    QFETCH(QString, mensagem);
    QFETCH(bool, visivel);

    dialogoMsg = mensagem;
    dialogoAberto = visivel;

    d->show();

    QTimer::singleShot(500, this, SLOT(timeOut()));

    QVERIFY2(d->ui->button_create_airplane, "Campo não buildado");
    QVERIFY2(d->ui->button_read_airplane, "Campo não buildado");
    QVERIFY2(d->ui->button_back, "Campo não buildado");

    QTest::mouseClick(botao, Qt::LeftButton);
}

void ManageAirplaneTestGUI::timeOut()
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

#include "manageAirplaneTestGUI.moc"
