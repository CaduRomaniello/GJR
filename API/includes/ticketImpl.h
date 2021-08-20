#ifndef TICKETIMPL_H
#define TICKETIMPL_H

#include "ticket.h"
#include "handleBody.h"

//! Class TicketBody
/**
* This Class represents a body for a Ticket in the bridge design pattern for the General Systems Theory implemented in this code.
*/
class API_EXPORT TicketBody : public Body {
    protected:
        int id; /*!< This attribute contains a id for the TicketBody. */
        int idFlight; /*!< This attribute contains a idFlight for the TicketBody. */
        string passengerName; /*!< This attribute contains a passengerName for the TicketBody. */
        int seat; /*!< This attribute contains a seat for the TicketBody. */
        string time; /*!< This attribute contains a time for the TicketBody. */
        string date; /*!< This attribute contains a date for the TicketBody. */
        string origin; /*!< This attribute contains a origin for the TicketBody. */
        string destiny; /*!< This attribute contains a destiny for the TicketBody. */

    public:
        /*!
            This is the default constructor for the TicketBody Class.
            \param id the id of the TicketBody.
            \param idFlight the idFlight of the TicketBody.
            \param passengerName the passengerName of the TicketBody.
            \param seat the seat of the TicketBody.
            \param time the time of the TicketBody.
            \param date the date of the TicketBody.
            \param origin the origin of the TicketBody.
            \param destiny the destiny of the TicketBody.
            \return TicketBody - a TicketBody Class object.
        */
        TicketBody(int id = -1, int idFlight = -1, string passengerName = "", int seat = -1, string time = "", string date = "", string origin = "", string destiny = "");

        /*!
            This is the default destructor for the TicketBody Class.
        */
        virtual ~TicketBody();

        /*!
            Sets the id attribute in the TicketBody Class.
            \param id which will be set to the current TicketBody.
        */
        void setId(int id);

        /*!
            Returns the id attribute in the TicketBody Class.
            \return int - the content id attribute.  
        */
        int getId() const;

        /*!
            Sets the idFlight attribute in the TicketBody Class.
            \param idFlight which will be set to the current TicketBody.
        */
        void setIdFlight(int idFlight);

        /*!
            Returns the idFlight attribute in the TicketBody Class.
            \return int - the content idFlight attribute.  
        */
        int getIdFlight() const;

        /*!
            Sets the passengerName attribute in the TicketBody Class.
            \param passengerName which will be set to the current TicketBody.
        */
        void setPassengerName(string passengerName);

        /*!
            Returns the passengerName attribute in the TicketBody Class.
            \return string - the content passengerName attribute.  
        */
        string getPassengerName() const;

        /*!
            Sets the seat attribute in the TicketBody Class.
            \param seat which will be set to the current TicketBody.
        */
        void setSeat(int seat);

        /*!
            Returns the seat attribute in the TicketBody Class.
            \return int - the content seat attribute.  
        */
        int getSeat() const;

        /*!
            Sets the time attribute in the TicketBody Class.
            \param time which will be set to the current TicketBody.
        */
        void setTime(string time);

        /*!
            Returns the time attribute in the TicketBody Class.
            \return string - the content time attribute.  
        */
        string getTime() const;

        /*!
            Sets the date attribute in the TicketBody Class.
            \param date which will be set to the current TicketBody.
        */
        void setDate(string date);

        /*!
            Returns the date attribute in the TicketBody Class.
            \return string - the content date attribute.  
        */
        string getDate() const;

        /*!
            Sets the origin attribute in the TicketBody Class.
            \param origin which will be set to the current TicketBody.
        */
        void setOrigin(string origin);

        /*!
            Returns the origin attribute in the TicketBody Class.
            \return string - the content origin attribute.  
        */
        string getOrigin() const;

        /*!
            Sets the destiny attribute in the TicketBody Class.
            \param destiny which will be set to the current TicketBody.
        */
        void setDestiny(string destiny);

        /*!
            Returns the destiny attribute in the TicketBody Class.
            \return string - the content destiny attribute.  
        */
        string getDestiny() const;
};

