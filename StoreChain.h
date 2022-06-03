#ifndef STORECHAIN_H
#define STORECHAIN_H
#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include <iostream>
#include <string>
using namespace std;

class StoreChain{
private:
RecordStore** chains;


public:
StoreChain();

RecordStore **get_chain() ;

};
#endif