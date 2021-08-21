#ifndef MAIN_UNIT_TESTS
#define MAIN_UNIT_TESTS

#include "unit_airplane.h"
#include "unit_container.h"
#include "unit_flight.h"
#include "unit_ticket.h"

#include <cassert>
#include <iostream>
using namespace std;

QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

int main(){

    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../UNIT/db_GJR.db";
    db.setDatabaseName(db_path);

    cout << "-> Verify DB in order to execute tests - ";
    bool opened = db.open();
    QSqlQuery query;
    query.exec("delete from airplane");
    query.exec("delete from sqlite_sequence where name='airplane'");
    query.exec("delete from flight");
    query.exec("delete from sqlite_sequence where name='flight'");
    query.exec("delete from ticket");
    query.exec("delete from sqlite_sequence where name='ticket'");
    assert(opened == true);
    cout << "[OK!] " << endl;

    cout << "\n========== Unit test for Ticket Class ===========\n" << endl;
    run_unit_tests_ticket();

    cout << "\n========== Unit test for Flight Class ===========\n" << endl;
    run_unit_tests_flight();    

    cout << "\n========== Unit test for Airplane Class ===========\n" << endl;
    run_unit_tests_airplane();

    cout << "\n========== Unit test for Container Class ===========\n" << endl;
    run_unit_tests_container();
    cout << "\n========================================================\n" << endl;


    // Clean DB
    db.open();
    query.exec("delete from airplane");
    query.exec("delete from sqlite_sequence where name='airplane'");
    query.exec("delete from flight");
    query.exec("delete from sqlite_sequence where name='flight'");
    query.exec("delete from ticket");
    query.exec("delete from sqlite_sequence where name='ticket'");
    db.close();

    return 0;

}

#endif
