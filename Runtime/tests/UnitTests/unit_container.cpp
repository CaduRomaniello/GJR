#include "unit_container.h"
#include <cassert>

// This unit tests takes container implmented in a Handle/body and factor method architecture.
// TODO:
//     - Update architecture and complete the unit test.

void unit_container_getContainer(){ // Not done yet

    cout << "TEST  1 - Singleton Container constructor test";
    
    Container* container1 = Container::createContainer();
    Container* container2 = Container::createContainer();

    // Making assertion to verify if singleton is working properly.
    assert(container1 == container2);

    delete container1;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_container_destructor(){}

void unit_container_createAirplane(){
    
    cout << "TEST  2 - Container Create Airplane test";
    
    Container* container     = Container::createContainer();
    Airplane* airplane       = container->createAirplane("Boeing", "Boeing", "PP-ETY");
    Airplane* airplane_inMap = container->getAirplane("PP-ETY");

    // Making assertion to verify if an airplane was created.
    assert(airplane->getAirplaneIdentifier() == 0);
    assert(airplane_inMap->getAirplaneIdentifier() == 0);
    assert(airplane == airplane_inMap);

    delete container;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_container_deleteAirplane(){
    
    cout << "TEST  3 - Container Delete Airplane test";
    
    Container* container     = Container::createContainer();
    Airplane* airplane       = container->createAirplane("Boeing", "Boeing", "PP-ETY");

    // Making assertion to verify if an airplane was created and then deleted.
    assert(airplane->getAirplaneIdentifier() == 1);
    container->deleteAirplane("PP-ETY");
    assert(container->beginAirplanes() == container->endAirplanes());

    delete container;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_container_createFlight(){
    
    cout << "TEST  4 - Container Create Flight test";
    
    Container* container = Container::createContainer();
    Airplane* airplane   = container->createAirplane("Boeing", "Boeing", "PP-ETY");
    Flight* flight       = container->createFlight("PP-ETY");
    Flight* flight_inMap = container->getFlight(0);

    // Making assertion to verify if a airplane was created.
    assert(flight->getFlightIdentifier() == 0);
    assert(flight_inMap->getFlightIdentifier() == 0);
    assert(flight == flight_inMap);

    delete container;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_container_deleteFlight(){
    
    cout << "TEST  5 - Container Delete Flight test";
    
    Container* container = Container::createContainer();
    Airplane* airplane   = container->createAirplane("Boeing", "Boeing", "PP-ETY");
    Flight* flight       = container->createFlight("PP-ETY");

    // Making assertion to verify if a flight was created and then deleted.
    assert(flight->getFlightIdentifier() == 1);
    container->deleteFlight(1);
    assert(container->beginFlights() == container->endFlights());

    delete container;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_container_createTicket(){
    
    cout << "TEST  6 - Container Create Ticket test";
    
    Container* container = Container::createContainer();
    Airplane* airplane   = container->createAirplane("Boeing", "Boeing", "PP-ETY");
    Flight* flight       = container->createFlight("PP-ETY");
    Ticket* ticket       = container->createTicket(2);
    Ticket* ticket_inMap = container->getTicket(0);

    // Making assertion to verify if a ticket was created.
    assert(ticket->getTicketIdentifier() == 0);
    assert(ticket_inMap->getTicketIdentifier() == 0);
    assert(ticket == ticket_inMap);

    delete container;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_container_deleteTicket(){
    
    cout << "TEST  7 - Container Delete Ticket test";
    
    Container* container = Container::createContainer();
    Airplane* airplane   = container->createAirplane("Boeing", "Boeing", "PP-ETY");
    Flight* flight       = container->createFlight("PP-ETY");
    Ticket* ticket       = container->createTicket(3);

    // Making assertion to verify if a ticket was created and then deleted.
    assert(ticket->getTicketIdentifier() == 1);
    container->deleteTicket(1);
    assert(container->beginTickets() == container->endTickets());

    delete container;
    cout << " - [" << "OK!" << "]" << endl;

}

void run_unit_tests_container(){

    unit_container_getContainer();
    unit_container_destructor();
    unit_container_createAirplane();
    unit_container_deleteAirplane();
    unit_container_createFlight();
    unit_container_deleteFlight();
    unit_container_createTicket();
    unit_container_deleteTicket();

}