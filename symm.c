#define ROWS 4
#define COLS 4
#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, j, arr1[ROWS][COLS], arr2[ROWS][COLS];
    bool isSymmetric = false;

// Initialising first matrix
    printf("Enter elements of 1st Matrix: \n\n");
    for(i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }       
    }

// Initialising Second Matrix
    printf("Enter elements of 2nd Matrix: \n\n");
    for(i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
        
    }


// Displaying the 2 Matrices
    printf("\nHere are the 2 4x4 Matrices: \n");
    printf("MATRIX 1\n");
    for(i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }   
    for(i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", arr2[i][j]);
            } 
        printf("\n");          
        }


// Algorithm to check for Symmetricity
    printf("MATRIX 2\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            if (arr1[i][j] == arr2[j][i]) {
                isSymmetric = true;
            }
        }
    }

    if(isSymmetric) {
        printf("\nHOORAY !! Your Matrices are symmetric !!");
    }
    else {
        printf("\n:( Unsymmetric matrices !");
    }



    return 0;
}