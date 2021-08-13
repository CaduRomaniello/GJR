#include "../includes/containerImpl.h"
#include "../includes/airplaneImpl.h"
#include "../includes/flightImpl.h"
#include "../includes/ticketImpl.h"

Container* ContainerHandle::container = NULL;

Container* Container::getContainer(){
    return ContainerHandle::getContainer();
}

int ContainerBody::countAirplanes = 0;
int ContainerBody::countFlights = 0;
int ContainerBody::countTickets = 0;

ContainerBody::airplaneIterator ContainerBody::beginAirplanes(){
    return this->airplanes.begin();
}
ContainerBody::airplaneIterator ContainerBody::endAirplanes(){
    return this->airplanes.end();
}
ContainerBody::flightIterator ContainerBody::beginFlights(){
    return this->flights.begin();
}
ContainerBody::flightIterator ContainerBody::endFlights(){
    return this->flights.end();
}
ContainerBody::ticketIterator ContainerBody::beginTickets(){
    return this->tickets.begin();
}
ContainerBody::ticketIterator ContainerBody::endTickets(){
    return this->tickets.end();
}


ContainerBody::ContainerBody(){}
ContainerBody::~ContainerBody(){
    airplaneIterator itrA;
    for (itrA = beginAirplanes(); itrA != endAirplanes(); ++itrA){
        delete (itrA->second);
    }
    airplanes.clear();

    flightIterator itrF;
    for (itrF = beginFlights(); itrF != endFlights(); ++itrF){
        delete (itrF->second);
    }
    flights.clear();

    ticketIterator itrT;
    for (itrT = beginTickets(); itrT != endTickets(); ++itrT){
        delete (itrT->second);
    }
    tickets.clear();
}


Airplane* ContainerBody::createAirplane(string model, string manufacturer, string registration, string pilot, string copilot, int capacity){
    bool hasCopy = false;

    if (registration == ""){
        // cout << "Impossible to create airplane. Invalid registration!" << endl;
        return NULL;
    }

    airplaneIterator itr;
    for (itr = beginAirplanes(); itr != endAirplanes(); ++itr){
        if(itr->second->getRegistration() == registration){
            hasCopy = true;
            break;
        }
    }  

    if (hasCopy)  {
        // cout << "Impossible to create airplane. Airplane already registered!" << endl;
        return NULL;
    }
    else{
        // string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0
        // int id = -1, string model="", string manufacturer="", string registration="", string pilot="", string copilot="", int capacity=0
        Airplane* a = new AirplaneHandle(ContainerBody::countAirplanes, model, manufacturer, registration, pilot, copilot, capacity);
        airplanes.insert(pair<int, Airplane*>(ContainerBody::countAirplanes, a));
        ContainerBody::countAirplanes++;
        return a;
    }
}
void ContainerBody::deleteAirplane(string registration){
    if (registration == ""){
        // cout << "Impossible to delete airplane. Invalid registration!" << endl;
        return;
    }

    int key = -1;
    Container::airplaneIterator itr;
    for (itr = beginAirplanes(); itr != endAirplanes(); ++itr){
        if(itr->second->getRegistration() == registration){
            key = itr->first;
            break;
        }
    }  

    if (key == -1){
        // cout << "Can't find airplane!" << endl;
    }
    else{
        itr = airplanes.find(key);
        delete(itr->second);
        airplanes.erase(itr);
    }
}
Airplane* ContainerBody::readAirplane(string registration){
    if (registration == ""){
        // cout << "Impossible to read airplane. Invalid registration!" << endl;
        return NULL;
    }

    int key = -1;
    Container::airplaneIterator itr;
    for (itr = beginAirplanes(); itr != endAirplanes(); ++itr){
        if(itr->second->getRegistration() == registration){
            key = itr->first;
            break;
        }
    }  

    if (key == -1){
        // cout << "Can't find airplane!" << endl;
        return NULL;
    }
    else{
        itr = airplanes.find(key);
        return itr->second;
    }
}
void ContainerBody::updateAirplane(string model, string manufacturer, string registration, string pilot, string copilot){
    if (registration == ""){
        // cout << "Impossible to update airplane. Invalid registration!" << endl;
        return;
    }

    int key = -1;
    Container::airplaneIterator itr;
    for (itr = beginAirplanes(); itr != endAirplanes(); ++itr){
        if(itr->second->getRegistration() == registration){
            key = itr->first;
            break;
        }
    }  

    if (key == -1){
        // cout << "Can't find airplane!" << endl;
    }
    else{
        itr = airplanes.find(key);
        Airplane* a = itr->second;

        if (model != ""){
            a->setModel(model);
        }
        if (manufacturer != ""){
            a->setManufacturer(manufacturer);
        }
        if (pilot != ""){
            a->setPilot(pilot);
        }
        if (copilot != ""){
            a->setCopilot(copilot);
        }

        // cout << "Airplane updated succesfuly!" << endl;
    }
}


