
// Sums together all positive numbers and returns them
int count(int array[], int n, int number) {
    int total = 0;
   if(n>=1){
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            total += 1;
        }
    }
   }
    return total;
}

