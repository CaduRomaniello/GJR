#include "../includes/containerImpl.h"
#include "../includes/airplaneImpl.h"
#include "../includes/flightImpl.h"
#include "../includes/ticketImpl.h"

Container* ContainerHandle::container = NULL;

Container* Container::getContainer(){
    return ContainerHandle::getContainer();
}

ContainerBody::ContainerBody(){}
ContainerBody::~ContainerBody(){}


Airplane* ContainerBody::createAirplane(string model, string manufacturer, string registration, string pilot, string copilot, int capacity){

    QSqlQuery query;

    query.exec("select * from airplane where registration='"+QString::fromStdString(registration)+"'");

    int count = 0;
    while(query.next()){
        count++;
    }

    if (count == 0){
        query.prepare("insert into airplane (model, manufacturer, registration, pilot, copilot, capacity) values (?, ?, ?, ?, ?, ?)");
        query.addBindValue(QString::fromStdString(model));
        query.addBindValue(QString::fromStdString(manufacturer));
        query.addBindValue(QString::fromStdString(registration));
        query.addBindValue(QString::fromStdString(pilot));
        query.addBindValue(QString::fromStdString(copilot));
        query.addBindValue(capacity);
        query.exec();

        Airplane* a = new AirplaneHandle(0, model, manufacturer, registration, pilot, copilot, capacity);
        return a;
    }
    else{
        return NULL;
    }

}
void ContainerBody::deleteAirplane(string registration){
    QSqlQuery query1, query2, query3;
    query1.exec("select * from airplane where registration='"+QString::fromStdString(registration)+"'");
    query1.first();
    int idAirplane = query1.value(0).toInt();

    query2.prepare("select * from flight where idAirplane = ?");
    query2.addBindValue(idAirplane);
    query2.exec();
    int count = 0;
    while(query2.next()){
        int idFlight = query2.value(0).toInt();
        this->deleteFlight(idFlight);
        count += 1;
    }

    query3.prepare("DELETE FROM airplane WHERE registration=?");
    query3.addBindValue(QString::fromStdString(registration));
    query3.exec();
}
Airplane* ContainerBody::readAirplane(string registration){
    QSqlQuery query;

    query.exec("select * from airplane where registration='"+QString::fromStdString(registration)+"'");

    int count = 0;
    while(query.next()){
        count++;
    }

    if (count == 0){
        return NULL;
    }
    else{
        query.first();
        int id = query.value(0).toInt();
        string model = query.value(1).toString().toStdString();
        string manufacturer = query.value(2).toString().toStdString();
        string registration = query.value(3).toString().toStdString();
        string pilot = query.value(4).toString().toStdString();
        string copilot = query.value(5).toString().toStdString();
        int capacity = query.value(6).toInt();
        return new AirplaneHandle(id, model, manufacturer, registration, pilot, copilot, capacity);
    }
}
void ContainerBody::updateAirplane(string model, string manufacturer, string registration, string pilot, string copilot){
    QSqlQuery query;
    query.prepare("UPDATE airplane SET model = ?, manufacturer = ?, pilot = ?, copilot = ? WHERE registration = ?");
    query.addBindValue(QString::fromStdString(model));
    query.addBindValue(QString::fromStdString(manufacturer));
    query.addBindValue(QString::fromStdString(pilot));
    query.addBindValue(QString::fromStdString(copilot));
    query.addBindValue(QString::fromStdString(registration));
    query.exec();
}


