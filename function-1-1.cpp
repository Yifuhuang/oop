
// Sums together all positive numbers and returns them
int diagonal(int array[4][4]) {
    int total = 0;
    
    
    for (int i = 0; i < 4; i++) {
        
        total+=array[i][i];

        
        }
   
    return total;
}

