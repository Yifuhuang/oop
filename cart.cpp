#include <iostream>
#include "meerkat.h"
#include "cart.h"

using namespace std;


cart::cart(){
   num = 4;
}

bool cart::addMeerkat(meerkat cat)
{
   if(num < 1){

       return false;
   }
   
       if(num==4){
           meerkat1 = cat;
           num=num-1;
           return true;
	   }
       if(num==3){
           meerkat2 = cat;
           num=num-1;
           return true;
	   }
       if(num==2){
           meerkat3 = cat;
           num=num-1;
           return true;
	   }
       if(num==1){
           meerkat4 = cat;
           num=num-1;
           return true;
           }
  return true;
}

void cart::emptyCart(){
   num = 4;
}


void cart::printMeerkats()
{
   if(num == 0)
   {
       cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
       cout << meerkat2.getName() << " " << meerkat2.getAge() << endl;
       cout << meerkat3.getName() << " " << meerkat3.getAge() << endl;
       cout << meerkat4.getName() << " " << meerkat4.getAge() << endl;
   }
   if(num == 1)
   {
       cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
       cout << meerkat2.getName() << " " << meerkat2.getAge() << endl;
       cout << meerkat3.getName() << " " << meerkat3.getAge() << endl;

   }
   if(num == 2)
   {
       cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
       cout << meerkat2.getName() << " " << meerkat2.getAge() << endl;

   }
   if(num == 3)
   {
       cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
   }
  
}


cart::~cart(){
}