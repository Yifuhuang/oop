#include<iostream>
void cpyda(double *old_array,double *new_array,int length){
    

    for (int a=0;a<length;a++){
        
            *(new_array+a)= *(old_array+a);
        

    }
 

   
}
