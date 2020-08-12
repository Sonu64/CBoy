#include <stdio.h>
#include <conio.h>

int factorial(int a);

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Factorial of %d is %d\n", a, factorial(a));
    return 0;
}

int factorial(int a) {
    if(a == 1 || a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}

