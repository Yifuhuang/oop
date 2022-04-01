#include<iostream>

int lookup_speeding_fine(int over){
int fine;
if(over<=0){
fine=0;
}

if(over<10&&over>0){
fine=180;
}

if(over<20&&over>=10){
fine=406;
}

if(over<30&&over>=20){
fine=825;
}

if(over<45&&over>=30){
fine=1500;
}

if(over>=45){
fine=1690;
}

return fine;
}