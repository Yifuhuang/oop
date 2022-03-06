
// Sums together all positive numbers and returns them
int sum_array(int array[], int n) {
    int total = 0;
    if(n>=1){
    
    for (int i = 0; i < n; i++) {
        total += array[i];
        }
    }
    return total;
}

