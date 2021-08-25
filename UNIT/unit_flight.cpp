#include "unit_flight.h"
#include <cassert>

void unit_flight_constructor(){

    cout << "TEST  1 - Default Flight constructor test";
    
    Flight* flight1 = new FlightHandle();

    // Making assertion to verify if all properties were initialized with the default data.
    assert(flight1->getId() == -1);
    assert(flight1->getTime() == "");
    assert(flight1->getDate() == "");
    assert(flight1->getIdAirplane() == -1);
    assert(flight1->getOrigin() == "");
    assert(flight1->getDestiny() == "");
    assert(flight1->getNumberOfAvailableSeats() == 0);

    delete flight1;

    cout << " - [" << "OK!" << "]" << endl;
    cout << "TEST  2 - Flight constructor test";
    
    Flight* flight2 = new FlightHandle(1, "23:30", "11/08/2021", 1, "Belo Horizonte", "São Paulo", 327);

    // Making assertion to verify if all properties were initialized with the parameter specified.
    assert(flight2->getId() == 1);
    assert(flight2->getTime() == "23:30");
    assert(flight2->getDate() == "11/08/2021");
    assert(flight2->getIdAirplane() == 1);
    assert(flight2->getOrigin() == "Belo Horizonte");
    assert(flight2->getDestiny() == "São Paulo");
    assert(flight2->getNumberOfAvailableSeats() == 327);

    delete flight2;
    
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_flight_setFlightIdentifier(){

    cout << "TEST  3 - Set Flight Identifier test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify identifier
    assert(flight->getId() == -1);
    flight->setId(2);
    assert(flight->getId() == 2);

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_flight_getFlightIdentifier(){

    cout << "TEST  4 - Get Flight Identifier test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify identifier
    assert(flight->getId() == -1);

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_flight_setTime(){

    cout << "TEST  5 - Set Flight Time test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify time
    assert(flight->getTime() == "");
    flight->setTime("23:30");
    assert(flight->getTime() == "23:30");

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_flight_getTime(){

    cout << "TEST  6 - Get Flight Time test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify time
    assert(flight->getTime() == "");

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_flight_setDate(){

    cout << "TEST  7 - Set Flight Date test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify date
    assert(flight->getDate() == "");
    flight->setDate("11/08/2021");
    assert(flight->getDate() == "11/08/2021");

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_flight_getDate(){

    cout << "TEST  8 - Get Flight Date test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify date
    assert(flight->getDate() == "");

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_flight_setIdAirplane(){

    cout << "TEST  9 - Set Flight airplanes's ID test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify airplane's id
    assert(flight->getIdAirplane() == -1);
    flight->setIdAirplane(2);
    assert(flight->getIdAirplane() == 2);

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_flight_getIdAirplane(){

    cout << "TEST 10 - Get Flight airplanes's ID test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify airplane's id
    assert(flight->getIdAirplane() == -1);

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_flight_setOrigin(){

    cout << "TEST 11 - Set Flight Origin test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify origin
    assert(flight->getOrigin() == "");
    flight->setOrigin("Belo Horizonte");
    assert(flight->getOrigin() == "Belo Horizonte");

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_flight_getOrigin(){

    cout << "TEST 12 - Get Flight Origin test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify origin
    assert(flight->getOrigin() == "");

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_flight_setDestiny(){

    cout << "TEST 13 - Set Flight Destiny test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify destiny
    assert(flight->getDestiny() == "");
    flight->setDestiny("São Paulo");
    assert(flight->getDestiny() == "São Paulo");

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_flight_getDestiny(){

    cout << "TEST 14 - Get Flight Destiny test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify destiny
    assert(flight->getDestiny() == "");

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_flight_setAvailableSeats(){

    cout << "TEST 15 - Set Flight Available Seats test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify available seats
    assert(flight->getNumberOfAvailableSeats() == 0);
    flight->setNumberOfAvailableSeats(327);
    assert(flight->getNumberOfAvailableSeats() == 327);

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_flight_getAvailableSeats(){

    cout << "TEST 16 - Get Flight Available Seats test";

    Flight* flight = new FlightHandle();

    // Make assertion to verify available seats
    assert(flight->getNumberOfAvailableSeats() == 0);

    delete flight;
    cout << " - [" << "OK!" << "]" << endl;

}

void run_unit_tests_flight(){

    unit_flight_constructor();
    unit_flight_setFlightIdentifier();
    unit_flight_getFlightIdentifier();
    unit_flight_setTime();
    unit_flight_getTime();
    unit_flight_setDate();
    unit_flight_getDate();
    unit_flight_setIdAirplane();
    unit_flight_getIdAirplane();
    unit_flight_setOrigin();
    unit_flight_getOrigin();
    unit_flight_setDestiny();
    unit_flight_getDestiny();
    unit_flight_setAvailableSeats();
    unit_flight_getAvailableSeats();
    
}