Flight* ContainerBody::createFlight(string registration, string time, string date, string origin, string destiny){
    bool hasCopy = false;
    int positionInTable = -1;

    if (registration == ""){
        // cout << "Impossible to create flight. Invalid airplane registration!" << endl;
        return NULL;
    }

    airplaneIterator itr;
    for (itr = beginAirplanes(); itr != endAirplanes(); ++itr){
        if(itr->second->getRegistration() == registration){
            positionInTable = itr->first;
            break;
        }
    }  

    if (positionInTable == -1){
        // cout << "Impossible to create flight. Can't find airplane!" << endl;
        return NULL;
    }

    Container::flightIterator itr2;
    for (itr2 = beginFlights(); itr2 != endFlights(); ++itr2){
        if(itr2->second->getTime() == time && itr2->second->getDate() == date && itr2->second->getIdAirplane() == positionInTable){
            hasCopy = true;
            break;
        }
    }  

    if (hasCopy)  {
        // cout << "Impossible to create flight. Flight already registered!" << endl;
        return NULL;
    }
    else{
        Airplane* a = airplanes.find(positionInTable)->second;
        Flight* f = new FlightHandle(ContainerBody::countFlights, time, date, positionInTable, origin, destiny, a->getCapacity());
        flights.insert(pair<int, Flight*>(ContainerBody::countFlights, f));
        ContainerBody::countFlights++;
        return f;
    }
}
void ContainerBody::deleteFlight(int id){
    if (id == -1){
        // cout << "Impossible to delete flight. Invalid flight identifier!" << endl;
        return;
    }

    bool findIt = false;
    flightIterator itr;
    for (itr = beginFlights(); itr != endFlights(); ++itr){
        if(itr->second->getId() == id){
            findIt = true;
            break;
        }
    }  

    if (!findIt){
        // cout << "Can't find flight!" << endl;
    }
    else{
        itr = flights.find(id);
        delete(itr->second);
        flights.erase(itr);
    }
}
Flight* ContainerBody::readFlight(int id){
    if (id == -1){
        // cout << "Impossible to read flight. Invalid flight identifier!" << endl;
        return NULL;
    }

    bool findIt = false;
    flightIterator itr;
    for (itr = beginFlights(); itr != endFlights(); ++itr){
        if(itr->second->getId() == id){
            findIt = true;
            break;
        }
    }  

    if (!findIt){
        // cout << "Can't find flight!" << endl;
        return NULL;
    }
    else{
        itr = flights.find(id);
        return itr->second;
    }
}
void ContainerBody::updateFlight(int id, string time, string date, string origin, string destiny){
    if (id == -1){
        // cout << "Impossible to update flight. Invalid flight identifier!" << endl;
        return;
    }

    bool findIt = false;
    flightIterator itr;
    for (itr = beginFlights(); itr != endFlights(); ++itr){
        if(itr->second->getId() == id){
            findIt = true;
            break;
        }
    }  

    if (!findIt){
        // cout << "Can't find flight!" << endl;
    }
    else{
        itr = flights.find(id);
        Flight* f = itr->second;

        if (time != ""){
            f->setTime(time);
        }
        if (date != ""){
            f->setDate(date);
        }
        if (origin != ""){
            f->setOrigin(origin);
        }
        if (destiny != ""){
            f->setDestiny(destiny);
        }

        // cout << "Flight updated succesfuly!" << endl;
    }
}


