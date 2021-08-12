#ifndef AIRPLANEIMPL_H
#define AIRPLANEIMPL_H

#include <iostream>
#include <string>
#include "airplane.h"
#include "handleBody.h"

using namespace std;

class AirplaneBody : public Airplane, public Body{

    protected:
        int airplaneIdentifier;
        string model;
        string manufacturer;
        string registration;
        string pilot;
        string copilot;
        int capacity;

    public:

        AirplaneBody(string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0);
        virtual ~AirplaneBody();

        int getAirplaneIdentifier();
        void setAirplaneIdentifier(int airplaneIdentifier);

        string getModel();
        void setModel(string model);


        string getManufacturer();
        void setManufacturer(string manufacturer);


        string getRegistration();
        void setRegistration(string registration);


        string getPilot();
        void setPilot(string pilot);


        string getCopilot();
        void setCopilot(string copilot);


        int getCapacity();
        void setCapacity(int capacity);

};

class AirplaneHandle : public Airplane, public Handle<AirplaneBody>{

    public:
        AirplaneHandle(int airplaneIdentifier = -1, string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0){
            pImpl_->setAirplaneIdentifier(airplaneIdentifier);
            pImpl_->setModel(model);
            pImpl_->setModel(model);
            pImpl_->setManufacturer(manufacturer);
            pImpl_->setRegistration(registration);
            pImpl_->setPilot(pilot);
            pImpl_->setCopilot(copilot);
            pImpl_->setCapacity(capacity);
        }
        virtual ~AirplaneHandle(){};

        int getAirplaneIdentifier() const{
            return pImpl_->getAirplaneIdentifier();
        }
        void setAirplaneIdentifier(int airplaneIdentifier){
            pImpl_->setAirplaneIdentifier(airplaneIdentifier);
        }


        string getModel() const{
        	return pImpl_->getModel();
        }
        void setModel(string model) {
        	pImpl_->setModel(model);
        }


        string getManufacturer() const{
        	return pImpl_->getManufacturer();
        }
        void setManufacturer(string manufacturer) {
        	pImpl_->setManufacturer(manufacturer);
        }


        string getRegistration() const{
        	return pImpl_->getRegistration();
        }
        void setRegistration(string registration) {
        	pImpl_->setRegistration(registration);
        }


        string getPilot() const{
        	return pImpl_->getPilot();
        }
        void setPilot(string pilot) {
        	pImpl_->setPilot(pilot);
        }


        string getCopilot() const {
        	return pImpl_->getCopilot();
        }
        void setCopilot(string copilot) {
        	pImpl_->setCopilot(copilot);
        }


        int getCapacity() const {
        	return pImpl_->getCapacity();
        }
        void setCapacity(int capacity) {
        	pImpl_->setCapacity(capacity);
        }

};

#endif