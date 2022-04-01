#include<iostream>

int *shift_right(int *vals, int len, int amount){
int *nums=new int[len];
for(int a=0;a<amount;a++){
nums[a]=0;


}
int c=0;
for(int b=amount;b<len;b++){
nums[b]=vals[c];
c++;


}



return nums;

}