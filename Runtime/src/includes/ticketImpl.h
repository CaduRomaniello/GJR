#ifndef TICKETIMPL_H
#define TICKETIMPL_H

#include "ticket.h"
#include "handleBody.h"

class TicketBody : public Body {
    protected:
        int id;
        int idFlight;
        string passengerName;
        int seat;
        string time;
        string date;
        string origin;
        string destiny;

    public:
        TicketBody(int id = -1, int idFlight = -1, string passengerName = "", int seat = -1, string time = "", string date = "", string origin = "", string destiny = "");
        virtual ~TicketBody();

        void setId(int id);
        int getId() const;

        void setIdFlight(int idFlight);
        int getIdFlight() const;

        void setPassengerName(string passengerName);
        string getPassengerName() const;

        void setSeat(int seat);
        int getSeat() const;

        void setTime(string time);
        string getTime() const;

        void setDate(string date);
        string getDate() const;

        void setOrigin(string origin);
        string getOrigin() const;

        void setDestiny(string destiny);
        string getDestiny() const;
};

class TicketHandle : public Ticket, public Handle<TicketBody> {
    public: 
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

        virtual ~TicketHandle(){}

        void setId(int id) {
            pImpl_->setId(id);
        }
        int getId() const {
            return pImpl_->getId();
        }


        void setIdFlight(int idFlight) {
            pImpl_->setIdFlight(idFlight);
        }
        int getIdFlight() const{
            return pImpl_->getIdFlight();
        }


        void setPassengerName(string passengerName) {
            pImpl_->setPassengerName(passengerName);
        }
        string getPassengerName() const{
            return pImpl_->getPassengerName();
        }


        void setSeat(int seat) {
            pImpl_->setSeat(seat);
        }
        int getSeat() const {
            return pImpl_->getSeat();
        }


        void setTime(string time) {
            pImpl_->setTime(time);
        }
        string getTime() const {
            return pImpl_->getTime();
        }


        void setDate(string date) {
            pImpl_->setDate(date);
        }
        string getDate() const {
            return pImpl_->getDate();
        }


        void setOrigin(string origin) {
            pImpl_->setOrigin(origin);
        }
        string getOrigin() const {
            return pImpl_->getOrigin();
        }


        void setDestiny(string destiny) {
            pImpl_->setDestiny(destiny);
        }
        string getDestiny() const {
            return pImpl_->getDestiny();
        }
};

#endif