#include <iostream>
#include <stdlib.h>
extern int sum_array(int*, int);
int main(int argc,char **argv)
{
int test_array[5] = {5,3,4,-1,8};
    std::cout << sum_array(test_array, 5) << std::endl;
    return 0;
}