//! Class TicketHandle
/**
* This Class represents a handle for a TicketBody in the bridge design pattern for the General Systems Theory implemented in this code.
*/
class API_EXPORT TicketHandle : public Ticket, public Handle<TicketBody> {
    public: 
        /*!
            This is the default constructor for the TicketHandle Class.
            \param id the id of the TicketHandle.
            \param idFlight the idFlight of the TicketHandle.
            \param passengerName the passengerName of the TicketHandle.
            \param seat the seat of the TicketHandle.
            \param time the time of the TicketHandle.
            \param date the date of the TicketHandle.
            \param origin the origin of the TicketHandle.
            \param destiny the destiny of the TicketHandle.
            \return TicketHandle - a TicketHandle Class object.
        */
        TicketHandle(int id = -1, int idFlight = -1, string passengerName = "", int seat = -1, string time = "", string date = "", string origin = "", string destiny = "") {
            pImpl_->setId(id);
            pImpl_->setIdFlight(idFlight);
            pImpl_->setPassengerName(passengerName);
            pImpl_->setSeat(seat);
            pImpl_->setTime(time);
            pImpl_->setDate(date);
            pImpl_->setOrigin(origin);
            pImpl_->setDestiny(destiny);
        }

        /*!
            This is the default destructor for the TicketHandle Class.
        */
        virtual ~TicketHandle(){}

        /*!
            Sets the id attribute in the TicketHandle Class.
            \param id which will be set to the current TicketHandle.
        */
        void setId(int id) {
            pImpl_->setId(id);
        }

        /*!
            Returns the id attribute in the TicketHandle Class.
            \return int - the content id attribute.  
        */
        int getId() const {
            return pImpl_->getId();
        }

        /*!
            Sets the idFlight attribute in the TicketHandle Class.
            \param idFlight which will be set to the current TicketHandle.
        */
        void setIdFlight(int idFlight) {
            pImpl_->setIdFlight(idFlight);
        }

        /*!
            Returns the idFlight attribute in the TicketHandle Class.
            \return int - the content idFlight attribute.  
        */
        int getIdFlight() const{
            return pImpl_->getIdFlight();
        }

        /*!
            Sets the passengerName attribute in the TicketHandle Class.
            \param passengerName which will be set to the current TicketHandle.
        */
        void setPassengerName(string passengerName) {
            pImpl_->setPassengerName(passengerName);
        }

        /*!
            Returns the passengerName attribute in the TicketHandle Class.
            \return string - the content passengerName attribute.  
        */
        string getPassengerName() const{
            return pImpl_->getPassengerName();
        }

        /*!
            Sets the seat attribute in the TicketHandle Class.
            \param seat which will be set to the current TicketHandle.
        */
        void setSeat(int seat) {
            pImpl_->setSeat(seat);
        }

        /*!
            Returns the seat attribute in the TicketHandle Class.
            \return int - the content seat attribute.  
        */
        int getSeat() const {
            return pImpl_->getSeat();
        }

        /*!
            Sets the time attribute in the TicketHandle Class.
            \param time which will be set to the current TicketHandle.
        */
        void setTime(string time) {
            pImpl_->setTime(time);
        }

        /*!
            Returns the time attribute in the TicketHandle Class.
            \return string - the content time attribute.  
        */
        string getTime() const {
            return pImpl_->getTime();
        }

        /*!
            Sets the date attribute in the TicketHandle Class.
            \param date which will be set to the current TicketHandle.
        */
        void setDate(string date) {
            pImpl_->setDate(date);
        }

        /*!
            Returns the date attribute in the TicketHandle Class.
            \return string - the content date attribute.  
        */
        string getDate() const {
            return pImpl_->getDate();
        }

        /*!
            Sets the origin attribute in the TicketHandle Class.
            \param origin which will be set to the current TicketHandle.
        */
        void setOrigin(string origin) {
            pImpl_->setOrigin(origin);
        }

        /*!
            Returns the origin attribute in the TicketHandle Class.
            \return string - the content origin attribute.  
        */
        string getOrigin() const {
            return pImpl_->getOrigin();
        }

        /*!
            Sets the destiny attribute in the TicketHandle Class.
            \param destiny which will be set to the current TicketHandle.
        */
        void setDestiny(string destiny) {
            pImpl_->setDestiny(destiny);
        }

        /*!
            Returns the destiny attribute in the TicketHandle Class.
            \return string - the content destiny attribute.  
        */
        string getDestiny() const {
            return pImpl_->getDestiny();
        }
};

#endif
