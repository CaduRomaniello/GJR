#include "functional.h"

void completeEnviromentUsage(){

    // Create the container
    Container* container = Container::getContainer();

    // Generate a group of airplanes in order to create flights and tickets
    Airplane* b737 = container->createAirplane("Boeing 737", "Boeing", "PP-XMA", "Vinicius Verona", "Carlos Eduardo", 149);
    Airplane* a380 = container->createAirplane("Airbus a380", "EADS Airbus", "PR-MMM", "Carlos Eduardo", "Daniel Monteiro", 853);
    Airplane* b777 = container->createAirplane("Boeing 777", "Boeing", "PP-TXA", "Daniel Monteiro", "Vinicius Verona", 305);

    // Generate a set of flights
    Flight* bh_sp  = container->createFlight("PP-XMA", "23:00", "15/08/2021", "Belo Horizonte", "Sao Paulo");
    Flight* sp_bh  = container->createFlight("PP-XMA", "22:00", "16/08/2021", "Sao Paulo", "Belo Horizonte");
    Flight* bh_sp2 = container->createFlight("PR-MMM", "12:00", "13/08/2021", "Belo Horizonte", "Sao Paulo");
    Flight* sp_bh2 = container->createFlight("PR-MMM", "23:30", "15/08/2021", "Sao Paulo", "Belo Horizonte");
    Flight* bh_sp3 = container->createFlight("PP-TXA", "21:00", "15/08/2021", "Belo Horizonte", "Sao Paulo");
    Flight* sp_bh3 = container->createFlight("PP-TXA", "22:00", "15/08/2021", "Sao Paulo", "Belo Horizonte");

    // Generate a set of tickets
    Ticket* ticket_tiago_going  = container->createTicket(0, "Tiago Carneiro", 133); 
    Ticket* ticket_tiago_back   = container->createTicket(1, "Tiago Carneiro", 66); 
    Ticket* ticket_mace_going   = container->createTicket(1, "Gabriel Mace", 11); 
    Ticket* ticket_mace_back    = container->createTicket(3, "Gabriel Mace", 134); 
    Ticket* ticket_carlos_going = container->createTicket(3, "Carlos Gabriel", 133); 
    Ticket* ticket_carlos_back  = container->createTicket(2, "Carlos Gabriel", 13); 
    Ticket* ticket_marcus_going = container->createTicket(2, "Marcus Fernandes", 50); 
    Ticket* ticket_marcus_back  = container->createTicket(1, "Marcus Fernandes", 149); 
    Ticket* ticket_rafael_going = container->createTicket(1, "Rafel Coelho", 30); 
    Ticket* ticket_rafael_back  = container->createTicket(0, "Rafel Coelho", 149); 
    Ticket* ticket_joao_going   = container->createTicket(0, "Joao Paulo", 10); 
    Ticket* ticket_joao_back    = container->createTicket(0, "Joao Paulo", 100); 
    Ticket* ticket_scota_going  = container->createTicket(2, "Gabriel Scota", 12); 
    Ticket* ticket_scota_back   = container->createTicket(1, "Gabriel Scota", 3); 


    // Make assertion in order to check airplanes' attributes
    assert(b737->getId() == 0);
    assert(a380->getId() == 1);
    assert(b777->getId() == 2);
    assert(b737->getModel() == "Boeing 737");
    assert(a380->getModel() == "Airbus a380");
    assert(b777->getModel() == "Boeing 777");
    assert(b737->getManufacturer() == "Boeing");
    assert(a380->getManufacturer() == "EADS Airbus");
    assert(b777->getManufacturer() == "Boeing");
    assert(b737->getRegistration() == "PP-XMA");
    assert(a380->getRegistration() == "PR-MMM");
    assert(b777->getRegistration() == "PP-TXA");
    assert(b737->getPilot() == "Vinicius Verona");
    assert(a380->getPilot() == "Carlos Eduardo");
    assert(b777->getPilot() == "Daniel Monteiro");
    assert(b737->getCopilot() == "Carlos Eduardo");
    assert(a380->getCopilot() == "Daniel Monteiro");
    assert(b777->getCopilot() == "Vinicius Verona");
    assert(b737->getCapacity() == 149);
    assert(a380->getCapacity() == 853);
    assert(b777->getCapacity() == 305);

    // Make assertion to verify flights
    assert(bh_sp->getId()  == 0);
    assert(sp_bh->getId()  == 1);
    assert(bh_sp2->getId() == 2);
    assert(sp_bh2->getId() == 3);
    assert(bh_sp3->getId() == 4);
    assert(sp_bh3->getId() == 5);

    
    assert(bh_sp->getIdAirplane()  == 0);
    assert(sp_bh->getIdAirplane()  == 0);
    assert(bh_sp2->getIdAirplane() == 1);
    assert(sp_bh2->getIdAirplane() == 1);
    assert(bh_sp3->getIdAirplane() == 2);
    assert(sp_bh3->getIdAirplane() == 2);

    assert(bh_sp->getTime()  == "23:00");
    assert(sp_bh->getTime()  == "22:00");
    assert(bh_sp2->getTime() == "12:00");
    assert(sp_bh2->getTime() == "23:30");
    assert(bh_sp3->getTime() == "21:00");
    assert(sp_bh3->getTime() == "22:00");

    assert(bh_sp->getDate()  == "15/08/2021");
    assert(sp_bh->getDate()  == "16/08/2021");
    assert(bh_sp2->getDate() == "13/08/2021");
    assert(sp_bh2->getDate() == "15/08/2021");
    assert(bh_sp3->getDate() == "15/08/2021");
    assert(sp_bh3->getDate() == "15/08/2021");

    
    assert(bh_sp->getOrigin()  == "Belo Horizonte");
    assert(sp_bh->getOrigin()  == "Sao Paulo");
    assert(bh_sp2->getOrigin() == "Belo Horizonte");
    assert(sp_bh2->getOrigin() == "Sao Paulo");
    assert(bh_sp3->getOrigin() == "Belo Horizonte");
    assert(sp_bh3->getOrigin() == "Sao Paulo");
    
    assert(bh_sp->getDestiny()  == "Sao Paulo");
    assert(sp_bh->getDestiny()  == "Belo Horizonte");
    assert(bh_sp2->getDestiny() == "Sao Paulo");
    assert(sp_bh2->getDestiny() == "Belo Horizonte");
    assert(bh_sp3->getDestiny() == "Sao Paulo");
    assert(sp_bh3->getDestiny() == "Belo Horizonte");

    // Assertion to verify tickets

    assert(ticket_tiago_going->getId()  == 0);
    assert(ticket_tiago_back->getId()   == 1);
    assert(ticket_mace_going->getId()   == 2);
    assert(ticket_mace_back->getId()    == 3);
    assert(ticket_carlos_going->getId() == 4);
    assert(ticket_carlos_back->getId()  == 5);
    assert(ticket_marcus_going->getId() == 6);
    assert(ticket_marcus_back->getId()  == 7);
    assert(ticket_rafael_going->getId() == 8);
    assert(ticket_rafael_back->getId()  == 9);
    assert(ticket_joao_going->getId()   == 10);
    assert(ticket_joao_back->getId()    == 11);
    assert(ticket_scota_going->getId()  == 12);
    assert(ticket_scota_back->getId()   == 13);

    assert(ticket_tiago_going->getIdFlight()  == 0);
    assert(ticket_tiago_back->getIdFlight()   == 1);
    assert(ticket_mace_going->getIdFlight()   == 1);
    assert(ticket_mace_back->getIdFlight()    == 3);
    assert(ticket_carlos_going->getIdFlight() == 3);
    assert(ticket_carlos_back->getIdFlight()  == 2);
    assert(ticket_marcus_going->getIdFlight() == 2);
    assert(ticket_marcus_back->getIdFlight()  == 1);
    assert(ticket_rafael_going->getIdFlight() == 1);
    assert(ticket_rafael_back->getIdFlight()  == 0);
    assert(ticket_joao_going->getIdFlight()   == 0);
    assert(ticket_joao_back->getIdFlight()    == 0);
    assert(ticket_scota_going->getIdFlight()  == 2);
    assert(ticket_scota_back->getIdFlight()   == 1);

    assert(ticket_tiago_going->getPassengerName()  == "Tiago Carneiro");
    assert(ticket_tiago_back->getPassengerName()   == "Tiago Carneiro");
    assert(ticket_mace_going->getPassengerName()   == "Gabriel Mace");
    assert(ticket_mace_back->getPassengerName()    == "Gabriel Mace");
    assert(ticket_carlos_going->getPassengerName() == "Carlos Gabriel");
    assert(ticket_carlos_back->getPassengerName()  == "Carlos Gabriel");
    assert(ticket_marcus_going->getPassengerName() == "Marcus Fernandes");
    assert(ticket_marcus_back->getPassengerName()  == "Marcus Fernandes");
    assert(ticket_rafael_going->getPassengerName() == "Rafel Coelho");
    assert(ticket_rafael_back->getPassengerName()  == "Rafel Coelho");
    assert(ticket_joao_going->getPassengerName()   == "Joao Paulo");
    assert(ticket_joao_back->getPassengerName()    == "Joao Paulo");
    assert(ticket_scota_going->getPassengerName()  == "Gabriel Scota");
    assert(ticket_scota_back->getPassengerName()   == "Gabriel Scota");

    assert(ticket_tiago_going->getSeat()  == 133);
    assert(ticket_tiago_back->getSeat()   == 66);
    assert(ticket_mace_going->getSeat()   == 11);
    assert(ticket_mace_back->getSeat()    == 134);
    assert(ticket_carlos_going->getSeat() == 133);
    assert(ticket_carlos_back->getSeat()  == 13);
    assert(ticket_marcus_going->getSeat() == 50);
    assert(ticket_marcus_back->getSeat()  == 149);
    assert(ticket_rafael_going->getSeat() == 30);
    assert(ticket_rafael_back->getSeat()  == 149);
    assert(ticket_joao_going->getSeat()   == 10);
    assert(ticket_joao_back->getSeat()    == 100);
    assert(ticket_scota_going->getSeat()  == 12);
    assert(ticket_scota_back->getSeat()   == 3);

    int insertion_airplane_counter = 0;
    int insertion_flight_counter   = 0;
    int insertion_ticket_counter   = 0;

    for (auto airplane = container->beginAirplanes(); airplane != container->endAirplanes(); ++airplane){
        insertion_airplane_counter += 1;
    }

    for (auto flight = container->beginFlights(); flight != container->endFlights(); ++flight){
        insertion_flight_counter += 1;
    }

    for (auto ticket = container->beginTickets(); ticket != container->endTickets(); ++ticket){
        insertion_ticket_counter += 1;
    }

    // Remove an airplane
    container->deleteAirplane("PP-XMA");
    // Remove a flight
    container->deleteFlight(0);
    // Remove a ticket
    container->deleteTicket(1);

    int airplane_counter = 0;
    int flight_counter   = 0;
    int ticket_counter   = 0;

    for (auto airplane = container->beginAirplanes(); airplane != container->endAirplanes(); ++airplane){
        airplane_counter += 1;
    }

    for (auto flight = container->beginFlights(); flight != container->endFlights(); ++flight){
        flight_counter += 1;
    }

    for (auto ticket = container->beginTickets(); ticket != container->endTickets(); ++ticket){
        ticket_counter += 1;
    }

    // Make assertion to verify if items were removed
    assert(airplane_counter == insertion_airplane_counter - 1);
    assert(flight_counter == insertion_flight_counter - 1);
    assert(ticket_counter == insertion_ticket_counter - 1);

    delete container;
}