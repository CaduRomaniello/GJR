#ifndef FLIGHTIMPL_H
#define FLIGHTIMPL_H

#include <iostream>
#include <string>
#include "flight.h"
#include "handleBody.h"

using namespace std;

//! Class FlightBody
/**
* This Class represents a body for a Flight in the bridge design pattern for the General Systems Theory implemented in this code.
*/
class API_EXPORT FlightBody : public Body{

    protected:
        int id; /*!< This attribute contains a id for the FlightBody. */
        string time; /*!< This attribute contains a time for the FlightBody. */
        string date; /*!< This attribute contains a date for the FlightBody. */
        int idAirplane; /*!< This attribute contains a id airplane for the FlightBody. */
        string origin; /*!< This attribute contains a origin for the FlightBody. */
        string destiny; /*!< This attribute contains a destiny for the FlightBody. */
        int numberOfAvailableSeats; /*!< This attribute contains a number of available seats for the FlightBody. */

    public:
        /*!
            This is the default constructor for the FlightBody Class.
            \param id the id of the FlightBody.
            \param time the time of the FlightBody.
            \param date the date of the FlightBody.
            \param idAirplane the idAirplane of the FlightBody.
            \param origin the origin of the FlightBody.
            \param destiny the destiny of the FlightBody.
            \param numberOfAvailableSeats the numberOfAvailableSeats of the FlightBody.
            \return FlightBody - a FlightBody Class object.
        */
        FlightBody(int id = -1, string time="", string date="", int idAirplane=-1, string origin="", string destiny="", int numberOfAvailableSeats=0);

        /*!
            This is the default destructor for the FlightBody Class.
        */
        virtual ~FlightBody();

        /*!
            Returns the id attribute in the FlightBody Class.
            \return int - the content id attribute.  
        */
        int getId();

        /*!
            Sets the id attribute in the FlightBody Class.
            \param flightIdentifier which will be set to the current FlightBody.
        */
        void setId(int flightIdentifier);

        /*!
            Returns the time attribute in the FlightBody Class.
            \return string - the content time attribute.  
        */
        string getTime();

        /*!
            Sets the time attribute in the FlightBody Class.
            \param time which will be set to the current FlightBody.
        */
        void setTime(string time);

        /*!
            Returns the date attribute in the FlightBody Class.
            \return string - the content date attribute.  
        */
        string getDate();

        /*!
            Sets the date attribute in the FlightBody Class.
            \param date which will be set to the current FlightBody.
        */
        void setDate(string date);

        /*!
            Returns the idAirplane attribute in the FlightBody Class.
            \return string - the content idAirplane attribute.  
        */
        int getIdAirplane();

        /*!
            Sets the idAirplane attribute in the FlightBody Class.
            \param idAirplane which will be set to the current FlightBody.
        */
        void setIdAirplane(int idAirplane);

        /*!
            Returns the origin attribute in the FlightBody Class.
            \return string - the content origin attribute.  
        */
        string getOrigin();

        /*!
            Sets the origin attribute in the FlightBody Class.
            \param origin which will be set to the current FlightBody.
        */
        void setOrigin(string origin);

        /*!
            Returns the destiny attribute in the FlightBody Class.
            \return string - the content destiny attribute.  
        */
        string getDestiny();

        /*!
            Sets the destiny attribute in the FlightBody Class.
            \param destiny which will be set to the current FlightBody.
        */
        void setDestiny(string destiny);

        /*!
            Returns the numberOfAvailableSeats attribute in the FlightBody Class.
            \return string - the content numberOfAvailableSeats attribute.  
        */
        int getNumberOfAvailableSeats();

        /*!
            Sets the numberOfAvailableSeats attribute in the FlightBody Class.
            \param numberOfAvailableSeats which will be set to the current FlightBody.
        */
        void setNumberOfAvailableSeats(int NmberOfAvailableSeats);

};

//! Class FlightHandle
/**
* This Class represents a handle for a FlightBody in the bridge design pattern for the General Systems Theory implemented in this code.
*/
class API_EXPORT FlightHandle : public Handle<FlightBody>, public Flight{

