#include<iostream>
extern void copy_2d_strings(std::string first[][2], std::string second[][2], int n) ;
int main(){
int n=3;
std::string first[3][2]={{"1","2"},{"1","2"},{"1","2"}};
std::string second[3][2];
copy_2d_strings( first, second,  n) ;

for (int i=0;i<n;i++){
        for (int j=0;j<2;j++){
            if(j==1){
            std::cout<<second[i][j];
            std::cout<<std::endl;
            }else{
              std::cout<<second[i][j]<<" ";
            }
        }

    }





return 0;
}


