#include <iostream>
#include <stdlib.h>
extern int diagonal(int array[4][4]);
int main()
{
int test_array[4][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    std::cout << diagonal(test_array) << std::endl;
    return 0;
}