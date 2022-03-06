#include <iostream>
#include <stdlib.h>

extern bool descending(int*,int);

int main(int argc,char **argv)
{
	int test_array[5] = {5,4,4,2,-1};
    std::cout << descending(test_array, 5) << std::endl;
    return 0;
}