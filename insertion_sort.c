#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, i, temp, j, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &max);

    // Allocating memory
    arr = (int *)(malloc(max * sizeof(int)));

    // Receiving elements
    printf("Enter %d elements of your array: \n", max);
    for(i = 0; i < max; i++) {
        scanf("%d", &arr[i]);
    }


    /* Insertion Sort Algorithm, change '>' to '<' for descending order */
    for(i = 1; i < max; i++) {
        for(j = 0; j <= (i-1); j++) {
            if(arr[j] > arr[i]) {
                // Swap the contents of location I and J
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }

    printf("\n\nSorted Array: \n");

    // Displaying new array
    for(i = 0; i < max; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
