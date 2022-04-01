
 
 #include <iostream>



int* max_min(int** vals, int rows, int cols) {
        
        int maxi = -1;
        int mini = 101;
        
        for(int a = 0; a < rows; a++) {
        for(int b = 0; b < cols; b++) {
                        
        if(vals[a][b] > maxi) {
        maxi = vals[a][b];
        }else if(vals[a][b] < mini) {
        mini = vals[a][b];
        }
        }
        }
        int result[2]={maxi,mini};
        int* two ;
        two=result;
        
        return two;
}