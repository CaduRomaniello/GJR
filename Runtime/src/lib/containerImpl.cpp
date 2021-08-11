#include "../includes/container.h"

int Container::countAirplanes = 0;
int Container::countFlights = 0;
int Container::countTickets = 0;
Container* Container::container = NULL;

Container::airplaneIterator Container::beginAirplanes(){
    return this->airplanes.begin();
}
Container::airplaneIterator Container::endAirplanes(){
    return this->airplanes.end();
}
Container::flightIterator Container::beginFlights(){
    return this->flights.begin();
}
Container::flightIterator Container::endFlights(){
    return this->flights.end();
}
Container::ticketIterator Container::beginTickets(){
    return this->tickets.begin();
}
Container::ticketIterator Container::endTickets(){
    return this->tickets.end();
}

Container* Container::getContainer(){
    if (Container::container == NULL){
        Container::container = new Container();
    }

    return Container::container;
}

Container::~Container(){
    Container::airplaneIterator itr1;
    for (itr1 = beginAirplanes(); itr1 != endAirplanes(); ++itr1){
        delete(itr1->second);
    }

    Container::flightIterator itr2;
    for (itr2 = beginFlights(); itr2 != endFlights(); ++itr2){
        delete(itr2->second);
    }

    Container::ticketIterator itr3;
    for (itr3 = beginTickets(); itr3 != endTickets(); ++itr3){
        delete(itr3->second);
    }
}

Airplane* Container::createAirplane(string model="", string manufacturer="", string registration="", string pilot="", string coPilot="", int capacity=0){
    bool hasCopy = false;

    if (registration == ""){
        cout << "Impossible to create airplane. Registration is empty!" << endl;
        return NULL;
    }

    Container::airplaneIterator itr;
    for (itr = beginAirplanes(); itr != endAirplanes(); ++itr){
        if(itr->second->getRegistration() == registration){
            hasCopy = true;
            break;
        }
    }  

    if (hasCopy)  {
        cout << "Impossible to create airplane. Airplane already registered!" << endl;
        return NULL;
    }
    else{
        Airplane* a = new AirplaneHandle(Container::countAirplanes, model, manufacturer, registration, pilot, coPilot, capacity);
        airplanes.insert(pair<int, Airplane*>(Container::countAirplanes, a));
        Container::countAirplanes++;
        return a;
    }
}
void Container::removeAirplane(string registration=""){
    if (registration == ""){
        cout << "Impossible to delete airplane. Invalid registration!" << endl;
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
        cout << "Can't find airplane!" << endl;
    }
    else{
        itr = airplanes.find(key);
        delete(itr->second);
        airplanes.erase(itr);
    }
}


Flight* Container::createFlight(string registration = "", string time="", string date="", string origin="", string destiny=""){
    bool hasCopy = false;
    int positionInTable = -1;

    if (registration == ""){
        cout << "Impossible to create flight. Airplane registration is empty!" << endl;
        return NULL;
    }

    Container::airplaneIterator itr;
    for (itr = beginAirplanes(); itr != endAirplanes(); ++itr){
        if(itr->second->getRegistration() == registration){
            positionInTable = itr->first;
            break;
        }
    }  

    if (positionInTable == -1){
        cout << "Impossible to create flight. Can't find airplane!" << endl;
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
        cout << "Impossible to create flight. Flight already registered!" << endl;
        return NULL;
    }
    else{
        Airplane* airplane = airplanes.find(positionInTable)->second;
        Flight* a = new FlightHandle(Container::countFlights, time, date, positionInTable, origin, destiny, airplane->getCapacity());
        flights.insert(pair<int, Flight*>(Container::countFlights, a));
        Container::countFlights++;
        return a;
    }
}
void Container::deleteFlight(int flightIdentifier = -1){
    if (flightIdentifier == -1){
        cout << "Impossible to delete flight. Invalid flight identifier!" << endl;
        return;
    }

    bool findIt = false;
    Container::flightIterator itr;
    for (itr = beginFlights(); itr != endFlights(); ++itr){
        if(itr->second->getFlightIdentifier() == flightIdentifier){
            findIt = true;
            break;
        }
    }  

    if (!findIt){
        cout << "Can't find flight!" << endl;
    }
    else{
        itr = flights.find(flightIdentifier);
        delete(itr->second);
        flights.erase(itr);
    }
}


Ticket* Container::createTicket(int flightIdentifier = -1, string passengerName = "", string seat = "", string time = "", string date = ""){
    bool hasCopy = false;
    int positionInTable = -1;

    if (flightIdentifier == -1){
        cout << "Impossible to create ticket. Invalid flight identifier!" << endl;
        return NULL;
    }

    Container::flightIterator itr;
    for (itr = beginFlights(); itr != endFlights(); ++itr){
        if(itr->second->getFlightIdentifier() == flightIdentifier){
            positionInTable = itr->first;
            break;
        }
    }  

    if (positionInTable == -1){
        cout << "Impossible to create ticket. Can't find flight!" << endl;
        return NULL;
    }

    Container::ticketIterator itr2;
    for (itr2 = beginTickets(); itr2 != endTickets(); ++itr2){
        if(itr2->second->getPassengerName() == passengerName && itr2->second->getTime() == time && itr2->second->getDate() == date && itr2->second->getSeat() == seat){
            hasCopy = true;
            break;
        }
    }  

    if (hasCopy)  {
        cout << "Impossible to create ticket. Ticket already registered!" << endl;
        return NULL;
    }
    else{
        Flight* f = flights.find(positionInTable)->second;
        int availableSeats = f->getAvailableSeats();
        if ((availableSeats - 1) >= 0){
            Ticket* a = new TicketHandle(Container::countTickets, positionInTable, passengerName, seat, time, date);
            tickets.insert(pair<int, Ticket*>(Container::countTickets, a));
            Container::countTickets++;
            return a;
        }
        else{
            cout << "Impossible to create ticket. All seats are ocupied!" << endl;
            return NULL;
        }

    }
}
void Container::deleteFlight(int ticketIdentifier=-1){
    if (ticketIdentifier == -1){
        cout << "Impossible to delete ticket. Invalid ticket identifier!" << endl;
        return;
    }

    bool findIt = false;
    Container::ticketIterator itr;
    for (itr = beginTickets(); itr != endTickets(); ++itr){
        if(itr->second->getTicketIdentifier() == ticketIdentifier){
            findIt = true;
            break;
        }
    }  

    if (!findIt){
        cout << "Can't find ticket!" << endl;
    }
    else{
        itr = tickets.find(ticketIdentifier);
        delete(itr->second);
        tickets.erase(itr);
    }
}