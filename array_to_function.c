#include <stdio.h>
/*Passing the address of first element of an array is passing the whole array*/
void display1(int *, int);
void display2(int[], int); 

int main() {

    int num[] = {24, 34, 12, 44, 56, 17};

    display1(&num[0], 7);
    printf("\n\n\n");
    display2(&num[0], 7);

    return 0;
}

void display1(int *j, int n) {
    int i;
    for(i=0; i<n-1; i++) {
        printf("Element = %d\n", *j);
        j++; /*increment pointer to point to next element*/
    }
}

void display2(int j[], int n) {
    int i;
    for(i=0; i<n-1; i++) {
        printf("Element = %d\n", j[i]);
    }
} 


