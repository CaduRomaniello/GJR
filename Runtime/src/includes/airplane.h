#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include <string>

using namespace std;

class Airplane{

    public:

        ~Airplane();

        virtual int getAirplaneIdentifier() const = 0;
        virtual void SetAirplaneIdentifier(int airplaneIdentifier) = 0;


        virtual string getModel() const = 0;
        virtual void setModel(string model) = 0;


        virtual string getManufacturer() const = 0;
        virtual void setManufacturer(string manufacturer) = 0;


        virtual string getRegistration() const = 0;
        virtual void setRegistration(string registration) = 0;


        virtual string getPilot() const = 0;
        virtual void setPilot(string pilot) = 0;


        virtual string getCoPilot() const = 0;
        virtual void setCoPilot(string coPilot) = 0;


        virtual int getCapacity() const = 0;
        virtual void setCapacity(int capacity) = 0;

};

#endif