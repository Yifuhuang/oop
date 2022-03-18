# include <iostream>
# include <stdio.h>
extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
    int number_of_digits =4;
    int binary_digits [4]={1,1,1,1};
    std::cout<< binary_to_number(binary_digits,number_of_digits)<<std::endl;
    return 0;
}
