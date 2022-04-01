#include<iostream>
int *pad_array(int *nums,int length){
    
    
int result[length];
int *final;
final=result;
final[0]=nums[0];
final[1]=nums[1];
final[2]=nums[2];

return final;

   
}
