#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>

using namespace std;

class Ticket {
    public:
        virtual ~Ticket(){}

        virtual int getId() const = 0;
        virtual void setId(int ticketIdentifier) = 0;
        

        virtual int getIdFlight() const = 0;
        virtual void setIdFlight(int idFlight) = 0;


        virtual string getPassengerName() const = 0;
        virtual void setPassengerName(string passengerName) = 0;


        virtual int getSeat() const = 0;
        virtual void setSeat(int seat) = 0;


        virtual string getTime() const = 0;
        virtual void setTime(string time) = 0;


        virtual string getDate() const = 0;
        virtual void setDate(string date) = 0;


        virtual string getOrigin() const = 0;
        virtual void setOrigin(string origin) = 0;


        virtual string getDestiny() const = 0;
        virtual void setDestiny(string destiny) = 0;
};

#endif