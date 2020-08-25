#define MAX 5
#include <stdio.h>
int main() {
    int arr[MAX];
    int *j = &arr[0];
    printf("Enter the 5 elements in the array:\n");
    for(int i=0; i<MAX; i++) {
        scanf("%d", j);
        j++;
    }
    printf("\n");
    j = &arr[0];
    for(int i=0; i<MAX; i++) {
        printf("%d\n", *j);
        j++;
    }
    return 0;
}