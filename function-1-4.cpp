
#include <iostream>
#include <stdlib.h>
void print_scaled_matrix(int array[3][3], int scale){
//
for(int i=0; i<3; i++){


for(int j=0; j<3; j++){
array[i][j] *= scale;
}

}

for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
std::cout<<array[i][j]<<" ";
}
std::cout<<std::endl;
}
}
