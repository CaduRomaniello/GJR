#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include <string>
#include <map>
#include "airplaneImpl.h"
#include "flightImpl.h"
#include "ticketImpl.h"

class Container{

    public:
        typedef map<int, Airplane*>::iterator airplaneIterator;
        typedef map<int, Flight*>::iterator flightIterator;
        typedef map<int, Ticket*>::iterator ticketIterator;

        airplaneIterator beginAirplanes();
        airplaneIterator endAirplanes();
        flightIterator beginFlights();
        flightIterator endFlights();
        ticketIterator beginTickets();
        ticketIterator endTickets();

        Container* getContainer();

        ~Container();

        // Factory
        Airplane* createAirplane(string model="", string manufacturer="", string registration="", string pilot="", string coPilot="", int capacity=0);
        void removeAirplane(string registration="");

        Flight* createFlight(string registration = "", string time="", string date="", string origin="", string destiny="");
        void deleteFlight(int flightIdentidfier=-1);

        Ticket* createTicket(int flightIdentifier = -1, string passengerName = "", string seat = "", string time = "", string date = "");
        void deleteFlight(int ticketIdentifier=-1);

    private:
        static Container* container;

        Container();

        static int countAirplanes;
        static int countFlights;
        static int countTickets;

        map<int, Airplane*> airplanes;
        map<int, Flight*> flights;
        map<int, Ticket*> tickets;

};

#endif