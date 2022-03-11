
 
 

int sum_elements(int arr[],int n){

int sum=0;

for(int a=0;a<n;a++){
    sum+=arr[a];
}
return sum;

}
 
 bool is_a_palindrome(int arr[],int n){
int result=1;
for(int a=0; a<n;a++){
if(arr[a]!=arr[n-1-a]){
    result=0;
}

}
if(result==0){
    return false;
}else{
    return true;
}
}
 
 
 int sum_if_a_palindrome(int arr[],int n){
int result = -2;
if(n<1){
    return -1;
}
if(is_a_palindrome(arr,n)){

return sum_elements(arr,n);

}else{ 
    return result;
}
}

