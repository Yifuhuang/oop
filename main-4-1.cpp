#include <iostream>
extern int *max_min(int **vals, int num_rows, int num_cols);


int main() {
        
        int row1[] = {2, 2, 3};
        int row2[] = {4, 5, 6};
        int row3[] = {7, 8, 19};
        int *vals[] = {row1, row2, row3};
        int rows = 3;
        int cols = 3;
        int *mm = max_min(vals, rows, cols);
        
        std::cout << mm[0] << " ";
        std::cout << mm[1];
        std::cout << std::endl;
        return 0;
}