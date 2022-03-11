

int max_integer(int array[],int n){

int max=-1000000000;

for(int a=0;a<n;a++){

if(max<array[a]){
    max=array[a];
}
}
return max;


}

int min_integer(int array[],int n){

int min=100000000;

for(int a=0;a<n;a++){

if(min>array[a]){
    min=array[a];
}
}
return min;


}

int sum_min_max(int array[],int n){

if(n<1){
    return -1;
}
return max_integer(array,n)+min_integer(array,n);

}

  