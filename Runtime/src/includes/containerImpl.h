#ifndef CONTAINERTIMPL_H
#define CONTAINERTIMPL_H

#include "./handleBody.h"
#include "./container.h"

class ContainerBody : public Body {

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

        ContainerBody();
        virtual ~ContainerBody();

        // Factory
        Airplane* createAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0);
        void deleteAirplane(string registration="");
        Airplane* readAirplane(string registration="");
        void updateAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="");

        Flight* createFlight(string registration = "", string time="", string date="", string origin="", string destiny="");
        void deleteFlight(int id=-1);
        Flight* readFlight(int id=-1);
        void updateFlight(int id=-1, string time="", string date="", string origin="", string destiny="");

        Ticket* createTicket(int idFlight = -1, string passengerName = "", int seat = -1);
        void deleteTicket(int id=-1);
        Ticket* readTicket(int id=-1);
        void updateTicket(int id=-1, string passengerName = "", int seat = -1);

    protected:

        static int countAirplanes;
        static int countFlights;
        static int countTickets;

        map<int, Airplane*> airplanes;
        map<int, Flight*> flights;
        map<int, Ticket*> tickets; 

        ContainerBody(ContainerBody* c) = delete;
        void operator=(ContainerBody* c) = delete;   

};

class ContainerHandle : public Handle<ContainerBody>, public Container {

    public:
        typedef map<int, Airplane*>::iterator airplaneIterator;
        typedef map<int, Flight*>::iterator flightIterator;
        typedef map<int, Ticket*>::iterator ticketIterator;

        airplaneIterator beginAirplanes(){ return pImpl_->beginAirplanes();}
        airplaneIterator endAirplanes(){ return pImpl_->endAirplanes();}
        flightIterator beginFlights(){ return pImpl_->beginFlights();}
        flightIterator endFlights(){ return pImpl_->endFlights();}
        ticketIterator beginTickets(){ return pImpl_->beginTickets();}
        ticketIterator endTickets(){ return pImpl_->endTickets();}

        virtual ~ContainerHandle(){}

        static Container* getContainer(){
            if (ContainerHandle::container == NULL){
                ContainerHandle::container = new ContainerHandle();
            }
            return ContainerHandle::container;
        }

        // Factory
        Airplane* createAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0){
            return pImpl_->createAirplane(model, manufacturer, registration, pilot, copilot, capacity);
        }
        void deleteAirplane(string registration=""){
            pImpl_->deleteAirplane(registration);
        }
        Airplane* readAirplane(string registration=""){
            return pImpl_->readAirplane(registration);
        }
        void updateAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot=""){
            pImpl_->updateAirplane(model, manufacturer, registration, pilot, copilot);
        }


        Flight* createFlight(string registration = "", string time="", string date="", string origin="", string destiny=""){
            return pImpl_->createFlight(registration, time, date, origin, destiny);
        }
        void deleteFlight(int id=-1){
            pImpl_->deleteFlight(id);
        }
        Flight* readFlight(int id=-1){
            return pImpl_->readFlight(id);
        }
        void updateFlight(int id=-1, string time="", string date="", string origin="", string destiny=""){
            pImpl_->updateFlight(id, time, date, origin, destiny);
        }


        Ticket* createTicket(int idFlight = -1, string passengerName = "", int seat = -1){
            return pImpl_->createTicket(idFlight, passengerName, seat);
        }
        void deleteTicket(int id=-1){
            pImpl_->deleteTicket(id);
        }
        Ticket* readTicket(int id=-1){
            return pImpl_->readTicket(id);
        }
        void updateTicket(int id=-1, string passengerName = "", int seat = -1){
            pImpl_->updateTicket(id, passengerName, seat);
        }

    protected:
        static Container* container;
        ContainerHandle(){};

        ContainerHandle(ContainerHandle* c) = delete;
        void operator=(ContainerHandle* c) = delete;

};

#endif