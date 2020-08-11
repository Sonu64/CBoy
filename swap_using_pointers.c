#include <stdio.h>
#include <conio.h>

/*DECLARATIONS, DEFINED BELOW*/
void swapr(int *, int *);

int main(){
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    swapr(&a, &b);

    printf("Swapped values are a = %d and b = %d\n", a, b);
    return 0;
}

void swapr(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
