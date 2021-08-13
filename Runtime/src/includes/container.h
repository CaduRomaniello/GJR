#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include <string>
#include <map>

#include "airplane.h"
#include "flight.h"
#include "ticket.h"
// #include "airplane.h" -> CORRETO
// #include "flight.h"   -> CORRETO
// #include "ticket.h"   -> CORRETO

class Container{

    public:
        typedef map<int, Airplane*>::iterator airplaneIterator;
        typedef map<int, Flight*>::iterator flightIterator;
        typedef map<int, Ticket*>::iterator ticketIterator;

        virtual airplaneIterator beginAirplanes() = 0;
        virtual airplaneIterator endAirplanes() = 0;
        virtual flightIterator beginFlights() = 0;
        virtual flightIterator endFlights() = 0;
        virtual ticketIterator beginTickets() = 0;
        virtual ticketIterator endTickets() = 0;

        static Container* getContainer();

        virtual ~Container(){}

        // Factory
        virtual Airplane* createAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0) = 0;
        virtual void deleteAirplane(string registration="") = 0;
        virtual Airplane* readAirplane(string registration="") = 0;
        virtual void updateAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="") = 0;

        virtual Flight* createFlight(string registration = "", string time="", string date="", string origin="", string destiny="") = 0;
        virtual void deleteFlight(int id=-1) = 0;
        virtual Flight* readFlight(int id=-1) = 0;
        virtual void updateFlight(int id=-1, string time="", string date="", string origin="", string destiny="") = 0;

        virtual Ticket* createTicket(int idFlight = -1, string passengerName = "", int seat = -1) = 0;
        virtual void deleteTicket(int id=-1) = 0;
        virtual Ticket* readTicket(int id=-1) = 0;
        virtual void updateTicket(int id=-1, string passengerName = "", int seat = -1) = 0;
};

#endif