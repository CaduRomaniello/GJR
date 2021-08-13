#ifndef MAIN_UNIT_TESTS
#define MAIN_UNIT_TESTS

#include "unit_airplane.h"
#include "unit_container.h"
#include "unit_flight.h"
#include "unit_ticket.h"
#include <cassert>

#define DEBUGING
#ifdef  DEBUGING
    int numHandleCreated = 0;
    int numHandleDeleted = 0;
    int numBodyCreated   = 0;
    int numBodyDeleted   = 0;
#endif

int main(){


    cout << "\n========== Unit test for Ticket Class ===========\n" << endl;
    run_unit_tests_ticket();
    assert(numBodyCreated == numBodyDeleted);
    assert(numHandleCreated == numHandleDeleted);

    cout << "\n========== Unit test for Flight Class ===========\n" << endl;
    run_unit_tests_flight();    
    assert(numBodyCreated == numBodyDeleted);
    assert(numHandleCreated == numHandleDeleted);

    cout << "\n========== Unit test for Airplane Class ===========\n" << endl;
    run_unit_tests_airplane();
    assert(numBodyCreated == numBodyDeleted);
    assert(numHandleCreated == numHandleDeleted);

    cout << "\n========== Unit test for Container Class ===========\n" << endl;
    run_unit_tests_container();
    assert(numBodyCreated == numBodyDeleted);
    assert(numHandleCreated == numHandleDeleted);
    cout << "\n========================================================\n" << endl;


    return 0;
}

#endif