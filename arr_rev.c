#include <stdio.h>
#include <stdlib.h>
void reverseArray(int *, int *, int);

int main() 
{

    int *arr, max;

    // Getting the number of elements in the array
    printf("Enter the number of elements in your array: ");
    scanf("%d", &max);

    // Allocating memory and receiving elements
    arr = (int *) (malloc(sizeof(int) * max));
    printf("Enter %d elements of the array: \n", max);
    for(int i = 0; i < max; i++) {
        scanf("%d", &arr[i]);
    }

    // Reversing the array
    reverseArray(&arr[0], &arr[max-1], max);
    printf("The reversed array is: \n");
    for(int i = 0; i < max; i++) 
    {
        printf("%d\t", arr[i]);
    }
    return 0;

}

// Function to reverse the array
void reverseArray(int *j, int *k, int max)
{
    int temp;
    for(int i = 1; i <= (max / 2); i++) 
    {
        // I spent 2 hours thinking why it works even if I give < in place of <=...It starts from 0 :)... Now I know how it works !! If you run the above loop from i = 0, put <, otherwise do it as above
        temp = *j;
        *j = *k;
        *k = temp;
        ++j;
        --k;
    }
}