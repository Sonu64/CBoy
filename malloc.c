#include <stdio.h>
#include <stdlib.h>

int main() {
    int max;
    int *arr;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &max);

    arr = (int *) malloc(max * sizeof(int)); /*returns VOID pointer, inline casting to integer pointer is a convention*/

    printf("\nOK !...Array created ! Now enter %d elements of the array:\n", max);

    for(int i=0; i<max; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<max; i++) {
        printf("%d\t", arr[i]);
    }



    return 0;

}