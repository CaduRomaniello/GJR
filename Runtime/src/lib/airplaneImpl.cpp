#include "../includes/airplaneImpl.h"

AirplaneBody::AirplaneBody(string model, string manufacturer, string registration, string pilot, string coPilot, int capacity):model(model), manufacturer(manufacturer), registration(registration), pilot(pilot), coPilot(coPilot), capacity(capacity){}
AirplaneBody::~AirplaneBody(){}


int AirplaneBody::getAirplaneIdentifier(){
    return this->airplaneIdentifier;
}
void AirplaneBody::SetAirplaneIdentifier(int airplaneIdentifier){
    this->airplaneIdentifier = airplaneIdentifier;
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


string AirplaneBody::getCoPilot() {
    return this->coPilot;
}
void AirplaneBody::setCoPilot(string coPilot) {
    this->coPilot = coPilot;
}


int AirplaneBody::getCapacity() {
    return this->capacity;
}
void AirplaneBody::setCapacity(int capacity) {
    this->capacity = capacity;
}