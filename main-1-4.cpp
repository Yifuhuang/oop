#include <iostream>
#include <stdlib.h>

extern int sumtwo(int*,int*,int);

int main(int argc,char **argv)
{
	int array1[5] = {5,3,4,-1,8};
    int array2[5] = {5,3,4,-1,8};
    std::cout << sumtwo(array1,array2, 5) << std::endl;
    return 0;
}