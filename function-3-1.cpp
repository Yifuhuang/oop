#include<iostream>

int count_numbers_in_range(int vals[], int length, int bottom, int top){
int count=0;
for(int i=0;i<length;i++){

    if(vals[i]>=bottom&&vals[i]<=top){
        count++;
    }
}

return count;



}