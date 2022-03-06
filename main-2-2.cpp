#include <iostream>
#include <stdlib.h>
extern int maximum(int*,int);
int main(int argc,char **argv)
{
int test_array[5] = {5,3,4,-1,8};
    std::cout << maximum(test_array, 5) << std::endl;
    return 0;
}