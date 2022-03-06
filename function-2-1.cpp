
int minimum(int array[], int n) {
    int mini = 1000000;
    if(n>=1){
    for (int i = 0; i < n; i++) {
        if (array[i] < mini) {
            mini = array[i];
        }
    }
    }else{
        mini = 0;
    }
    return mini;
}

