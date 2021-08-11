#include "../includes/flightImpl.h"

FlightBody::FlightBody(int flightIdentifier, string time, string date, int idAirplane, string origin, string destiny, int availableSeats): flightIdentifier(flightIdentifier), time(time), date(date), idAirplane(idAirplane), origin(origin), destiny(destiny), availableSeats(availableSeats){}
FlightBody::~FlightBody(){}

int FlightBody::getFlightIdentifier() {
    return this->flightIdentifier;
}
void FlightBody::setFlightIdentifier(int flightIdentifier) {
    this->flightIdentifier = flightIdentifier;
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


int FlightBody::getAvailableSeats() {
    return this->availableSeats;
}
void FlightBody::setAvailableSeats(int availableSeats) {
    this->availableSeats = availableSeats;
}