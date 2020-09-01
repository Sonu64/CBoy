#include <stdio.h>
#define ROWS 6
#define COLS 6

int main() {
    int m1[ROWS][COLS], m2[ROWS][COLS], sum[ROWS][COLS];
    int i, j;

// Initialising 2 Matrices
    printf("Enter first Matrix: ");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("Enter Matrix 1 [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter second Matrix: ");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("Enter Matrix 2 [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

/* Initialising the Sum Matrix, by adding corresponding elements of matrix */
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }


// Displayig the SUM Matrix
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }



    return 0;
}