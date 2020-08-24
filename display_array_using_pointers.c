#include <stdio.h>

void displayElement(int*);

int main() {

    int numbers[5];
    int* j = &numbers[0];

    printf("Enter Array Elements:\n");
    for(int i=0; i<5; i++) {
        scanf("%d", j);
        j++;
    }

    j = &numbers[0];

    printf("\n\nYour Elements are:\n");
    for(int i=0; i<5; i++) {
        printf("%d\n", *j);
        j++;
    }

    return 0;
}

void displayElement(int* n) {
    printf("%d, ", *n);
}
