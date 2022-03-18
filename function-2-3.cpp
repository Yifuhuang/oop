
 
 

#include <iostream>
#include <stdlib.h>

int sum_elements(int nums[],int length){

int sum=0;

for(int a=0;a<length;a++){
    sum=sum+nums[a];
}
return sum;

}
 
 bool is_a_palindrome(int nums[],int length){
int outCome=true,a=0;
while(a<length){
if(nums[a]!=nums[length-a-1]){
    outCome=false;
}
a++;
}
return outCome;
}
 
 
 int sum_if_a_palindrome(int nums[],int length){
int incorrect = -2;
if(length<1){
    return -1;
}
if(is_a_palindrome(nums,length)==true){

return sum_elements(nums,length);

}else if(is_a_palindrome(nums,length)==false){ 
    return incorrect;
}

 }

