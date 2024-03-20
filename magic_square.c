// A magic square is a square matrix in which the sum of every row, column, and both main diagonals is the same. 

#include <stdio.h>

int main() {
  
    int matrix[3][3];

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = matrix[0][0] + matrix[0][1] + matrix[0][2];
    
    for (int i = 1; i < 3; i++) {
        int row_sum = matrix[i][0] + matrix[i][1] + matrix[i][2];
        if (row_sum != sum) {
            printf("It's not a magic square.\n");
            return 0;
        }
    }

    for (int j = 0; j < 3; j++) {
        int col_sum = matrix[0][j] + matrix[1][j] + matrix[2][j];
        if (col_sum != sum) {
            printf("It's not a magic square.\n");
            return 0;
        }
    }

    int diag1_sum = matrix[0][0] + matrix[1][1] + matrix[2][2];
    if (diag1_sum != sum) {
        printf("It's not a magic square.\n");
        return 0;
    }

    int diag2_sum = matrix[0][2] + matrix[1][1] + matrix[2][0];
    if (diag2_sum != sum) {
        printf("It's not a magic square.\n");
        return 0;
    }
    
    printf("It's a magic square.\n");

    return 0;
  
}
