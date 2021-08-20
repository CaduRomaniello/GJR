#include "../includes/flightImpl.h"

FlightBody::FlightBody(int id, string time, string date, int idAirplane, string origin, string destiny, int availableSeats): id(id), time(time), date(date), idAirplane(idAirplane), origin(origin), destiny(destiny), numberOfAvailableSeats(availableSeats){}
FlightBody::~FlightBody(){}

int FlightBody::getId() {
    return this->id;
}
void FlightBody::setId(int id) {
    this->id = id;
}

string FlightBody::getTime() {
    return this->time;
}
void FlightBody::setTime(string time) {
    this->time = time;
}


string FlightBody::getDate() {
    return this->date;
}
void FlightBody::setDate(string date) {
    this->date = date;
}


int FlightBody::getIdAirplane() {
    return this->idAirplane;
}
void FlightBody::setIdAirplane(int idAirplane) {
    this->idAirplane = idAirplane;
}


string FlightBody::getOrigin() {
    return this->origin;
}
void FlightBody::setOrigin(string origin) {
    this->origin = origin;
}


string FlightBody::getDestiny() {
    return this->destiny;
}
void FlightBody::setDestiny(string destiny) {
    this->destiny = destiny;
}


int FlightBody::getNumberOfAvailableSeats() {
    return this->numberOfAvailableSeats;
}
void FlightBody::setNumberOfAvailableSeats(int numberOfAvailableSeats) {
    this->numberOfAvailableSeats = numberOfAvailableSeats;
}
