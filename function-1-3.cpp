#include<iostream>
void cpyia(int old_array[],int new_array[],int length){
    int *ptr1;
    int *ptr2;
    ptr1=old_array;
    ptr2=new_array;


    for (int a=0;a<length;a++){
        
            *(ptr2+a)= *(ptr1+a);
        

    }
 

   
}
