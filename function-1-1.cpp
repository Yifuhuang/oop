#include<iostream>
void copy_2d_strings(std::string first[][2], std::string second[][2], int n){
    for (int a=0;a<n;a++){
        for (int b=0;b<2;b++){
            second[a][b]=first[a][b];
        }

    }
 

   
}
