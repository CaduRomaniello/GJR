#include <stdlib.h>
#include "../../src/includes/container.h"
#include "displays/displays.h"

using namespace std;

void airplaneMenu(Container* c);
void flightMenu(Container* c);
void ticketMenu(Container* c);

int main(){

    Container* container = Container::getContainer();
    int opt = -1;

    while (opt != 3){

        displayHomePage();
        printf("Choose an option: ");
        scanf("%d\n", &opt);

        switch (opt)
        {
        case 0:
            airplaneMenu(container);
            system("CLS");
            break;
        
        case 1:
            flightMenu(container);
            system("CLS");
            break;
        
        case 2:
            ticketMenu(container);
            system("CLS");
            break;
        
        default:
            system("CLS");
            break;
        }
    }

    return 0;

}

void airplaneMenu(Container* c){
    int opt = -1;

    while (opt != 4){
        displayAirplanePage();
        printf("Choose an option: ");
        scanf("%d\n", &opt);

        switch (opt){
            case 0: // create
                displayCreateAirplane(c);
                system("CLS");
                opt = 4;
                break;
            
            case 1: // remove
                displayDeleteAirplane(c);
                system("CLS");
                opt = 4;
                break;
            
            case 2: // view
                system("CLS");
                opt = 4;
                break;
            
            case 3: // update
                system("CLS");
                opt = 4;
                break;
            
            default:
                system("CLS");
                break;
        }
    }
}

void flightMenu(Container* c){
    int opt = -1;

    while (opt != 4){
        displayFlightPage();
        printf("Choose an option: ");
        scanf("%d\n", &opt);

        switch (opt){
            case 0: // create
                displayCreateFlight(c);
                system("CLS");
                opt = 4;
                break;
            
            case 1: // remove
                displayDeleteFlight(c);
                system("CLS");
                opt = 4;
                break;
            
            case 2: // view
                system("CLS");
                opt = 4;
                break;
            
            case 3: // update
                system("CLS");
                opt = 4;
                break;
            
            default:
                system("CLS");
                break;
        }
    }
}

void ticketMenu(Container* c){
    int opt = -1;

    while (opt != 4){
        displayTicketPage();
        printf("Choose an option: ");
        scanf("%d\n", &opt);

        switch (opt){
            case 0: // create
                displayCreateTicket(c);
                system("CLS");
                opt = 4;
                break;
            
            case 1: // remove
                displayDeleteTicket(c);
                system("CLS");
                opt = 4;
                break;
            
            case 2: // view
                system("CLS");
                opt = 4;
                break;
            
            case 3: // update
                system("CLS");
                opt = 4;
                break;
            
            default:
                system("CLS");
                break;
        }
    }
}
