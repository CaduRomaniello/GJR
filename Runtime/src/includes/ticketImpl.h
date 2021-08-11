#ifndef TICKETIMPL_H
#define TICKETIMPL_H

#include "ticket.h"
#include "handleBody.h"

class TicketBody : public Body {
    protected:
        int ticketIdentifier;
        int idFlight;
        string passengerName;
        string seat;
        string time;
        string date;

    public:
        TicketBody(int ticketIdentifier = -1, int idFlight = -1, string passengerName = "", string seat = "", string time = "", string date = "");
        virtual ~TicketBody();

        void setTicketIdentifier(int ticketIdentifier);
        int getTicketIdentifier() const;

        void setIdFlight(int idFlight);
        int getIdFlight() const;

        void setPassengerName(string passengerName);
        string getPassengerName() const;

        void setSeat(string seat);
        string getSeat() const;

        void setTime(string time);
        string getTime() const;

        void setDate(string date);
        string getDate() const;
};

class TicketHandle : public Ticket, public Handle<TicketBody> {
    public: 
        TicketHandle(int ticketIdentifier = -1, int idFlight = -1, string passengerName = "", string seat = "", string time = "", string date = "") {
            pImpl_->setTicketIdentifier(ticketIdentifier);
            pImpl_->setIdFlight(idFlight);
            pImpl_->setPassengerName(passengerName);
            pImpl_->setSeat(seat);
            pImpl_->setTime(time);
            pImpl_->setDate(date);
        }

        virtual ~TicketHandle(){}

        void setTicketIdentifier(int ticketIdentifier) {
            pImpl_->setTicketIdentifier(ticketIdentifier);
        }

        int getTicketIdentifier() const {
            return pImpl_->getTicketIdentifier();
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

        void setSeat(string seat) {
            pImpl_->setSeat(seat);
        }

        string getSeat() const {
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
};

#endif