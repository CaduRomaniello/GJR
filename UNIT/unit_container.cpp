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

    delete airplane;
    delete airplane_inDB;
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
    Airplane* airplane       = container->createAirplane("Boeing", "Boeing", "PU-ETY");

    // Making assertion to verify if an airplane was created and then deleted.
    assert(airplane->getId() == 0);
    container->deleteAirplane("PU-ETY");

    QSqlQuery query;
    query.exec("select * from airplane where registration='" + QString::fromStdString(airplane->getRegistration())+ "'");

    assert(!query.next() == true);

    delete airplane;
    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}

void unit_container_readAirplane(){

    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  4 - Container Read Airplane test ";

    Container* container    = Container::getContainer();
    Airplane* airplane      = container->createAirplane("Boeing", "Boeing", "PP-TTA", "", "", 10);
    Airplane* airplane_inDB = container->readAirplane(airplane->getRegistration());

    // Making assertion to verify if a airplane was created.
    assert(airplane->getId() == 0);
    assert(airplane_inDB != NULL);
    assert(airplane_inDB->getRegistration() == airplane->getRegistration());

    delete airplane;
    delete airplane_inDB;
    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}

void unit_container_createFlight(){

    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  5 - Container Create Flight test ";

    Container* container    = Container::getContainer();
    Airplane* airplane      = container->createAirplane("Boeing", "Boeing", "PU-TTA", "", "", 10);
    Flight* flight          = container->createFlight("PU-TTA", "13:30", "18/09/2022", "BH", "SP");
    Flight* flight_inDB     = container->readFlight(1);

    // Making assertion to verify if an airplane was created.
    assert(flight->getId() == 0);
    assert(flight_inDB->getId() == 1);

    delete airplane;
    delete flight;
    delete flight_inDB;
    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}

void unit_container_readFlight(){
    
    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  6 - Container Read Flight test ";
    
    Container* container = Container::getContainer();
    Flight* flight       = container->createFlight("PU-TTA", "13:30", "19/09/2022", "BH", "SP");
    Flight* flight_inDB  = container->readFlight(2);

    // Making assertion to verify if a airplane was created.
    assert(flight->getId() == 0);
    assert(flight_inDB != NULL);
    assert(flight_inDB->getId() == flight->getId() + 2);

    delete flight;
    delete flight_inDB;
    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_deleteFlight(){
    
    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  7 - Container Delete Flight test ";
    
    Container* container = Container::getContainer();
    Flight* flight       = container->createFlight("PP-ETY", "13:30", "18/09/2022", "BH", "SP");

    // Making assertion to verify if a flight was created and then deleted.
    assert(flight->getId() == 0);
    container->deleteFlight(3);

    QSqlQuery query;
    query.exec("select * from flight where id=" + QString::number(3));

    assert(!query.next() == true);

    delete flight;
    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_createTicket(){
    
    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  8 - Container Create Ticket test ";
    
    Container* container = Container::getContainer();
    Ticket* ticket       = container->createTicket(1, "Tiago", 5);

    // Making assertion to verify if a ticket was created.
    assert(ticket->getId() == 0);

    QSqlQuery query;
    query.exec("select * from ticket where id=" + QString::number(1));
    assert(query.next() == true);

    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}

void unit_container_readTicket(){

    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST  9 - Container Read Ticket test ";

    Container* container = Container::getContainer();
    Ticket* ticket_inDB  = container->readTicket(1);

    // Making assertion to verify if a airplane was created.
    assert(ticket_inDB != NULL);
    assert(ticket_inDB->getId() == 1);

    delete ticket_inDB;
    db.close();
    cout << "- [" << "OK!" << "]" << endl;

}

void unit_container_deleteTicket(){
    
    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);
    db.open();

    cout << "TEST 10 - Container Delete Ticket test ";
    
    Container* container = Container::getContainer();
    container->deleteTicket(1);

    QSqlQuery query;
    query.exec("select * from ticket where id=" + QString::number(1));

    // Making assertion to verify if a ticket was deleted.
    assert(!query.next() == true);

    delete container;
    db.close();
    cout << "- [" << "OK!" << "]" << endl;
}

void run_unit_tests_container(){

    unit_container_getContainer();
    unit_container_createAirplane();
    unit_container_readAirplane();
    unit_container_deleteAirplane();
    unit_container_createFlight();
    unit_container_readFlight();
    unit_container_deleteFlight();
    unit_container_createTicket();
    unit_container_readTicket();
    unit_container_deleteTicket();

}
