#ifndef CONTAINERTIMPL_H
#define CONTAINERTIMPL_H

#include "./handleBody.h"
#include "./container.h"

class API_EXPORT ContainerBody : public Body {

    private:
        bool admPermission;

    public:

        bool getAdmPermission();
        void setAdmPermission(bool v);

        /*!
            This is the default constructor for the ContainerBody Class.
        */
        ContainerBody();
        /*!
            This is the default destructor for the ContainerBody Class.
        */
        virtual ~ContainerBody();

        // Factory
        /*!
            Create an airplane.
            \param model airplane's model.
            \param manufacturer airplane's manufacturer.
            \param registration airplane's registration. This one should be unique.
            \param pilot airplane's pilot name.
            \param copilot airplane's copilot name.
            \param capacity airplane's capacity.
            \return Airplane*
        */
        Airplane* createAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0);
        /*!
            Delete an airplane.
            \param registration airplane's registration.
        */
        void deleteAirplane(string registration="");
        /*!
            Get an airplane.
            \param registration airplane's registration.
            \return Airplane*
        */
        Airplane* readAirplane(string registration="");
        /*!
            update an airplane.
            \param model airplane's model.
            \param manufacturer airplane's manufacturer.
            \param registration airplane's registration. This one should be unique.
            \param pilot airplane's pilot name.
            \param copilot airplane's copilot name.
            \param capacity airplane's capacity.
        */
        void updateAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="");

        /*!
            Create a flight.
            \param registration the registration of the airplane that will be linked with the flight.
            \param time flight's time.
            \param date flight's date.
            \param origin flight's origin.
            \param destiny aflight's destiny.
            \return Flight*
        */
        Flight* createFlight(string registration = "", string time="", string date="", string origin="", string destiny="");
        /*!
            Delete a flight.
            \param id flight's id.
        */
        void deleteFlight(int id=-1);
        /*!
            Get a flight.
            \param id flight's id.
            \return Flight*
        */
        Flight* readFlight(int id=-1);
        /*!
            update a flight.
            \param id flight's id.
            \param time flight's time.
            \param date flight's date.
            \param origin flight's origin.
            \param destiny flight's destiny..
        */
        void updateFlight(int id=-1, string time="", string date="", string origin="", string destiny="");

        /*!
            Create a ticket.
            \param idFlight the id of the flight that will be linked with the ticket.
            \param passengerName ticket's passenger name.
            \param seat ticket's seat.
            \return Ticket*
        */
        Ticket* createTicket(int idFlight = -1, string passengerName = "", int seat = -1);
        /*!
            Delete a ticket.
            \param id ticket's id.
        */
        void deleteTicket(int id=-1);
        /*!
            Get a ticket.
            \param id ticket's id.
            \return Ticket*
        */
        Ticket* readTicket(int id=-1);
        /*!
            Update a ticket.
            \param id the id of the ticket.
            \param passengerName ticket's passenger name.
            \param seat ticket's seat.
            \return Ticket*
        */
        void updateTicket(int id=-1, string passengerName = "", int seat = -1);

};

class API_EXPORT ContainerHandle : public Handle<ContainerBody>, public Container {

    public:

        bool getAdmPermission(){
            return pImpl_->getAdmPermission();
        }
        void setAdmPermission(bool v){
            pImpl_->setAdmPermission(v);
        }

        /*!
            This is the default destructor for the ContainerHandle Class.
        */
        virtual ~ContainerHandle(){}

        static Container* getContainer(){
            if (ContainerHandle::container == NULL){
                ContainerHandle::container = new ContainerHandle();
            }
            return ContainerHandle::container;
        }

        // Factory
        /*!
            Create an airplane.
            \param model airplane's model.
            \param manufacturer airplane's manufacturer.
            \param registration airplane's registration. This one should be unique.
            \param pilot airplane's pilot name.
            \param copilot airplane's copilot name.
            \param capacity airplane's capacity.
            \return Airplane*
        */
        Airplane* createAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0){
            return pImpl_->createAirplane(model, manufacturer, registration, pilot, copilot, capacity);
        }
        /*!
            Delete an airplane.
            \param registration airplane's registration.
        */
        void deleteAirplane(string registration=""){
            pImpl_->deleteAirplane(registration);
        }
        /*!
            Get an airplane.
            \param registration airplane's registration.
            \return Airplane*
        */
        Airplane* readAirplane(string registration=""){
            return pImpl_->readAirplane(registration);
        }
        /*!
            update an airplane.
            \param model airplane's model.
            \param manufacturer airplane's manufacturer.
            \param registration airplane's registration. This one should be unique.
            \param pilot airplane's pilot name.
            \param copilot airplane's copilot name.
            \param capacity airplane's capacity.
        */
        void updateAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot=""){
            pImpl_->updateAirplane(model, manufacturer, registration, pilot, copilot);
        }


        /*!
            Create a flight.
            \param registration the registration of the airplane that will be linked with the flight.
            \param time flight's time.
            \param date flight's date.
            \param origin flight's origin.
            \param destiny aflight's destiny.
            \return Flight*
        */
        Flight* createFlight(string registration = "", string time="", string date="", string origin="", string destiny=""){
            return pImpl_->createFlight(registration, time, date, origin, destiny);
        }
        /*!
            Delete a flight.
            \param id flight's id.
        */
        void deleteFlight(int id=-1){
            pImpl_->deleteFlight(id);
        }
        /*!
            Get a flight.
            \param id flight's id.
            \return Flight*
        */
        Flight* readFlight(int id=-1){
            return pImpl_->readFlight(id);
        }
        /*!
            update a flight.
            \param id flight's id.
            \param time flight's time.
            \param date flight's date.
            \param origin flight's origin.
            \param destiny flight's destiny..
        */
        void updateFlight(int id=-1, string time="", string date="", string origin="", string destiny=""){
            pImpl_->updateFlight(id, time, date, origin, destiny);
        }


        /*!
            Create a ticket.
            \param idFlight the id of the flight that will be linked with the ticket.
            \param passengerName ticket's passenger name.
            \param seat ticket's seat.
            \return Ticket*
        */
        Ticket* createTicket(int idFlight = -1, string passengerName = "", int seat = -1){
            return pImpl_->createTicket(idFlight, passengerName, seat);
        }
        /*!
            Delete a ticket.
            \param id ticket's id.
        */
        void deleteTicket(int id=-1){
            pImpl_->deleteTicket(id);
        }
        /*!
            Get a ticket.
            \param id ticket's id.
            \return Ticket*
        */
        Ticket* readTicket(int id=-1){
            return pImpl_->readTicket(id);
        }
        /*!
            Update a ticket.
            \param id the id of the ticket.
            \param passengerName ticket's passenger name.
            \param seat ticket's seat.
            \return Ticket*
        */
        void updateTicket(int id=-1, string passengerName = "", int seat = -1){
            pImpl_->updateTicket(id, passengerName, seat);
        }


    protected:
        static Container* container; /*!< This attribute is part of the singleton pattern for the class ContainerHandle. */

        /*!
            This is the default destructor for the ContainerHandle Class.
        */
        ContainerHandle(){};

        ContainerHandle(ContainerHandle* c) = delete; /*!< This is part of the singleton pattern for the class ContainerHandle. */
        void operator=(ContainerHandle* c) = delete; /*!< This is part of the singleton pattern for the class ContainerHandle. */

};

#endif
