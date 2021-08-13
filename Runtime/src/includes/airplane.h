#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include <string>

using namespace std;

class Airplane{

    public:

        virtual ~Airplane(){}

        virtual int getId() const = 0;
        virtual void setId(int id) = 0;


        virtual string getModel() const = 0;
        virtual void setModel(string model) = 0;


        virtual string getManufacturer() const = 0;
        virtual void setManufacturer(string manufacturer) = 0;


        virtual string getRegistration() const = 0;
        virtual void setRegistration(string registration) = 0;


        virtual string getPilot() const = 0;
        virtual void setPilot(string pilot) = 0;


        virtual string getCopilot() const = 0;
        virtual void setCopilot(string copilot) = 0;


        virtual int getCapacity() const = 0;
        virtual void setCapacity(int capacity) = 0;

};

#endif