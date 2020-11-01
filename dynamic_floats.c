#include <stdio.h>

void sort(float*, int);

int main()
{
    float *arr;
    int max, i;

    printf("Enter the number of elements in the float array: ");
    scanf("%d", &max);
    arr = (float *) malloc(max * sizeof(float));
    
    printf("Okay... Array created with %d elements, now enter those :) \n", max);
    

    for(i = 0; i<max; i++)
    {
        if(i!=(max-1))
            printf("%f, ", arr[i]);
        else
            printf("%f", arr[i]);
    }    
    sort(arr, max);
    
    for(i = 0; i<max; i++)
    {
        if(i!=(max-1))
            printf("%f, ", arr[i]);
        else
            printf("%f", arr[i]);
    }
    
    return 0;
}

void sort(float* arr, int max)
{
    int i, j, temp;
    for(i = 0; i<max-1; i++)
    {
        for(j = i+1; j<max; j++)
        {
            if(*(arr+i) > *(arr+j))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
}


