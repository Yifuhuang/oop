
// Sums together all positive numbers and returns them
int count_even(int number) {
    int total = 0;
    if(number>=1){
    for (int i = 1; i <= number; i++) {
        if (i%2==0) {
           total++;
        }
    }
    }
    return total;
}



