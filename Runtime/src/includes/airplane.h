#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include <string>

using namespace std;

//! Class Airplane
/*
 * This Class represents an airplane in the General Systems Theory implemented in this code.
*/
class Airplane{

    public:

        /*!
            This is the default destructor for the Airplane Class.
        */
        virtual ~Airplane(){}

        /*!
            Returns the id atttribute in the Airplane Class.
            \return int - the content id attribute.
        */
        virtual int getId() const = 0;

        /*!
            Sets the id attribute in the Airplane Class.
            \param id which will be set to the current Airplane.
        */
        virtual void setId(int id) = 0;

        /*!
            Returns the model atttribute in the Airplane Class.
            \return string - the content model attribute.
        */
        virtual string getModel() const = 0;

        /*!
            Sets the model attribute in the Airplane Class.
            \param model which will be set to the current Airplane.
        */
        virtual void setModel(string model) = 0;

        /*!
            Returns the manufacturer atttribute in the Airplane Class.
            \return string - the content manufacturer attribute.
        */
        virtual string getManufacturer() const = 0;

        /*!
            Sets the manufacturer attribute in the Airplane Class.
            \param manufacturer which will be set to the current Airplane.
        */
        virtual void setManufacturer(string manufacturer) = 0;

        /*!
            Returns the registration atttribute in the Airplane Class.
            \return string - the content registration attribute.
        */
        virtual string getRegistration() const = 0;

        /*!
            Sets the registration attribute in the Airplane Class.
            \param registration which will be set to the current Airplane.
        */
        virtual void setRegistration(string registration) = 0;

        /*!
            Returns the pilot atttribute in the Airplane Class.
            \return string - the content pilot attribute.
        */
        virtual string getPilot() const = 0;

        /*!
            Sets the pilot attribute in the Airplane Class.
            \param pilot which will be set to the current Airplane.
        */
        virtual void setPilot(string pilot) = 0;

        /*!
            Returns the copilot atttribute in the Airplane Class.
            \return string - the content copilot attribute.
        */
        virtual string getCopilot() const = 0;

        /*!
            Sets the copilot attribute in the Airplane Class.
            \param copilot which will be set to the current Airplane.
        */
        virtual void setCopilot(string copilot) = 0;

        /*!
            Returns the capacity atttribute in the Airplane Class.
            \return int - the content capacity attribute.
        */
        virtual int getCapacity() const = 0;

        /*!
            Sets the capacity attribute in the Airplane Class.
            \param capacity which will be set to the current Airplane.
        */
        virtual void setCapacity(int capacity) = 0;

};

//a
#endif