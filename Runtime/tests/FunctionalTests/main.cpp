#ifndef MAIN_FUNCIONAL_TESTS
#define MAIN_FUNCIONAL_TESTS

#include "functional.h"

#define DEBUGING
#ifdef  DEBUGING
    int numHandleCreated = 0;
    int numHandleDeleted = 0;
    int numBodyCreated   = 0;
    int numBodyDeleted   = 0;
#endif


int main(){

    cout << "\n========== Functional Tests  ==========\n" << endl;
    completeEnviromentUsage();
    cout << "Tests executed in a complex environment - [ OK ]" << endl;
    cout << "\n========================================\n" << endl;

    return 0;
}

#endif