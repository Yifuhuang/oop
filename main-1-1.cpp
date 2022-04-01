#include<iostream>
extern int *pad_array(int *nums,int length);
int main(){


int nums[4]={1,2,3,4};
int length=4;


int *result=pad_array(nums,length);

std::cout<<result[0]<<" "<<result[1]<<" "<<result[2];

}