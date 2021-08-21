#include "unit_airplane.h"
#include <cassert>


void unit_airplane_constructor(){

    cout << "TEST  1 - Default Airplane constructor test";
    
    Airplane* airplane1 = new AirplaneHandle();

    // Making assertion to verify if all properties were initialized with the default data.
    assert(airplane1->getId() == -1);
    assert(airplane1->getModel() == "");
    assert(airplane1->getManufacturer() == "");
    assert(airplane1->getRegistration() == "");
    assert(airplane1->getPilot() == "");
    assert(airplane1->getCopilot() == "");
    assert(airplane1->getCapacity() == 0);

    delete airplane1;

    cout << " - [" << "OK!" << "]" << endl;
    cout << "TEST  2 - Airplane constructor test";
    
    Airplane* airplane2 = new AirplaneHandle(1, "Test Airplane", "Test Manufacturer", "PP-ETY", "Test Pilot", "Test Copilot", 327);

    // Making assertion to verify if all properties were initialized with the parameter specified.
    assert(airplane2->getId() == 1);
    assert(airplane2->getModel() == "Test Airplane");
    assert(airplane2->getManufacturer() == "Test Manufacturer");
    assert(airplane2->getRegistration() == "PP-ETY");
    assert(airplane2->getPilot() == "Test Pilot");
    assert(airplane2->getCopilot() == "Test Copilot");
    assert(airplane2->getCapacity() == 327);

    delete airplane2;
    
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_airplane_destructor(){}

void unit_airplane_setAirplaneIdentifier(){

    cout << "TEST  3 - Set Airplane Identifier test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify identifier
    assert(airplane->getId() == -1);
    airplane->setId(2);
    assert(airplane->getId() == 2);

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_airplane_getAirplaneIdentifier(){

    cout << "TEST  4 - Get Airplane Identifier test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify identifier
    assert(airplane->getId() == -1);

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_airplane_setModel(){

    cout << "TEST  5 - Set Airplane Model test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify model
    assert(airplane->getModel() == "");
    airplane->setModel("Test Airplane Model");
    assert(airplane->getModel() == "Test Airplane Model");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_airplane_getModel(){

    cout << "TEST  6 - Get Airplane Model test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify model
    assert(airplane->getModel() == "");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_airplane_setManufacturer(){

    cout << "TEST  7 - Set Airplane Manufacturer test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify manufacturer
    assert(airplane->getManufacturer() == "");
    airplane->setManufacturer("Test Airplane Manufacturer");
    assert(airplane->getManufacturer() == "Test Airplane Manufacturer");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_airplane_getManufacturer(){

    cout << "TEST  8 - Get Airplane Manufacturer test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify manufacturer
    assert(airplane->getManufacturer() == "");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_airplane_setRegistration(){

    cout << "TEST  9 - Set Airplane Registration test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify registration
    assert(airplane->getRegistration() == "");
    airplane->setRegistration("PP-ETS");
    assert(airplane->getRegistration() == "PP-ETS");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_airplane_getRegistration(){

    cout << "TEST 10 - Get Airplane Registration test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify registration
    assert(airplane->getRegistration() == "");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_airplane_setPilot(){

    cout << "TEST 11 - Set Airplane Pilot test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify pilot
    assert(airplane->getPilot() == "");
    airplane->setPilot("Test Pilot");
    assert(airplane->getPilot() == "Test Pilot");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_airplane_getPilot(){

    cout << "TEST 12 - Get Airplane Pilot test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify pilot
    assert(airplane->getPilot() == "");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_airplane_setCopilot(){

    cout << "TEST 13 - Set Airplane Copilot test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify copilot
    assert(airplane->getCopilot() == "");
    airplane->setCopilot("Test Copilot");
    assert(airplane->getCopilot() == "Test Copilot");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_airplane_getCopilot(){

    cout << "TEST 14 - Get Airplane Copilot test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify copilot
    assert(airplane->getCopilot() == "");

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}

void unit_airplane_setCapacity(){

    cout << "TEST 15 - Set Airplane Capacity test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify capacity
    assert(airplane->getCapacity() == 0);
    airplane->setCapacity(327);
    assert(airplane->getCapacity() == 327);

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}
void unit_airplane_getCapacity(){

    cout << "TEST 16 - Get Airplane Capacity test";

    Airplane* airplane = new AirplaneHandle();

    // Make assertion to verify capacity
    assert(airplane->getCapacity() == 0);

    delete airplane;
    cout << " - [" << "OK!" << "]" << endl;

}

void run_unit_tests_airplane(){

    unit_airplane_constructor();
    unit_airplane_destructor();
    unit_airplane_setAirplaneIdentifier();
    unit_airplane_getAirplaneIdentifier();
    unit_airplane_setModel();
    unit_airplane_getModel();
    unit_airplane_setManufacturer();
    unit_airplane_getManufacturer();
    unit_airplane_setRegistration();
    unit_airplane_getRegistration();
    unit_airplane_setPilot();
    unit_airplane_getPilot();
    unit_airplane_setCopilot();
    unit_airplane_getCopilot();
    unit_airplane_setCapacity();
    unit_airplane_getCapacity();

}