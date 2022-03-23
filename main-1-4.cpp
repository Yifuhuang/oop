#include<iostream>
extern void cpyda(double *old_array,double *new_array,int length) ;
int main(){

double old_array[4]={1.1,2.1,3.1,4.1};
double new_array[4];
int length =4;
cpyda( old_array, new_array, length) ;

for (int i=0;i<4;i++){
       if(i==3){
           std::cout<<new_array[i]<<std::endl;

       }else{
            std::cout<<new_array[i]<<" ";

       }

    }





return 0;
}


