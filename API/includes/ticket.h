#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>
#include "API_global.h"

using namespace std;

//! Class Ticket
/**
* This Class represents a ticket in the General Systems Theory implemented in this code.
*/
class API_EXPORT Ticket {
    public:
        /*!
            This is the default destructor for the Ticket Class.
        */
        virtual ~Ticket(){}

        /*!
            Returns the id attribute in the Ticket Class.
            \return int - the content id attribute.  
        */
        virtual int getId() const = 0;

        /*!
            Sets the id attribute in the Ticket Class.
            \param ticketIdentifier which will be set to the current ticket.
        */
        virtual void setId(int ticketIdentifier) = 0;
        
        /*!
            Returns the idFlight attribute in the Ticket Class.
            \return int - the content idFlight attribute.  
        */
        virtual int getIdFlight() const = 0;

        /*!
            Sets the idFlight attribute in the Ticket Class.
            \param idFlight which will be set to the current ticket.
        */
        virtual void setIdFlight(int idFlight) = 0;

        /*!
            Returns the passengerName attribute in the Ticket Class.
            \return string - the content passengerName attribute.  
        */
        virtual string getPassengerName() const = 0;

        /*!
            Sets the passengerName attribute in the Ticket Class.
            \param passengerName which will be set to the current ticket.
        */
        virtual void setPassengerName(string passengerName) = 0;

        /*!
            Returns the seat attribute in the Ticket Class.
            \return int - the content seat attribute.  
        */
        virtual int getSeat() const = 0;

        /*!
            Sets the seat attribute in the Ticket Class.
            \param seat which will be set to the current ticket.
        */
        virtual void setSeat(int seat) = 0;

        /*!
            Returns the time attribute in the Ticket Class.
            \return string - the content time attribute.  
        */
        virtual string getTime() const = 0;

        /*!
            Sets the time attribute in the Ticket Class.
            \param time which will be set to the current ticket.
        */
        virtual void setTime(string time) = 0;

        /*!
            Returns the date attribute in the Ticket Class.
            \return string - the content date attribute.  
        */
        virtual string getDate() const = 0;

        /*!
            Sets the date attribute in the Ticket Class.
            \param date which will be set to the current ticket.
        */
        virtual void setDate(string date) = 0;

        /*!
            Returns the origin attribute in the Ticket Class.
            \return string - the content origin attribute.  
        */
        virtual string getOrigin() const = 0;

        /*!
            Sets the origin attribute in the Ticket Class.
            \param origin which will be set to the current ticket.
        */
        virtual void setOrigin(string origin) = 0;

        /*!
            Returns the destiny attribute in the Ticket Class.
            \return string - the content destiny attribute.  
        */
        virtual string getDestiny() const = 0;

        /*!
            Sets the destiny attribute in the Ticket Class.
            \param destiny which will be set to the current ticket.
        */
        virtual void setDestiny(string destiny) = 0;
};

#endif
