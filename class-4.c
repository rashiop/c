// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int matrix[10][10], matrix2[10][10], no_row, no_col;
    printf("Enter the number row & col - separate by space:\n");
    scanf("%d %d", &no_row,&no_col);
    
    
    
    printf("The first matrix, separated by enter:\n\n");
    for (int row=0; row < no_row; row++) {
        for (int col=0;col < no_col;col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    
     printf("The second matrix separated by enter:\n\n");
    for (int row=0; row<no_row; row++) {
        for (int col=0;col<no_col;col++) {
            scanf("%d", &matrix2[row][col]);
        }
    }
    
    printf("value of the first matrix:\n");
      for (int row = 0; row < no_row; row++) {
        for (int col = 0; col < no_col; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    
    printf("value of the second matrix:\n");
    for (int row=0; row<no_row; row++) {
        for (int col=0;col<no_col;col++) {
            printf("%d,", matrix2[row][col]);
        }
        printf("\n");
    }
    
    
    // printf("adding the  matrix:\n");
    // int matrix3[5][5];
    // for (int row=0; row<no_row; row++) {
    //     for (int col=0;col<no_col;col++) {
    //         matrix3[row][col] = matrix[row][col] + matrix2[row][col];
    //         printf("%d,", matrix3[row][col]);
    //     }
    //     printf("\n");
    // }
    
    

    printf("multiply\n");
    int result[no_row][no_col];
    for(int i = 0; i < no_row; i++) {
        for (int j=0; j < no_col; j++) {
            // initiate with zero
            result[i][j] = 0;
            
            for (int k=0; k < no_col; k++) {
                result[i][j] += matrix[i][k] * matrix2[k][j];
            }
        }
    }
    
    for (int i = 0; i < no_row; i++) {
        for (int j = 0; j < no_col; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    

    
   
    
    // printf("inverse value:\n");
    // for (row=0; row<no_row; row++) {
    //     for (col=0;col<no_col;col++) {
    //         printf("%d,", matrix[col][row]);
    //     }
    //     printf("\n");
    // }
    return 0;
}