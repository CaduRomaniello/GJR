#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>
#include "API_global.h"

using namespace std;

//! Class Flight
/**
* This Class represents a flight in the General Systems Theory implemented in this code.
*/
class API_EXPORT Flight{

    public:
        /*!
            This is the default destructor for the Flight Class.
        */
        virtual ~Flight(){}

        /*!
            Returns the id attribute in the Flight Class.
            \return int - the content id attribute.  
        */
        virtual int getId() const = 0;

        /*!
            Sets the id attribute in the Flight Class.
            \param flightIdentifier which will be set to the current Flight.
        */
        virtual void setId(int flightIdentifier) = 0;

        /*!
            Returns the time attribute in the Flight Class.
            \return string - the content time attribute.  
        */
        virtual string getTime() const = 0;

        /*!
            Sets the time attribute in the Flight Class.
            \param time which will be set to the current Flight.
        */
        virtual void setTime(string time) = 0;

        /*!
            Returns the date attribute in the Flight Class.
            \return string - the content date attribute.  
        */
        virtual string getDate() const = 0;

        /*!
            Sets the date attribute in the Flight Class.
            \param date which will be set to the current Flight.
        */
        virtual void setDate(string date) = 0;

        /*!
            Returns the idAirplane attribute in the Flight Class.
            \return int - the content idAirplane attribute.  
        */
        virtual int getIdAirplane() const = 0;

        /*!
            Sets the idAirplane attribute in the Flight Class.
            \param idAirplane which will be set to the current Flight.
        */
        virtual void setIdAirplane(int idAirplane) = 0;

        /*!
            Returns the origin attribute in the Flight Class.
            \return string - the content origin attribute.  
        */
        virtual string getOrigin() const = 0;

        /*!
            Sets the origin attribute in the Flight Class.
            \param origin which will be set to the current Flight.
        */
        virtual void setOrigin(string origin) = 0;

        /*!
            Returns the destiny attribute in the Flight Class.
            \return string - the content destiny attribute.  
        */
        virtual string getDestiny() const = 0;

        /*!
            Sets the destiny attribute in the Flight Class.
            \param destiny which will be set to the current Flight.
        */
        virtual void setDestiny(string destiny) = 0;

        /*!
            Returns the numberOfAvailableSeats attribute in the Flight Class.
            \return int - the content numberOfAvailableSeats attribute.  
        */
        virtual int getNumberOfAvailableSeats() const = 0;

        /*!
            Sets the numberOfAvailableSeats attribute in the Flight Class.
            \param availableSeats which will be set to the current Flight.
        */
        virtual void setNumberOfAvailableSeats(int availableSeats) = 0;

};

#endif
