#include "Amoeba.h"   

int Amoeba::amoebaBranch=0;

Amoeba::Amoeba(string a):RecordStore("Amoeba",a,0){

storeID=amoebaBranch;
amoebaBranch++;


}

void Amoeba::set_storeID(int s){
    storeID=s;
}

int Amoeba::get_storeID(){
    return storeID;
}

void Amoeba::set_amoebaBranch(int a){
    amoebaBranch=a;
}

int Amoeba::get_amoebaBranch(){
    return amoebaBranch;
}

int Amoeba::get_excessSales(){

if(sales>1000||sales<0){

    return 0;
}else{
    return sales;
}



}