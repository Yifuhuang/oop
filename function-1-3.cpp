#include <iostream>
// Sums together all positive numbers and returns them
void count_numbers(int array[4][4]) {
    
    int ct0=0, ct1=0, ct2=0, ct3=0, ct4=0, ct5=0, ct6=0, ct7=0, ct8=0, ct9=0;
    
    for (int i = 0; i < 4; i++) {
        for(int j =0; j < 4; j++){
            switch (array[i][j]){
            case 0: ct0+=1; break;
            case 1: ct1+=1; break;
            case 2: ct2+=1; break;
            case 3: ct3+=1; break;
            case 4: ct4+=1; break;
            case 5: ct5+=1; break;
            case 6: ct6+=1; break;
            case 7: ct7+=1; break;
            case 8: ct8+=1; break;
            case 9: ct9+=1; break;
            }

        }
       }
   
    std::cout<<"0:"<<ct0 <<";1:"<<ct1<<";2:"<<ct2 <<";3:"<<ct3<<";4:"<<ct4<<";5:"<<ct5 <<";6:"<<ct6<<";7:"<<ct7 <<";8:"<<ct8<<";9:"<<ct9 <<";"<<std::endl;
}

