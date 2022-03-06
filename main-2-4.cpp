#include <iostream>
#include <stdlib.h>
extern bool ascending(int*,int);
int main(int argc,char **argv)
{
int test_array[5] = {1,1,2,2,0};
    std::cout << ascending(test_array, 5) << std::endl;
    return 0;
}