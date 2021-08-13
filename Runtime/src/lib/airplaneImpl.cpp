#include "../includes/airplaneImpl.h"

AirplaneBody::AirplaneBody(int id,string model, string manufacturer, string registration, string pilot, string copilot, int capacity):id(id), model(model), manufacturer(manufacturer), registration(registration), pilot(pilot), copilot(copilot), capacity(capacity){}
AirplaneBody::~AirplaneBody(){}


int AirplaneBody::getId(){
    return this->id;
}
void AirplaneBody::setId(int id){
    this->id = id;
}


string AirplaneBody::getModel() {
    return this->model;
}
void AirplaneBody::setModel(string model) {
    this->model = model;
}


string AirplaneBody::getManufacturer() {
    return this->manufacturer;
}
void AirplaneBody::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}


string AirplaneBody::getRegistration() {
    return this->registration;
}
void AirplaneBody::setRegistration(string registration) {
    this->registration = registration;
}


string AirplaneBody::getPilot() {
    return this->pilot;
}
void AirplaneBody::setPilot(string pilot) {
    this->pilot = pilot;
}


string AirplaneBody::getCopilot() {
    return this->copilot;
}
void AirplaneBody::setCopilot(string copilot) {
    this->copilot = copilot;
}


int AirplaneBody::getCapacity() {
    return this->capacity;
}
void AirplaneBody::setCapacity(int capacity) {
    this->capacity = capacity;
}