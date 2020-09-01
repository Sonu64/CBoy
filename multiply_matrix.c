#include <stdio.h>
#define ROWS 3
#define COLS 3
int main() {

    /*Initialising the 2 Matrices, you can take input if you want so*/
    int m1[ROWS][COLS] = {
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 10}
    };
    int m2[ROWS][COLS] = {
        {12, 13, 14},
        {15, 16, 17},
        {18, 119, 1110}
    };
    /*The Matrix which will be the Product of the 2 Matrices*/
    int p[ROWS][COLS];

    /* The Address of suitable element of the Product Matrix, taken to
    next address of its type (the next array element) in the second innermost for loop */
    int *s = &p[0][0];

    /* this is the product of element-element multiplication, it is actually acting as the sum of the products of corresponding elements */

    /*If you don't understand the above comment, then you might don't know how to multiply 2 Matrices. Check the Math Algorithm to Multiply 2 Matrices here: https://www.khanacademy.org/math/precalculus/x9e81a4f98389efdf:matrices/x9e81a4f98389efdf:multiplying-matrices-by-matrices/a/multiplying-matrices */
    int product = 0;

    /* THE MAIN ALGORITHM: Keep ROW fixed, then iterate through each column, then choose next ROW, iterate through each column, and so on...*/
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            for(int k = 0; k < COLS; k++) {
                product += m1[i][k] * m2[k][j];
            }
            *s = product;
            product = 0;
            s++;
        }
    }
    /* Displaying the Product Matrix */
    printf("The Product of the 2 Matrices are - \n\n");
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
}