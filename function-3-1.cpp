#include<iostream>
int count_next_element_matches(int vals[],int length){
    int nums=0;
    for(int i=1;i<length;i++){
     if(vals[i]==vals[(i-1)]){
       nums++;

     }



    }
return nums;
   
}
