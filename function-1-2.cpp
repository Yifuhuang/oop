
// Sums together all positive numbers and returns them
int identity(int array[10][10]) {
    int result = 1;
    
    
    for (int i = 0; i < 10; i++) {
        for(int j =0; j < 10; j++){
            if (i==j&&array[i][j]!=1){
                result=0;
            }
            if(array[i][j]!=0&&i!=j){
                result=0;
            }

        }
       

        
        }
   
    return result;
}
