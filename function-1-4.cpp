// function to ...
int sumtwo(int array[], int secondarray[], int n){
	int sum1=0, sum2=0, total=0;
if(n>=1){
for (int i = 0; i < n; i++){
   sum1+=array[i];
   sum2+=secondarray[i];
}
total=sum1+sum2;
}
return total;
}
