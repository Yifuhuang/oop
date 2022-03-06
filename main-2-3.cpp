#include <iostream>
#include <stdlib.h>

extern void twofivenine(int*,int);

int main(int argc,char **argv)
{
	int test_array[5] = {5,3,4,-1,9};
    twofivenine(test_array, 5);
    return 0;
}