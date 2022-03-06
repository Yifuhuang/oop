
// Sums together all positive numbers and returns them
double average(int array[], int n) {
    double avg = 0.0, total =0.0;
    if(n>=1){
    
    for (int i = 0; i < n; i++) {
        total += array[i];
        }
    avg = total / n;
    }
    return avg;
}

 