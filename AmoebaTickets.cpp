#include "AmoebaTickets.h"    
#include "RecordStore.h"
#include "Amoeba.h"
AmoebaTickets::AmoebaTickets():Amoeba(" "){

}

AmoebaTickets::AmoebaTickets(string n):Amoeba(" "){
    ticketsSold=0;
    name=n;
    set_name(n);
}

void AmoebaTickets::sellTicket(){
    ticketsSold++;
}

int AmoebaTickets::get_ticketsSold(){

    return ticketsSold;
}
