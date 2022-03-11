
 
 

int sum_elements(int array[],int n){

int sum=0;

for(int a=0;a<n;a++){
    sum+=array[a];
}
return sum;

}
 
 bool is_a_palindrome(int array[],int n){
int result=1;
for(int a=0; a<n;a++){
if(array[a]!=array[n-1-a]){
    result=0;
}

}
if(result==0){
    return false;
}else{
    return true;
}
}
 
 
 int sum_if_a_palindrome(int array[],int n){
int result = -2;
if(n<1){
    return -1;
}
if(is_a_palindrome(array,n)){

return sum_elements(array,n);

}else{ 
    return result;
}
}

