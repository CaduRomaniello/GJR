#include <QApplication>
#include "unit/loginScreenTestGUI.cpp"
#include "unit/homeScreenTestGUI.cpp"
#include "unit/manageUserTestGUI.cpp"
#include "unit/manageAdminTestGUI.cpp"
#include "unit/manageAirplaneTestGUI.cpp"
#include "unit/manageFlightTestGUI.cpp"
#include "unit/createAirplaneTestGUI.cpp"
#include "unit/createFlightTestGUI.cpp"
#include "unit/createTicketTestGUI.cpp"
#include "unit/createUserTestGUI.cpp"
#include "unit/updateAirplaneTestGUI.cpp"
#include "unit/updateFlightTestGUI.cpp"
#include "unit/updateTicketTestGUI.cpp"
#include "unit/updateUserTestGUI.cpp"
#include "unit/readFlightTestGUI.cpp"
#include "unit/readAirplaneTestGUI.cpp"
#include "unit/readTicketTestGUI.cpp"

QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../TESTGUI/db_GJR_test.db";
    db.setDatabaseName(db_path);
    bool opened = db.open();
    QSqlQuery query;
    query.exec("delete from airplane");
    query.exec("delete from sqlite_sequence where name='airplane'");
    query.exec("delete from flight");
    query.exec("delete from sqlite_sequence where name='flight'");
    query.exec("delete from ticket");
    query.exec("delete from sqlite_sequence where name='ticket'");
    assert(opened == true);

    int err = 0;
    LoginScreenTestGUI testLogin;
    err += QTest::qExec(&testLogin);

    QTest::qWait(500);

    HomeScreenTestGUI testHome;
    err += QTest::qExec(&testHome);

    QTest::qWait(500);

    ManageAdminTestGUI testManageAdmin;
    err += QTest::qExec(&testManageAdmin);

    QTest::qWait(500);

    ManageAirplaneTestGUI testManageAirplane;
    err += QTest::qExec(&testManageAirplane);

    QTest::qWait(500);

    ManageFlightTestGUI testManageFlight;
    err += QTest::qExec(&testManageFlight);

    QTest::qWait(600);

    ManageUserTestGUI testManageUser;
    err += QTest::qExec(&testManageUser);

    QTest::qWait(500);

    CreateAirplaneTestGUI testCreateAirplane;
    err += QTest::qExec(&testCreateAirplane);

    QTest::qWait(500);

    CreateFlightTestGUI testCreateFlight;
    err += QTest::qExec(&testCreateFlight);

    QTest::qWait(500);

    CreateTicketTestGUI testCreateTicket;
    err += QTest::qExec(&testCreateTicket);

    QTest::qWait(600);

    CreateUserTestGUI testCreateUser;
    err += QTest::qExec(&testCreateUser);

    QTest::qWait(500);

    UpdateAirplaneTestGUI testUpdateAirplane;
    err += QTest::qExec(&testUpdateAirplane);

    QTest::qWait(500);

    UpdateFlightTestGUI testUpdateFlight;
    err += QTest::qExec(&testUpdateFlight);

    QTest::qWait(500);

    UpdateTicketTestGUI testUpdateTicket;
    err += QTest::qExec(&testUpdateTicket);

    QTest::qWait(600);

    UpdateUserTestGUI testUpdateUser;
    err += QTest::qExec(&testUpdateUser);

    QTest::qWait(600);

    ReadAirplaneTestGUI testReadAirplane;
    err += QTest::qExec(&testReadAirplane);

    QTest::qWait(500);

    ReadFlightTestGUI testReadFlight;
    err += QTest::qExec(&testReadFlight);

    QTest::qWait(500);

    ReadTicketTestGUI testReadTicket;
    err += QTest::qExec(&testReadTicket);

    cout << "Total de erros: " << err << endl;

    return 0;
}
