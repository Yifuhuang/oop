#include<iostream>
void print_sevens(int *nums,int length){
    int *ptr1;
    
    ptr1=nums;
    

    for (int a=0;a<length;a++){
        
           if((*(nums+a))%7==0){

               std::cout<<(*(nums+a))<<std::endl;
           }

    }
 

   
}