Ticket* ContainerBody::createTicket(int idFlight, string passengerName, int seat){
    bool hasCopy = false;
    int positionInTable = -1;

    if (idFlight == -1){
        // cout << "Impossible to create ticket. Invalid flight identifier!" << endl;
        return NULL;
    }

    flightIterator itr;
    for (itr = beginFlights(); itr != endFlights(); ++itr){
        if(itr->second->getId() == idFlight){
            positionInTable = itr->first;
            break;
        }
    }  

    if (positionInTable == -1){
        // cout << "Impossible to create ticket. Can't find flight!" << endl;
        return NULL;
    }

    Container::ticketIterator itr2;
    Flight* f = flights.find(positionInTable)->second;
    for (itr2 = beginTickets(); itr2 != endTickets(); ++itr2){
        if(itr2->second->getPassengerName() == passengerName && itr2->second->getTime() == f->getTime() && itr2->second->getDate() == f->getDate() && itr2->second->getSeat() == seat){
            hasCopy = true;
            break;
        }
    }  

    if (hasCopy)  {
        // cout << "Impossible to create ticket. Ticket already registered!" << endl;
        return NULL;
    }
    else{
        int idAirplane = f->getIdAirplane();
        Airplane* a = airplanes.find(idAirplane)->second;

        if (seat > a->getCapacity()){
            // cout << "Impossible to create ticket. Invalid seat!" << endl;
            return NULL;
        }

        if ((f->getNumberOfAvailableSeats() - 1) >= 0){
            Ticket* t = new TicketHandle(ContainerBody::countTickets, positionInTable, passengerName, seat, f->getTime(), f->getDate(), f->getOrigin(), f->getDestiny());
            tickets.insert(pair<int, Ticket*>(ContainerBody::countTickets, t));
            ContainerBody::countTickets++;
            return t;
        }
        else{
            // cout << "Impossible to create ticket. All seats are ocupied!" << endl;
            return NULL;
        }

    }
}
void ContainerBody::deleteTicket(int id){
    if (id == -1){
        // cout << "Impossible to delete ticket. Invalid ticket identifier!" << endl;
        return;
    }

    bool findIt = false;
    ticketIterator itr;
    for (itr = beginTickets(); itr != endTickets(); ++itr){
        if(itr->second->getId() == id){
            findIt = true;
            break;
        }
    }  

    if (!findIt){
        // cout << "Can't find ticket!" << endl;
    }
    else{
        itr = tickets.find(id);

        int flightId = itr->second->getIdFlight();
        Flight* f = flights.find(flightId)->second;
        f->setNumberOfAvailableSeats(f->getNumberOfAvailableSeats() + 1);

        delete(itr->second);
        tickets.erase(itr);
    }
}
Ticket* ContainerBody::readTicket(int id){
    if (id == -1){
        // cout << "Impossible to read ticket. Invalid ticket identifier!" << endl;
        return NULL;
    }

    bool findIt = false;
    ticketIterator itr;
    for (itr = beginTickets(); itr != endTickets(); ++itr){
        if(itr->second->getId() == id){
            findIt = true;
            break;
        }
    }  

    if (!findIt){
        // cout << "Can't find ticket!" << endl;
        return NULL;
    }
    else{
        itr = tickets.find(id);
        return itr->second;
    }
}
void ContainerBody::updateTicket(int id, string passengerName, int seat){
    if (id == -1){
        // cout << "Impossible to delete ticket. Invalid ticket identifier!" << endl;
        return;
    }

    bool findIt = false;
    ticketIterator itr;
    for (itr = beginTickets(); itr != endTickets(); ++itr){
        if(itr->second->getId() == id){
            findIt = true;
            break;
        }
    }  

    if (!findIt){
        // cout << "Can't find ticket!" << endl;
    }
    else{
        Ticket* t = tickets.find(id)->second;

        if (passengerName != ""){
            t->setPassengerName(passengerName);
        }
        if (seat != -1){
            Flight* f = flights.find(t->getIdFlight())->second;
            Airplane* a = airplanes.find(f->getIdAirplane())->second;

            if (seat <= a->getCapacity()){
                t->setSeat(seat);
            }
        }

        // cout << "Ticket updated succesfuly!" << endl;
    }
}