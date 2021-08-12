#include "../../src/includes/container.h"
#include "functional.h"

using namespace std;

int main(){

    Container* container = Container::getContainer();
    Container* container2 = Container::getContainer();
    assert(container == container2);

    Airplane* a = container->createAirplane("modelo1", "empresa1", "123", "ze", "pedro", 5);
    assert(a->getAirplaneIdentifier() == 0);
    assert(a->getModel() == "modelo1");
    assert(a->getManufacturer() == "empresa1");
    assert(a->getRegistration() == "123");
    assert(a->getPilot() == "ze");
    assert(a->getCoPilot() == "pedro");
    assert(a->getCapacity() == 5);

    Flight* f = container->createFlight("123", "13:30", "01/01/2022", "Mirassol", "Ouro Preto");
    assert(f->getFlightIdentifier() == 0);
    assert(f->getIdAirplane() == 0);
    assert(f->getAvailableSeats() == 5);
    assert(f->getDate() == "01/01/2022");
    assert(f->getTime() == "13:30");
    assert(f->getOrigin() == "Mirassol");
    assert(f->getDestiny() == "Ouro Preto");

    Ticket* t = container->createTicket(0, "joao", "1", "13:30", "01/01/2022");
    assert(t->getDate() == "01/01/2022");
    assert(t->getIdFlight() == 0);
    assert(t->getPassengerName() == "joao");
    assert(t->getSeat() == "1");
    assert(t->getTicketIdentifier() == 0);
    assert(t->getTime() == "13:30");

    return 0;

}