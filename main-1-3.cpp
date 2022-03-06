#include <iostream>
#include <stdlib.h>

extern int count(int*,int,int);

int main(int argc,char **argv)
{
	int test_array[5] = {5,3,4,-1,5};
    std::cout << count(test_array, 5, 5) << std::endl;
    return 0;
}
