#include <iostream>
#include <stdlib.h>
extern void count_numbers(int test_array[4][4]);
int main()
{
int test_array[4][4];
for (int i = 0; i < 4; i++) {
        for(int j =0; j < 4; j++){
            test_array[i][j]=j;

        }
       

        
        }
test_array[2][3]=9;
    count_numbers(test_array) ;
    return 0;
}
