#include <iostream>
#include "meerkat.h"
#ifndef CART_H
#define CART_H
using namespace std;
#include <string>


class cart
{
   public:
       cart(); 
       meerkat meerkat1, meerkat2, meerkat3, meerkat4;
       int num;               
       bool addMeerkat(meerkat cat); 
       void emptyCart(); 
       void printMeerkats(); 
       ~cart();

};
#endif