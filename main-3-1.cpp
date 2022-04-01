#include<iostream>

extern int count_numbers_in_range(int vals[], int length, int bottom, int top);
;
int main(){

int vals[]={1,7,3,4,6,5,2};
  int res=count_numbers_in_range(vals,7,3,6);
std::cout<<res<<std::endl;
int vals2[]={1,7,3,9,9,5,2};
int res2=count_numbers_in_range(vals2,7,3,6);
std::cout<<res2<<std::endl;
}