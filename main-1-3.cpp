#include<iostream>
extern void cpyia(int old_array[],int new_array[],int length) ;
int main(){

int old_array[4]={1,2,3,4};
int new_array[4];
int length =4;
cpyia( old_array, new_array, length) ;

for (int i=0;i<4;i++){
       if(i==3){
           std::cout<<new_array[i]<<std::endl;

       }else{
            std::cout<<new_array[i]<<" ";

       }

    }





return 0;
}


