#include "unit_ticket.h"
#include <cassert>

void unit_ticket_constructor(){

    cout << "TEST  1 - Default Ticket constructor test";
    
    Ticket* ticket1 = new TicketHandle();

    // Making assertion to verify if all properties were initialized with the default data.
    assert(ticket1->getTicketIdentifier() == -1);
    assert(ticket1->getIdFlight() == -1);
    assert(ticket1->getPassengerName() == "");
    assert(ticket1->getSeat() == "");
    assert(ticket1->getTime() == "");
    assert(ticket1->getDate() == "");

    delete ticket1;

    cout << " - [" << "OK!" << "]" << endl;
    cout << "TEST  2 - Ticket constructor test";
    
    Ticket* ticket2 = new TicketHandle(1, 1, "Test Passenger", "2A", "23:30", "12/08/2021");

    // Making assertion to verify if all properties were initialized with the parameter specified.
    assert(ticket2->getTicketIdentifier() == 1);
    assert(ticket2->getIdFlight() == 1);
    assert(ticket2->getPassengerName() == "Test Passenger");
    assert(ticket2->getSeat() == "2A");
    assert(ticket2->getTime() == "23:30");
    assert(ticket2->getDate() == "12/08/2021");
   
    delete ticket2;
    
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_destructor(){}

void unit_ticket_setTicketIdentifier(){
    
    cout << "TEST  3 - Set Ticket Identifier test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify identifier
    assert(ticket->getTicketIdentifier() == -1);
    ticket->setTicketIdentifier(2);
    assert(ticket->getTicketIdentifier() == 2);

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_getTicketIdentifier(){
        
    cout << "TEST  4 - Get Ticket Identifier test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify identifier
    assert(ticket->getTicketIdentifier() == -1);

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_setIdFlight(){
        
    cout << "TEST  5 - Set Ticket flight's ID test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify flight's id
    assert(ticket->getIdFlight() == -1);
    ticket->setIdFlight(2);
    assert(ticket->getIdFlight() == 2);

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_getIdFlight(){
            
    cout << "TEST  6 - Get Ticket flight's ID test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify flight's id
    assert(ticket->getIdFlight() == -1);

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_setPassengerName(){
            
    cout << "TEST  7 - Set Ticket Passenger test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify passegner
    assert(ticket->getPassengerName() == "");
    ticket->setPassengerName("Test Passenger");
    assert(ticket->getPassengerName() == "Test Passenger");

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_getPassengerName(){
                
    cout << "TEST  8 - Get Ticket Passenger test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify passenger
    assert(ticket->getPassengerName() == "");

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_setSeat(){
            
    cout << "TEST  9 - Set Ticket Seat test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify seat
    assert(ticket->getSeat() == "");
    ticket->setSeat("2A");
    assert(ticket->getSeat() == "2A");

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_getSeat(){
                
    cout << "TEST 10 - Get Ticket Seat test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify seat
    assert(ticket->getSeat() == "");

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_setTime(){
            
    cout << "TEST 11 - Set Ticket Time test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify time
    assert(ticket->getTime() == "");
    ticket->setTime("23:30");
    assert(ticket->getTime() == "23:30");

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_getTime(){
                
    cout << "TEST 12 - Get Ticket Time test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify time
    assert(ticket->getTime() == "");

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_setDate(){
            
    cout << "TEST 13 - Set Ticket Date test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify date
    assert(ticket->getDate() == "");
    ticket->setDate("12/08/2021");
    assert(ticket->getDate() == "12/08/2021");

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_ticket_getDate(){
                
    cout << "TEST 14 - Get Ticket Date test";

    Ticket* ticket = new TicketHandle();

    // Make assertion to verify date
    assert(ticket->getDate() == "");

    delete ticket;
    cout << " - [" << "OK!" << "]" << endl;

}

void run_unit_tests_ticket(){

    unit_ticket_constructor();
    unit_ticket_destructor();
    unit_ticket_setTicketIdentifier();
    unit_ticket_getTicketIdentifier();
    unit_ticket_setIdFlight();
    unit_ticket_getIdFlight();
    unit_ticket_setPassengerName();
    unit_ticket_getPassengerName();
    unit_ticket_setSeat();
    unit_ticket_getSeat();
    unit_ticket_setTime();
    unit_ticket_getTime();
    unit_ticket_setDate();
    unit_ticket_getDate();

}