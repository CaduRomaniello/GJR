#ifndef AIRPLANEIMPL_H
#define AIRPLANEIMPL_H

#include <iostream>
#include <string>
#include "airplane.h"
#include "handleBody.h"

using namespace std;

//! Class AirplaneBody
/**
* This Class represents a body for an Airplane in the bridge design pattern for the General Systems Theory implemented in this code.
*/
class API_EXPORT AirplaneBody : public Body{

    protected:
        int id; /*!< This attribute contains a id for the AirplaneBody. */
        string model; /*!< This attribute contains a model for the AirplaneBody. */
        string manufacturer; /*!< This attribute contains a manufacturer for the AirplaneBody. */
        string registration; /*!< This attribute contains a registration for the AirplaneBody. */
        string pilot; /*!< This attribute contains a pilot for the AirplaneBody. */
        string copilot; /*!< This attribute contains a copilot for the AirplaneBody. */
        int capacity; /*!< This attribute contains a capacity for the AirplaneBody. */

    public:
        /*!
            This is the default constructor for the AirplaneBody Class.
            \param id the id of the AirplaneBody.
            \param model the model of the AirplaneBody.
            \param manufacturer the manufacturer of the AirplaneBody.
            \param registration the registration of the AirplaneBody.
            \param pilot the pilot of the AirplaneBody.
            \param copilot the copilot of the AirplaneBody.
            \param capacity the capacity of the AirplaneBody.
            \return AirplaneBody - a AirplaneBody Class object.
        */
        AirplaneBody(int id=-1, string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0);
        
        /*!
            This is the default destructor for the AirplaneBody Class.
        */
        virtual ~AirplaneBody();

        /*!
            Returns the id attribute in the AirplaneBody Class.
            \return int - the content id attribute.  
        */
        int getId();

        /*!
            Sets the id attribute in the AirplaneBody Class.
            \param id which will be set to the current AirplaneBody.
        */
        void setId(int id);

        /*!
            Returns the model attribute in the AirplaneBody Class.
            \return string - the content model attribute.  
        */
        string getModel();

        /*!
            Sets the model attribute in the AirplaneBody Class.
            \param model which will be set to the current AirplaneBody.
        */
        void setModel(string model);

        /*!
            Returns the manufacturer attribute in the AirplaneBody Class.
            \return string - the content manufacturer attribute.  
        */
        string getManufacturer();

        /*!
            Sets the manufacturer attribute in the AirplaneBody Class.
            \param manufacturer which will be set to the current AirplaneBody.
        */
        void setManufacturer(string manufacturer);

        /*!
            Returns the registration attribute in the AirplaneBody Class.
            \return string - the content registration attribute.  
        */
        string getRegistration();

        /*!
            Sets the registration attribute in the AirplaneBody Class.
            \param registration which will be set to the current AirplaneBody.
        */
        void setRegistration(string registration);

        /*!
            Returns the pilot attribute in the AirplaneBody Class.
            \return string - the content pilot attribute.  
        */
        string getPilot();

        /*!
            Sets the pilot attribute in the AirplaneBody Class.
            \param pilot which will be set to the current AirplaneBody.
        */
        void setPilot(string pilot);

        /*!
            Returns the copilot attribute in the AirplaneBody Class.
            \return string - the content copilot attribute.  
        */
        string getCopilot();

        /*!
            Sets the copilot attribute in the AirplaneBody Class.
            \param copilot which will be set to the current AirplaneBody.
        */
        void setCopilot(string copilot);

        /*!
            Returns the capacity attribute in the AirplaneBody Class.
            \return int - the content capacity attribute.  
        */
        int getCapacity();

        /*!
            Sets the capacity attribute in the AirplaneBody Class.
            \param capacity which will be set to the current AirplaneBody.
        */
        void setCapacity(int capacity);
};

//! Class AirplaneHandle
/**
* This Class represents a handle for a AirplaneBody in the bridge design pattern for the General Systems Theory implemented in this code.
*/
class API_EXPORT AirplaneHandle : public Airplane, public Handle<AirplaneBody>{

