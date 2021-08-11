#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>

using namespace std;

class Flight{

    public:

        ~Flight();

        virtual int getFlightIdentifier() const = 0;
        virtual void setFlightIdentifier(int flightIdentifier) = 0;

        virtual string getTime() const = 0;
        virtual void setTime(string time) = 0;


        virtual string getDate() const = 0;
        virtual void setDate(string date) = 0;


        virtual int getIdAirplane() const = 0;
        virtual void setIdAirplane(int idAirplane) = 0;


        virtual string getOrigin() const = 0;
        virtual void setOrigin(string origin) = 0;


        virtual string getDestiny() const = 0;
        virtual void setDestiny(string destiny) = 0;


        virtual int getAvailableSeats() const = 0;
        virtual void setAvailableSeats(int availableSeats) = 0;

};

#endif