Flight* ContainerBody::createFlight(string registration, string time, string date, string origin, string destiny){

    QSqlQuery query;
    query.prepare("select * from airplane where registration = ?");
    query.addBindValue(QString::fromStdString(registration));
    query.exec();
    int count = 0;
    while (query.next()){
        count++;
    }
    if (count > 0){
        query.first();
    }
    else{
        return NULL;
    }

    int availableSeats = query.value(6).toInt();
    int id = query.value(0).toInt();

    query.prepare("select * from flight where idAirplane = ?");
    query.addBindValue(id);
    query.exec();

    count = 0;
    bool isEqual = false;
    while(query.next()){
        if ((query.value(1).toString().toStdString() == time) && (query.value(2).toString().toStdString() == date)){
            isEqual = true;
            break;
        }
        count++;
    }

    if (!isEqual){
        query.prepare("insert into flight (time, date, idAirplane, origin, destiny, numberOfAvailableSeats) values (?, ?, ?, ?, ?, ?)");
        query.addBindValue(QString::fromStdString(time));
        query.addBindValue(QString::fromStdString(date));
        query.addBindValue(id);
        query.addBindValue(QString::fromStdString(origin));
        query.addBindValue(QString::fromStdString(destiny));
        query.addBindValue(availableSeats);
        query.exec();

        Flight* f = new FlightHandle(0, time, date, id, origin, destiny, availableSeats);
        return f;
    }
    else{
        return NULL;
    }


    //query.prepare("insert into flight (time, date, idAirplane, origin, destiny, numberOfAvailableSeats) values (?, ?, ?, ?, ?, ?)");
    //query.addBindValue(QString::fromStdString(time));
    //query.addBindValue(QString::fromStdString(date));
    //query.addBindValue(id);
    //query.addBindValue(QString::fromStdString(origin));
    //query.addBindValue(QString::fromStdString(destiny));
    //query.addBindValue(availableSeats);
    //query.exec();

    //Flight* f = new FlightHandle(0, time, date, id, origin, destiny, availableSeats);
    //return f;

}
void ContainerBody::deleteFlight(int id){

    QSqlQuery query;

    query.prepare("select * from ticket where idFlight = ?");
    query.addBindValue(id);
    query.exec();
    int count = 0;
    while(query.next()){
        int idTicket = query.value(0).toInt();
        this->deleteTicket(idTicket);
        count += 1;
    }

    query.prepare("DELETE FROM flight WHERE id = ?");
    query.addBindValue(id);
    query.exec();

}
Flight* ContainerBody::readFlight(int id){
    QSqlQuery query;

    query.prepare("select * from flight where id = ?");
    query.addBindValue(id);
    query.exec();

    int count = 0;
    while(query.next()){
        count++;
    }

    if (count == 0){
        return NULL;
    }
    else{
        query.first();
        int id = query.value(0).toInt();
        string time = query.value(1).toString().toStdString();
        string date = query.value(2).toString().toStdString();
        int idAirplane = query.value(3).toInt();
        string origin = query.value(4).toString().toStdString();
        string destiny = query.value(5).toString().toStdString();
        int numberOfAvailableSeats = query.value(6).toString().toInt();
        return new FlightHandle(id, time, date, idAirplane, origin, destiny, numberOfAvailableSeats);
    }
}
void ContainerBody::updateFlight(int id, string time, string date, string origin, string destiny){
    QSqlQuery query;
    query.prepare("UPDATE flight SET time = ?, date = ?, origin = ?, destiny = ? WHERE id = ?");
    query.addBindValue(QString::fromStdString(time));
    query.addBindValue(QString::fromStdString(date));
    query.addBindValue(QString::fromStdString(origin));
    query.addBindValue(QString::fromStdString(destiny));
    query.addBindValue(id);
    query.exec();
}


Ticket* ContainerBody::createTicket(int idFlight, string passengerName, int seat){
    QSqlQuery query;
    query.prepare("select * from flight where id = ?");
    query.addBindValue(idFlight);
    query.exec();
    int count = 0;
    while (query.next()){
        count++;
    }
    if (count > 0){
        query.first();
    }
    else{
        return NULL;
    }

    string time = query.value(1).toString().toStdString();
    string date = query.value(2).toString().toStdString();
    string origin = query.value(4).toString().toStdString();
    string destiny = query.value(5).toString().toStdString();

    query.prepare("insert into ticket (idFlight, passengerName, seat, time, date, origin, destiny) values (?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(idFlight);
    query.addBindValue(QString::fromStdString(passengerName));
    query.addBindValue(seat);
    query.addBindValue(QString::fromStdString(time));
    query.addBindValue(QString::fromStdString(date));
    query.addBindValue(QString::fromStdString(origin));
    query.addBindValue(QString::fromStdString(destiny));
    query.exec();

    Ticket* t = new TicketHandle(0, idFlight, passengerName, seat, time, date, origin, destiny);
    return t;
}
void ContainerBody::deleteTicket(int id){
    QSqlQuery query;

    query.prepare("DELETE FROM ticket WHERE id = ?");
    query.addBindValue(id);
    query.exec();
}
Ticket* ContainerBody::readTicket(int id){
    QSqlQuery query;

    query.prepare("select * from ticket where id = ?");
    query.addBindValue(id);
    query.exec();

    int count = 0;
    while(query.next()){
        count++;
    }

    if (count == 0){
        return NULL;
    }
    else{
        query.first();
        int id = query.value(0).toInt();
        int idFlight = query.value(1).toInt();
        string passenger = query.value(2).toString().toStdString();
        int seat = query.value(3).toInt();
        string time = query.value(4).toString().toStdString();
        string date = query.value(5).toString().toStdString();
        string origin = query.value(6).toString().toStdString();
        string destiny = query.value(7).toString().toStdString();
        return new TicketHandle(id, idFlight, passenger, seat, time, date, origin, destiny);
    }
}
void ContainerBody::updateTicket(int id, string passengerName, int seat){
    QSqlQuery query;
    query.prepare("UPDATE ticket SET passengerName = ?, seat = ? WHERE id = ?");
    query.addBindValue(QString::fromStdString(passengerName));
    query.addBindValue(seat);
    query.addBindValue(id);
    query.exec();
}
