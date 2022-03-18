#include <iostream>

void printer(int nums[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
             if (j == 9) {
              std::cout<<nums[i][j];
              std::cout << std::endl;
          }
          else if(j>=0&&j<9){
              std::cout<<nums[i][j];
              std::cout<<" ";
          }
       }
       
    }
}
