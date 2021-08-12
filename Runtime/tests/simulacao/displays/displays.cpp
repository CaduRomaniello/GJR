#include <iostream>
#include "displays.h"
using namespace std;

void displayHomePage(){
    printf(" ____________________ GJR Airlines _____________________\n");
    printf("|                                                       |\n");
    printf("|                   [0] -> Airplanes                    |\n");
    printf("|                   [1] -> Flights                      |\n");
    printf("|                   [2] -> Tickets                      |\n");
    printf("|                   [3] -> Exit                         |\n");
    printf("|                                                       |\n");
    printf("|_______________________________________________________|\n\n");
}

void displayAirplanePage(){
    printf(" ____________________ GJR Airlines _____________________\n");
    printf("|                                                       |\n");
    printf("|   [0] -> Create airplane                              |\n");
    printf("|   [1] -> Remove airplane                              |\n");
    printf("|   [2] -> View airplane                                |\n");
    printf("|   [3] -> Update airplane (unavailable in this example)|\n");
    printf("|   [4] -> Voltar                                       |\n");
    printf("|                                                       |\n");
    printf("|_______________________________________________________|\n\n");
}

void displayFlightPage(){
    printf(" ____________________ GJR Airlines _____________________\n");
    printf("|                                                       |\n");
    printf("|   [0] -> Create flight                                |\n");
    printf("|   [1] -> Remove flight                                |\n");
    printf("|   [2] -> View flight                                  |\n");
    printf("|   [3] -> Update flight (unavailable in this example)  |\n");
    printf("|   [4] -> Voltar                                       |\n");
    printf("|                                                       |\n");
    printf("|_______________________________________________________|\n\n");
}

void displayTicketPage(){
    printf(" ____________________ GJR Airlines _____________________\n");
    printf("|                                                       |\n");
    printf("|   [0] -> Create ticket                                |\n");
    printf("|   [1] -> Remove ticket                                |\n");
    printf("|   [2] -> View ticket                                  |\n");
    printf("|   [3] -> Update ticket (unavailable in this example)  |\n");
    printf("|   [4] -> Voltar                                       |\n");
    printf("|                                                       |\n");
    printf("|_______________________________________________________|\n\n");
}

void displayCreateAirplane(Container* c){

    string model;
    string manufacturer;
    string registration;
    string pilot;
    string copilot;
    int capacity;

    printf("Enter airplane model: ");
    getline(cin, model);
    printf("Enter airplane manufacturer: ");
    getline(cin, manufacturer);
    printf("Enter airplane registration: ");
    getline(cin, registration);
    printf("Enter airplane pilot name: ");
    getline(cin, pilot);
    printf("Enter airplane copilot name: ");
    getline(cin, copilot);
    printf("Enter airplane capacity: ");
    scanf("%d\n", capacity);

    c->createAirplane(model, manufacturer, registration, pilot, copilot, capacity);

}

void displayCreateFlight(Container* c){

    string registration;
    string time;
    string date;
    string origin;
    string destiny;

    printf("Enter flight's airplane registration: ");
    getline(cin, registration);
    printf("Enter flight time: ");
    getline(cin, time);
    printf("Enter flight date: ");
    getline(cin, date);
    printf("Enter flight origin: ");
    getline(cin, origin);
    printf("Enter flight destiny: ");
    getline(cin, destiny);

    c->createFlight(registration, time, date, origin, destiny);
}

void displayCreateTicket(Container* c){

    int flightId;
    string passengerName;
    string seat;
    string time;
    string date;
    
    printf("Enter ticket's flight identifier: ");
    scanf("%d\n", flightId);
    printf("Enter ticket's passenger name: ");
    getline(cin, passengerName);
    printf("Enter ticket seat: ");
    getline(cin, seat);
    printf("Enter ticket's time: ");
    getline(cin, time);
    printf("Enter ticket's date: ");
    getline(cin, date);

    c->createTicket(flightId, passengerName, seat, time, date);

}

void displayDeleteAirplane(Container* c){
    string registration;

    printf("Inform the registration of the airplane you want to delete: ");
    getline(cin, registration);

    c->deleteAirplane(registration);
}

void displayDeleteFlight(Container* c){
    int id;

    printf("Inform the id of the flight you want to delete: ");
    scanf("%d\n", id);

    c->deleteFlight(id);
}

void displayDeleteTicket(Container* c){
    int id;

    printf("Inform the id of the ticket you want to delete: ");
    scanf("%d\n", id);

    c->deleteTicket(id);
}

void displayShowAirplane(Container* c){
    string registration;
    printf("Inform the registration of the required airplane: ");
    getline(cin, registration);

    c->printAirplane(registration);
}

void displayShowFlight(Container* c){
    int id;
    printf("Inform the id of the required flight: ");
    scanf("%d\n", id);

    c->printFlight(id);
}

void displayShowTicket(Container* c){
    int id;
    printf("Inform the id of the required ticket: ");
    scanf("%d\n", id);

    c->printTicket(id);
}
