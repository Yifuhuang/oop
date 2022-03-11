
#include <iostream>
#include <stdlib.h>
extern int sum_min_max(int*,int);
int main(int argc,char **argv)
{
int test_array[5] = {2,7,9,11,10};
    std::cout << sum_min_max(test_array, 5) << std::endl;
    return 0;
}
