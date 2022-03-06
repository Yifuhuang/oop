
int maximum(int array[], int n) {
    int maxi = -1000000;
    if(n>=1){
    for (int i = 0; i < n; i++) {
        if (array[i] > maxi) {
            maxi = array[i];
        }
    }
    }else{
        maxi = 0;
    }
    return maxi;
}

