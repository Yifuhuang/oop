#include <iostream>
#include <stdlib.h>
extern int identity(int array[10][10]);
int main()
{
int test_array[10][10];
for (int i = 0; i < 9; i++) {
        for(int j =0; j < 9; j++){
            test_array[i][j]=1;

        }
       

        
        }
test_array[9][8]=9;
    std::cout << identity(test_array) << std::endl;
    return 0;
}
