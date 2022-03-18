#include <iostream>
#include <stdio.h>
void printer(int nums[10][10]) {
    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
             if (b == 9) {
              std::cout<<nums[a][b];
              std::cout << std::endl;
          }
          else if(b>=0&&b<9){
              std::cout<<nums[a][b];
              std::cout<<" ";
          }
       }
       
    }
}
