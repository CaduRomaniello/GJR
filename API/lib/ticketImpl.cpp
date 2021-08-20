#include "../includes/ticketImpl.h"

TicketBody::TicketBody(int id, int idFlight, string passengerName, int seat, string time, string date, string origin, string destiny) : id(id), idFlight(idFlight), passengerName(passengerName), seat(seat), time(time), date(date), origin(origin), destiny(destiny) {}
TicketBody::~TicketBody() {}


void TicketBody::setId(int id) {
    this->id = id;
}
int TicketBody::getId() const {
    return this->id;
}


void TicketBody::setIdFlight(int idFlight) {
    this->idFlight = idFlight;
}
int TicketBody::getIdFlight() const {
    return this->idFlight;
}


void TicketBody::setPassengerName(string passengerName) {
    this->passengerName = passengerName;
}
string TicketBody::getPassengerName() const {
    return this->passengerName;
}


void TicketBody::setSeat(int seat) {
    this->seat = seat;
}
int TicketBody::getSeat() const {
    return this->seat;
}


void TicketBody::setTime(string time) {
    this->time = time;
}
string TicketBody::getTime() const {
    return this->time;
}


void TicketBody::setDate(string date) {
    this->date = date;
}
string TicketBody::getDate() const{
    return this->date;
}

void TicketBody::setOrigin(string origin) {
    this->origin = origin;
}
string TicketBody::getOrigin() const{
    return this->origin;
}

void TicketBody::setDestiny(string destiny) {
    this->destiny = destiny;
}
string TicketBody::getDestiny() const{
    return this->destiny;
}