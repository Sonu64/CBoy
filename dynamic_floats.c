#include <stdio.h>

void sort(float*, int);

int main()
{
    int max, i;
    float *arr;
    printf("Enter the number of elements in the float array: ");
    scanf("%d", &max);
    arr = (float *) malloc(max * sizeof(float));
    
    printf("Okay... Array created with %d elements, now enter those :) \n", max);
    
    for(i = 0; i < max; i++)
    {
        printf("Enter element number %d: ", i);
        scanf("%f", &arr[i]);
        printf("\n");
    }
    
    
    printf("Initially - \n");
    for(i = 0; i<max; i++)
    {
        if(i != (max-1))
            printf("%.4f, ", arr[i]);
        else
            printf("%.4f", arr[i]);
    }
    printf("\n\n");
    
    
    // SORTING //
    sort(arr, max);
   
    
    printf("Finally - \n");
    for(i = 0; i<max; i++)
    {
        if(i != (max-1))
            printf("%.4f, ", arr[i]);
        else
            printf("%.4f", arr[i]);
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
                temp = *(arr+i); //arr[i] is same as *(arr+i),using this as we took address of zeroth element
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
}


