#include <stdio.h>
#include <conio.h>

/*DECLARATIONS*/
void circularShift(int*, int*, int*);

int main(){
    int a = 5, b = 8, c = 10;
    circularShift(&a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a,b,c);
    return 0;
}

void circularShift(int *a, int *b, int *c){
    int valC = *c;
    int valB = *b;
    *b = *a;
    *c = valB;
    *a = valC;
}
