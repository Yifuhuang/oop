#ifndef AMOEBATICKETSTICKETS_H
#define AMOEBATICKETSTICKETS_H
#include <iostream>
#include <string>
#include "RecordStore.h"
#include "Amoeba.h"
using namespace std;

class AmoebaTickets: public Amoeba{

private:
int ticketsSold;          // and number of tickets sold so far should be initialised to zero



public:

AmoebaTickets();           // just use the corresponding base class constructor
AmoebaTickets(string n);  // creates the record store with name n 

void sellTicket();        // increments the number of tickets sold  
int get_ticketsSold();        // gets the number of tickets sold




};
#endif
