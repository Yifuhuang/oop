#include <iostream>
#include <stdlib.h>

extern int count_even(int);

int main(int argc,char **argv)
{
	int num = 20;
    std::cout << count_even(num) << std::endl;
    return 0;
}