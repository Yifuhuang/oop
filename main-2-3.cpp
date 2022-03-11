#include <iostream>
#include <stdlib.h>
extern int sum_if_a_palindrome(int*,int);
int main(int argc,char **argv)
{
int test_array[5] = {1,1,2,1,0};
    std::cout << sum_if_a_palindrome(test_array, 5) << std::endl;
    return 0;
}