#include <iostream>
#include <stdio.h>
int binary_to_number(int binary[], int n) {
    int ten = 0,a=0,i=(n-1);
while(a<n){
    ten=ten*2;
    ten=ten+binary[a];
    a++;

    }
    return ten;
}
