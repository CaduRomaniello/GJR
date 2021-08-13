#include "unit_container.h"
#include <cassert>

// This unit tests takes container implmented in a Handle/body and factor method architecture.
// TODO:
//     - Update architecture and complete the unit test.

void unit_container_getContainer(){ // Not done yet

    cout << "TEST  1 - Singleton Container constructor test ";
    
    Container* container1 = Container::getContainer();
    Container* container2 = Container::getContainer();

    // Making assertion to verify if singleton is working properly.
    assert(container1 == container2);

    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_destructor(){}

void unit_container_createAirplane(){
    
    cout << "TEST  2 - Container Create Airplane test ";
    
    Container* container     = Container::getContainer();
    Airplane* airplane       = container->createAirplane("Boeing", "Boeing", "PP-ETY", "", "", 10);
    Airplane* airplane_inMap = container->readAirplane("PP-ETY");

    // Making assertion to verify if an airplane was created.
    assert(airplane->getId() == 0);
    assert(airplane_inMap->getId() == 0);
    assert(airplane == airplane_inMap);

    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_deleteAirplane(){
    
    cout << "TEST  3 - Container Delete Airplane test ";
    
    Container* container     = Container::getContainer();
    Airplane* airplane       = container->createAirplane("Boeing", "Boeing", "AP-ETY");

    // Making assertion to verify if an airplane was created and then deleted.
    assert(airplane->getId() == 1);
    container->deleteAirplane("AP-ETY");
    assert(container->readAirplane("AP-ETY") == NULL);

    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_readFlight(){
    
    cout << "TEST  4 - Container Create Flight test ";
    
    Container* container = Container::getContainer();
    Flight* flight       = container->createFlight("PP-ETY");
    Flight* flight_inMap = container->readFlight(0);

    // Making assertion to verify if a airplane was created.
    assert(flight->getId() == 0);
    assert(flight_inMap->getId() == 0);
    assert(flight == flight_inMap);

    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_deleteFlight(){
    
    cout << "TEST  5 - Container Delete Flight test ";
    
    Container* container = Container::getContainer();
    Flight* flight       = container->createFlight("PP-ETY", "01:00");

    // Making assertion to verify if a flight was created and then deleted.
    assert(flight->getId() == 1);
    container->deleteFlight(1);
    assert(container->readFlight(1) == NULL);

    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_createTicket(){
    
    cout << "TEST  6 - Container Create Ticket test ";
    
    Container* container = Container::getContainer();
    Ticket* ticket       = container->createTicket(0);
    Ticket* ticket_inMap = container->readTicket(0);

    // Making assertion to verify if a ticket was created.
    assert(ticket->getId() == 0);
    assert(ticket_inMap->getId() == 0);
    assert(ticket == ticket_inMap);

    cout << "- [" << "OK!" << "]" << endl;

}
void unit_container_deleteTicket(){
    
    cout << "TEST  7 - Container Delete Ticket test ";
    
    Container* container = Container::getContainer();
    Airplane* airplane   = container->createAirplane("Boeing", "Boeing", "BP-ETY", "", "", 10);
    Flight* flight       = container->createFlight("BP-ETY");
    Ticket* ticket       = container->createTicket(2, "pedro");

    // Making assertion to verify if a ticket was created and then deleted.
    assert(ticket->getId() == 1);
    container->deleteTicket(1);
    assert(container->readTicket(1) == NULL);

    cout << "- [" << "OK!" << "]" << endl;

    delete (container);
}

void run_unit_tests_container(){

    unit_container_getContainer();
    unit_container_destructor();
    unit_container_createAirplane();
    unit_container_deleteAirplane();
    unit_container_readFlight();
    unit_container_deleteFlight();
    unit_container_createTicket();
    unit_container_deleteTicket();

}