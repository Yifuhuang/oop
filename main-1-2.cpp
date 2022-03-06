#include <iostream>
#include <stdlib.h>

extern double average(int*,int);

int main(int argc,char **argv)
{
	int test_array[5] = {5,3,4,-1,8};
    std::cout << average(test_array, 5) << std::endl;
    return 0;
}