    public:
        /*!
            This is the default constructor for the AirplaneHandle Class.
            \param id the id of the AirplaneHandle.
            \param model the model of the AirplaneHandle.
            \param manufacturer the manufacturer of the AirplaneHandle.
            \param registration the registration of the AirplaneHandle.
            \param pilot the pilot of the AirplaneHandle.
            \param copilot the copilot of the AirplaneHandle.
            \param capacity the capacity of the AirplaneHandle.
            \return AirplaneHandle - a AirplaneHandle Class object.
        */
        AirplaneHandle(int id = -1, string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0){
            pImpl_->setId(id);
            pImpl_->setModel(model);
            pImpl_->setManufacturer(manufacturer);
            pImpl_->setRegistration(registration);
            pImpl_->setPilot(pilot);
            pImpl_->setCopilot(copilot);
            pImpl_->setCapacity(capacity);
        }

        /*!
            This is the default destructor for the AirplaneHandle Class.
        */
        virtual ~AirplaneHandle(){};

        /*!
            Returns the id attribute in the AirplaneHandle Class.
            \return int - the content id attribute.  
        */
        int getId() const{
            return pImpl_->getId();
        }

        /*!
            Sets the id attribute in the AirplaneHandle Class.
            \param airplaneIdentifier which will be set to the current AirplaneHandle.
        */
        void setId(int airplaneIdentifier){
            pImpl_->setId(airplaneIdentifier);
        }

        /*!
            Returns the model attribute in the AirplaneHandle Class.
            \return string - the content model attribute.  
        */
        string getModel() const{
        	return pImpl_->getModel();
        }

        /*!
            Sets the model attribute in the AirplaneHandle Class.
            \param model which will be set to the current AirplaneHandle.
        */
        void setModel(string model) {
        	pImpl_->setModel(model);
        }

        /*!
            Returns the manufacturer attribute in the AirplaneHandle Class.
            \return string - the content manufacturer attribute.  
        */
        string getManufacturer() const{
        	return pImpl_->getManufacturer();
        }

        /*!
            Sets the manufacturer attribute in the AirplaneHandle Class.
            \param manufacturer which will be set to the current AirplaneHandle.
        */
        void setManufacturer(string manufacturer) {
        	pImpl_->setManufacturer(manufacturer);
        }

        /*!
            Returns the registration attribute in the AirplaneHandle Class.
            \return string - the content registration attribute.  
        */
        string getRegistration() const{
        	return pImpl_->getRegistration();
        }

        /*!
            Sets the registration attribute in the AirplaneHandle Class.
            \param registration which will be set to the current AirplaneHandle.
        */
        void setRegistration(string registration) {
        	pImpl_->setRegistration(registration);
        }

        /*!
            Returns the pilot attribute in the AirplaneHandle Class.
            \return string - the content pilot attribute.  
        */
        string getPilot() const{
        	return pImpl_->getPilot();
        }

        /*!
            Sets the pilot attribute in the AirplaneHandle Class.
            \param pilot which will be set to the current AirplaneHandle.
        */
        void setPilot(string pilot) {
        	pImpl_->setPilot(pilot);
        }

        /*!
            Returns the copilot attribute in the AirplaneHandle Class.
            \return string - the content copilot attribute.  
        */
        string getCopilot() const {
        	return pImpl_->getCopilot();
        }

        /*!
            Sets the copilot attribute in the AirplaneHandle Class.
            \param copilot which will be set to the current AirplaneHandle.
        */
        void setCopilot(string copilot) {
        	pImpl_->setCopilot(copilot);
        }

        /*!
            Returns the capacity attribute in the AirplaneHandle Class.
            \return int - the content capacity attribute.  
        */
        int getCapacity() const {
        	return pImpl_->getCapacity();
        }

        /*!
            Sets the capacity attribute in the AirplaneHandle Class.
            \param capacity which will be set to the current AirplaneHandle.
        */
        void setCapacity(int capacity) {
        	pImpl_->setCapacity(capacity);
        }
};

#endif
