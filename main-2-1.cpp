#include<iostream>
extern std::string lookup_month(int num) ;
int main(){

int m1=1, m2=6, m3=11, m0=100;

std::cout<<lookup_month(m1)<<std::endl;
std::cout<<lookup_month(m2)<<std::endl;
std::cout<<lookup_month(m3)<<std::endl;
std::cout<<lookup_month(m0)<<std::endl;



return 0;
}