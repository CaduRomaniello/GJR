#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include <string>
#include <map>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

#include "airplane.h"
#include "flight.h"
#include "ticket.h"
#include "API_global.h"

//! Class container
/**
* This Class will be the factory of the project.
*/
class API_EXPORT Container{

    public:

        /*!
            This function is part of the singleton pattern.
            \return Container* - the pointer to the singleton Container.
        */
        static Container* getContainer();

        /*!
            This is the default destructor for the Container Class.
        */
        virtual ~Container(){}

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
        virtual Airplane* createAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0) = 0;
        /*!
            Delete an airplane.
            \param registration airplane's registration.
        */
        virtual void deleteAirplane(string registration="") = 0;
        /*!
            Get an airplane.
            \param registration airplane's registration.
            \return Airplane*
        */
        virtual Airplane* readAirplane(string registration="") = 0;
        /*!
            update an airplane.
            \param model airplane's model.
            \param manufacturer airplane's manufacturer.
            \param registration airplane's registration. This one should be unique.
            \param pilot airplane's pilot name.
            \param copilot airplane's copilot name.
            \param capacity airplane's capacity.
        */
        virtual void updateAirplane(string model="", string manufacturer="", string registration="", string pilot="", string copilot="") = 0;

        /*!
            Create a flight.
            \param registration the registration of the airplane that will be linked with the flight.
            \param time flight's time.
            \param date flight's date.
            \param origin flight's origin.
            \param destiny aflight's destiny.
            \return Flight*
        */
        virtual Flight* createFlight(string registration = "", string time="", string date="", string origin="", string destiny="") = 0;
        /*!
            Delete a flight.
            \param id flight's id.
        */
        virtual void deleteFlight(int id=-1) = 0;
        /*!
            Get a flight.
            \param id flight's id.
            \return Flight*
        */
        virtual Flight* readFlight(int id=-1) = 0;
        /*!
            update a flight.
            \param id flight's id.
            \param time flight's time.
            \param date flight's date.
            \param origin flight's origin.
            \param destiny flight's destiny..
        */
        virtual void updateFlight(int id=-1, string time="", string date="", string origin="", string destiny="") = 0;

        /*!
            Create a ticket.
            \param idFlight the id of the flight that will be linked with the ticket.
            \param passengerName ticket's passenger name.
            \param seat ticket's seat.
            \return Ticket*
        */
        virtual Ticket* createTicket(int idFlight = -1, string passengerName = "", int seat = -1) = 0;
        /*!
            Delete a ticket.
            \param id ticket's id.
        */
        virtual void deleteTicket(int id=-1) = 0;
        /*!
            Get a ticket.
            \param id ticket's id.
            \return Ticket*
        */
        virtual Ticket* readTicket(int id=-1) = 0;
        /*!
            Update a ticket.
            \param id the id of the ticket.
            \param passengerName ticket's passenger name.
            \param seat ticket's seat.
            \return Ticket*
        */
        virtual void updateTicket(int id=-1, string passengerName = "", int seat = -1) = 0;
};

#endif
