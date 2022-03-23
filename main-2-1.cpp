#include<iostream>
extern void print_sevens(int *nums,int length) ;
int main(){

int old_array[4]={7,14,3,21};

int length =4;
int *nums;
nums=old_array;

print_sevens( nums,  length) ;




return 0;
}