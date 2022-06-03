
#ifndef AMOEBA_H
#define AMOEBA_H
#include <iostream>
#include <string>
#include "RecordStore.h"
using namespace std;
class Amoeba: public RecordStore{


protected:
int storeID;                 // unique id for the store

static int amoebaBranch;
public:
Amoeba(string a);

int get_excessSales();

void set_storeID(int s);

int get_storeID();

void set_amoebaBranch(int a);

int get_amoebaBranch();

};
#endif
