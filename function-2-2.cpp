#include <iostream>
int binary_to_number(int binary[], int n) {
    int ten = 0,a=0;
while(a<n){
    ten=ten*2;
    ten+=binary[a];
    a++;

    }
    return ten;
}