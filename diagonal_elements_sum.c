#include <stdio.h>
#define MAX 3

// Prototypes
int findDiagonalSum(int[MAX][MAX]);

// Global Stuff :|
int i, j;

int main()
{
    int arr[MAX][MAX], sum = 0;

    printf("Enter elements one-by-one...\n");

    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    sum = findDiagonalSum(arr);

    printf("Sum of diagonal elements is %d\n", sum);

    return 0;
}


// Definition
int findDiagonalSum(int arr[MAX][MAX])
{
    int sum = 0;
    for(i = 0; i < MAX; i++)
    {
        sum += arr[i][i];
    }

    return sum;
}
