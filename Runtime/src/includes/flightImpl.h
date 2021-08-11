#ifndef FLIGHTIMPL_H
#define FLIGHTIMPL_H

#include <iostream>
#include <string>
#include "flight.h"
#include "handleBody.h"

using namespace std;

class FlightBody : public Flight, public Body{

    protected:
        int flightIdentifier;
        string time;
        string date;
        int idAirplane;
        string origin;
        string destiny;
        int availableSeats;

    public:

        FlightBody(int flightIdentifier = -1, string time="", string date="", int idAirplane=-1, string origin="", string destiny="", int availableSeats=0);
        virtual ~FlightBody();

        int getFlightIdentifier();
        void setFlightIdentifier(int flightIdentifier);

        string getTime();
        void setTime(string time);


        string getDate();
        void setDate(string date);


        int getIdAirplane();
        void setIdAirplane(int idAirplane);


        string getOrigin();
        void setOrigin(string origin);


        string getDestiny();
        void setDestiny(string destiny);


        int getAvailableSeats();
        void setAvailableSeats(int availableSeats);

};

class FlightHandle : public Handle<FlightBody>, public Flight{

    public:
        FlightHandle(int flightIdentifier=-1, string time="", string date="", int idAirplane=-1, string origin="", string destiny="", int availableSeats=0){
            pImpl_->setFlightIdentifier(flightIdentifier);
            pImpl_->setTime(time);
            pImpl_->setDate(date);
            pImpl_->setIdAirplane(idAirplane);
            pImpl_->setOrigin(origin);
            pImpl_->setDestiny(destiny);
            pImpl_->setAvailableSeats(availableSeats);
        }
        virtual ~FlightHandle(){};

        int getFlightIdentifier() const {
            return pImpl_->getFlightIdentifier();
        }
        void setFlightIdentifier(int flightIdentifier){
            pImpl_->setFlightIdentifier(flightIdentifier);
        }

        string getTime() const {
            return pImpl_->getTime();
        }
        void setTime(string time){
            pImpl_->setTime(time);
        }


        string getDate() const {
            return pImpl_->getDate();
        }
        void setDate(string date){
            pImpl_->setDate(date);
        }


        int getIdAirplane() const {
            return pImpl_->getIdAirplane();
        }
        void setIdAirplane(int idAirplane){
            pImpl_->setIdAirplane(idAirplane);
        }


        string getOrigin() const {
            return pImpl_->getOrigin();
        }
        void setOrigin(string origin){
            pImpl_->setOrigin(origin);
        }


        string getDestiny() const {
            return pImpl_->getDestiny();
        }
        void setDestiny(string destiny){
            pImpl_->setDestiny(destiny);
        }


        int getAvailableSeats() const {
            return pImpl_->getAvailableSeats();
        }
        void setAvailableSeats(int availableSeats){
            pImpl_->setAvailableSeats(availableSeats);
        }

};

#endif