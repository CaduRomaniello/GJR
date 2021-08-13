#ifndef FLIGHTIMPL_H
#define FLIGHTIMPL_H

#include <iostream>
#include <string>
#include "flight.h"
#include "handleBody.h"

using namespace std;

class FlightBody : public Body{

    protected:
        int id;
        string time;
        string date;
        int idAirplane;
        string origin;
        string destiny;
        int numberOfAvailableSeats;

    public:

        FlightBody(int id = -1, string time="", string date="", int idAirplane=-1, string origin="", string destiny="", int numberOfAvailableSeats=0);
        virtual ~FlightBody();

        int getId();
        void setId(int flightIdentifier);

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


        int getNumberOfAvailableSeats();
        void setNumberOfAvailableSeats(int NmberOfAvailableSeats);

};

class FlightHandle : public Handle<FlightBody>, public Flight{

    public:
        FlightHandle(int id=-1, string time="", string date="", int idAirplane=-1, string origin="", string destiny="", int numberOfAvailableSeats=0){
            pImpl_->setId(id);
            pImpl_->setTime(time);
            pImpl_->setDate(date);
            pImpl_->setIdAirplane(idAirplane);
            pImpl_->setOrigin(origin);
            pImpl_->setDestiny(destiny);
            pImpl_->setNumberOfAvailableSeats(numberOfAvailableSeats);
        }
        virtual ~FlightHandle(){};

        int getId() const {
            return pImpl_->getId();
        }
        void setId(int id){
            pImpl_->setId(id);
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


        int getNumberOfAvailableSeats() const {
            return pImpl_->getNumberOfAvailableSeats();
        }
        void setNumberOfAvailableSeats(int availableSeats){
            pImpl_->setNumberOfAvailableSeats(availableSeats);
        }

};

#endif