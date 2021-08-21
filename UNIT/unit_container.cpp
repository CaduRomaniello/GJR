#include "unit_container.h"
#include <cassert>


void unit_container_getContainer(){ // Not done yet

    cout << "TEST  1 - Singleton Container constructor test ";
    
    Container* container1 = Container::getContainer();
    Container* container2 = Container::getContainer();

    // Making assertion to verify if singleton is working properly.
    assert(container1 == container2);

    cout << "- [" << "OK!" << "]" << endl;

}

void unit_container_createAirplane(){

    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  2 - Container Create Airplane test ";

    Container* container    = Container::getContainer();
    Airplane* airplane      = container->createAirplane("Boeing", "Boeing", "PP-ETY", "", "", 10);
    Airplane* airplane_inDB = container->readAirplane("PP-ETY");

    // Making assertion to verify if an airplane was created.
    assert(airplane->getId() == 0);
    assert(airplane_inDB->getId() == 1);

    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_deleteAirplane(){

    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  3 - Container Delete Airplane test ";
    
    Container* container     = Container::getContainer();
    Airplane* airplane       = container->createAirplane("Boeing", "Boeing", "AP-ETY");

    // Making assertion to verify if an airplane was created and then deleted.
    assert(airplane->getId() == 0);
    container->deleteAirplane("AP-ETY");

    QSqlQuery query;
    query.exec("select * from airplane where registration='" + QString::fromStdString(airplane->getRegistration())+ "'");

    assert(!query.next() == true);

    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_readFlight(){
    
    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  4 - Container Create Flight test ";
    
    Container* container = Container::getContainer();
    Airplane* airplane   = container->createAirplane("Boeing", "Boeing", "BP-ETY", "", "", 10);
    Flight* flight       = container->createFlight("BP-ETY", "13:30", "18/09/2022", "BH", "SP");
    Flight* flight_inDB  = container->readFlight(0);

    // Making assertion to verify if a airplane was created.
    assert(flight->getId() == 0);
    assert(flight_inDB == NULL);

    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_deleteFlight(){
    
    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  5 - Container Delete Flight test ";
    
    Container* container = Container::getContainer();
    Flight* flight       = container->createFlight("PP-ETY", "13:30", "18/09/2022", "BH", "SP");

    // Making assertion to verify if a flight was created and then deleted.
    assert(flight->getId() == 0);
    container->deleteFlight(2);

    QSqlQuery query;
    query.exec("select * from flight where id=" + QString::number(2));

    assert(!query.next() == true);

    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_createTicket(){
    
    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  6 - Container Create Ticket test ";
    
    Container* container = Container::getContainer();
    Ticket* ticket       = container->createTicket(1, "Tiago", 5);

    // Making assertion to verify if a ticket was created.
    assert(ticket->getId() == 0);

    QSqlQuery query;
    query.exec("select * from ticket where id=" + QString::number(1));
    assert(!query.next() == false);

    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_deleteTicket(){
    
    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  7 - Container Delete Ticket test ";
    
    Container* container = Container::getContainer();
    Ticket* ticket       = container->createTicket(1, "pedro", 1);

    // Making assertion to verify if a ticket was created and then deleted.
    assert(ticket->getId() == 0);
    container->deleteTicket(2);

    QSqlQuery query;
    query.exec("select * from ticket where id=" + QString::number(2));

    assert(!query.next() == true);

    db.close();
    cout << "- [" << "OK!" << "]" << endl;

    delete (container);
}

void run_unit_tests_container(){

    unit_container_getContainer();
    unit_container_createAirplane();
    unit_container_deleteAirplane();
    unit_container_readFlight();
    unit_container_deleteFlight();
    unit_container_createTicket();
    unit_container_deleteTicket();

}
