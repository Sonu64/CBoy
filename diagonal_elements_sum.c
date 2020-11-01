#include <stdio.h>
#define MAX 3

// Prototypes
int findDiagonalSum(int[MAX][MAX]);

int main()
{
    int arr[MAX][MAX], i, j, sum = 0;

    printf("Enter elements one-by-one...");

    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// Definition
int findDiagonalSum(int arr[MAX][MAX])
{
    return 67;
}
