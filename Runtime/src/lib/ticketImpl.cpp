#include "../includes/ticketImpl.h"

TicketBody::TicketBody(int ticketIdentifier, int idFlight, string passengerName, string seat, string time, string date) : ticketIdentifier(ticketIdentifier), idFlight(idFlight), passengerName(passengerName), seat(seat), time(time), date(date) {}
TicketBody::~TicketBody() {}

void TicketBody::setTicketIdentifier(int ticketIdentifier) {
    this->ticketIdentifier = ticketIdentifier;
}

int TicketBody::getTicketIdentifier() const {
    return this->ticketIdentifier;
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

void TicketBody::setSeat(string seat) {
    this->seat = seat;
}

string TicketBody::getSeat() const {
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