    public:
        /*!
            This is the default constructor for the FlightHandle Class.
            \param id the id of the FlightHandle.
            \param time the time of the FlightHandle.
            \param date the date of the FlightHandle.
            \param idAirplane the idAirplane of the FlightHandle.
            \param origin the origin of the FlightHandle.
            \param destiny the destiny of the FlightHandle.
            \param numberOfAvailableSeats the numberOfAvailableSeats of the FlightHandle.
            \return FlightHandle - a FlightHandle Class object.
        */
        FlightHandle(int id=-1, string time="", string date="", int idAirplane=-1, string origin="", string destiny="", int numberOfAvailableSeats=0){
            pImpl_->setId(id);
            pImpl_->setTime(time);
            pImpl_->setDate(date);
            pImpl_->setIdAirplane(idAirplane);
            pImpl_->setOrigin(origin);
            pImpl_->setDestiny(destiny);
            pImpl_->setNumberOfAvailableSeats(numberOfAvailableSeats);
        }

        /*!
            This is the default destructor for the FlightHandle Class.
        */
        virtual ~FlightHandle(){};

        /*!
            Returns the id attribute in the FlightHandle Class.
            \return int - the content id attribute.  
        */
        int getId() const {
            return pImpl_->getId();
        }

        /*!
            Sets the id attribute in the FlightHandle Class.
            \param id which will be set to the current FlightHandle.
        */
        void setId(int id){
            pImpl_->setId(id);
        }

        /*!
            Returns the time attribute in the FlightHandle Class.
            \return string - the content time attribute.  
        */
        string getTime() const {
            return pImpl_->getTime();
        }

        /*!
            Sets the time attribute in the FlightHandle Class.
            \param time which will be set to the current FlightHandle.
        */
        void setTime(string time){
            pImpl_->setTime(time);
        }

        /*!
            Returns the date attribute in the FlightHandle Class.
            \return string - the content date attribute.  
        */
        string getDate() const {
            return pImpl_->getDate();
        }

        /*!
            Sets the date attribute in the FlightHandle Class.
            \param date which will be set to the current FlightHandle.
        */
        void setDate(string date){
            pImpl_->setDate(date);
        }

        /*!
            Returns the idAirplane attribute in the FlightHandle Class.
            \return string - the content idAirplane attribute.  
        */
        int getIdAirplane() const {
            return pImpl_->getIdAirplane();
        }

        /*!
            Sets the idAirplane attribute in the FlightHandle Class.
            \param idAirplane which will be set to the current FlightHandle.
        */
        void setIdAirplane(int idAirplane){
            pImpl_->setIdAirplane(idAirplane);
        }

        /*!
            Returns the origin attribute in the FlightHandle Class.
            \return string - the content origin attribute.  
        */
        string getOrigin() const {
            return pImpl_->getOrigin();
        }

        /*!
            Sets the origin attribute in the FlightHandle Class.
            \param origin which will be set to the current FlightHandle.
        */
        void setOrigin(string origin){
            pImpl_->setOrigin(origin);
        }

        /*!
            Returns the destiny attribute in the FlightHandle Class.
            \return string - the content destiny attribute.  
        */
        string getDestiny() const {
            return pImpl_->getDestiny();
        }

        /*!
            Sets the destiny attribute in the FlightHandle Class.
            \param destiny which will be set to the current FlightHandle.
        */
        void setDestiny(string destiny){
            pImpl_->setDestiny(destiny);
        }

        /*!
            Returns the numberOfAvailableSeats attribute in the FlightHandle Class.
            \return string - the content numberOfAvailableSeats attribute.  
        */
        int getNumberOfAvailableSeats() const {
            return pImpl_->getNumberOfAvailableSeats();
        }

        /*!
            Sets the numberOfAvailableSeats attribute in the FlightHandle Class.
            \param numberOfAvailableSeats which will be set to the current FlightHandle.
        */
        void setNumberOfAvailableSeats(int availableSeats){
            pImpl_->setNumberOfAvailableSeats(availableSeats);
        }

};

#endif
