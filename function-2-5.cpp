#include <iostream>
// Sums together all positive numbers and returns them
 bool descending(int array[], int n) {
    
    for (int i = 1; i < n; i++) {
        if (array[i] > array[i-1]) {
            return false;
            break;
        }else if(i==(n-1)){
            return true;
        }
    }

 }


