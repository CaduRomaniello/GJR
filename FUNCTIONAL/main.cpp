#include <QCoreApplication>
#include "container.h"

int main()
{

    cout << "." << endl;
    QSqlDatabase bdd = QSqlDatabase::addDatabase("QSQLITE");

    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../FUNCTIONAL/db_GJR.db";
    bdd.setDatabaseName(db_path);
    if (!bdd.open()){
        cout << "Não foi possível abrir o banco de dados!" << endl;
        exit(1);
    }

    QSqlQuery clearQuery;
    clearQuery.exec("delete from airplane");
    clearQuery.exec("delete from flight");
    clearQuery.exec("delete from ticket");
    clearQuery.exec("delete from sqlite_sequence where name='airplane'");
    clearQuery.exec("delete from sqlite_sequence where name='flight'");
    clearQuery.exec("delete from sqlite_sequence where name='ticket'");

    QSqlQuery query1;
    QSqlQuery query2;
    QSqlQuery query3;
    int count = 0;
    Container* c = Container::getContainer();

    cout << "Create airplane" << endl;
    string model = "boeing";
    string manufacturer = "boeing";
    string registration = "AA-AAA";
    string pilot = "joao";
    string copilot = "pedro";
    int capacity = 30;

    Airplane* x0 = c->createAirplane(model, manufacturer, registration, pilot, copilot, capacity);
    Airplane* x1 = c->readAirplane(registration);

    // Check registration pushed to the database Airplane table
    assert(x1 != NULL);
    assert(x1->getRegistration() == x0->getRegistration());

    delete x0;
    delete x1;
    cout << "Ok" << endl;
    cout << "=====================================================" << endl;


    cout << "Create flight" << endl;
    string time = "03:30";
    string date = "01/01/2021";
    string origin = "OP";
    string destiny = "SP";

    Flight* f0 = c->createFlight(registration, time, date, origin, destiny);
    Flight* f1 = c->readFlight(1);

    assert(f1 != NULL);
    assert(f1->getId() == f0->getId() + 1);

    delete f0;
    delete f1;
    cout << "Ok" << endl;
    cout << "=====================================================" << endl;


    cout << "Create ticket" << endl;
    string passengerName = "Joao Pedro";
    int seat = 10;

    Ticket* t0 = c->createTicket(1, passengerName, seat);
    Ticket* t1 = c->readTicket(1);

    assert(t1 != NULL);
    assert(t1->getId() == t0->getId() + 1);

    delete t0;
    delete t1;
    cout << "Ok" << endl;
    cout << "=====================================================" << endl;
    cout << "=====================================================" << endl;


    cout << "Get airplane" << endl;

    Airplane* a = c->readAirplane(registration);
    assert(a->getRegistration() == registration);

    delete a;
    cout << "Ok" << endl;
    cout << "=====================================================" << endl;


    cout << "Get flight" << endl;

    Flight* f = c->readFlight(1);
    assert(f->getId() == 1);

    delete f;
    cout << "Ok" << endl;
    cout << "=====================================================" << endl;


    cout << "Get ticket" << endl;

    Ticket* t = c->readTicket(1);
    assert(t->getId() == 1);

    delete t;
    cout << "Ok" << endl;
    cout << "=====================================================" << endl;
    cout << "=====================================================" << endl;


    cout << "Update airplane" << endl;

    c->updateAirplane(model, manufacturer, registration, "mario", copilot);

    query1.prepare("select * from airplane where registration = ?");
    query1.addBindValue(QString::fromStdString(registration));
    query1.exec();

    query1.first();
    assert(query1.value(4) == "mario");
    cout << "Ok" << endl;

    cout << "=====================================================" << endl;


    cout << "Update flight" << endl;

    c->updateFlight(1, "03:30", "01/01/2021", "BH", "SP");

    query2.prepare("select * from flight where id = ?");
    query2.addBindValue(1);
    query2.exec();
    query2.first();

    assert(query2.value(4) == "BH");
    cout << "Ok" << endl;

    cout << "=====================================================" << endl;


    cout << "Update ticket" << endl;

    c->updateTicket(1, "Joao Pedro", 2);

    query3.prepare("select * from ticket where id = ?");
    query3.addBindValue(1);
    query3.exec();
    query3.first();

    assert(query3.value(3) == 2);
    cout << "Ok" << endl;

    cout << "=====================================================" << endl;
    cout << "=====================================================" << endl;


    cout << "Delete airplane" << endl;

    c->deleteAirplane("AA-AAA");

    query1.prepare("select * from airplane");
    query1.exec();

    count = 0;
    while (query1.next()){
        count++;
    }

    assert(count == 0);
    cout << "Ok" << endl;

    cout << "=====================================================" << endl;


    cout << "Delete flight" << endl;

    c->deleteFlight(1);

    query2.prepare("select * from flight");
    query2.exec();

    count = 0;
    while (query2.next()){
        count++;
    }

    assert(count == 0);
    cout << "Ok" << endl;

    cout << "=====================================================" << endl;


    cout << "Delete ticket" << endl;

    c->deleteTicket(1);

    query3.prepare("select * from ticket");
    query3.exec();

    count = 0;
    while (query3.next()){
        count++;
    }

    assert(count == 0);
    cout << "Ok" << endl;

    cout << "=====================================================" << endl;

    return 0;

}
