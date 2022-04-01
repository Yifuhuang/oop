#include<iostream>

extern int *shift_right(int *vals, int len, int amount);

int main(){

int vals[]={1,2,3,4,5};
  int *sv=shift_right(vals,5,2);

for(int a=0;a<5;a++){
  
  if(a==4){
    std::cout<<sv[a];
  }else{
  
  std::cout<<sv[a]<<" ";
  }
}
std::cout<<std::endl;




}