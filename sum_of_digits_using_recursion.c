#include <stdio.h>
#include <conio.h>

int nonRecursiveSum(int);
int recursiveSum(int);

int main() {
    int a;
    printf("Enter a number to find sum of digits: ");
    scanf("%d", &a);
    printf("The sum of the digits of %d using Non Recursive Function is %d\n", a, nonRecursiveSum(a));
    printf("The sum of the digits of %d using Recursive Function is %d\n", a, recursiveSum(a));
    return 0;
}


int nonRecursiveSum(int num) {
    /* The Non Recursive approach */
    int sum = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num/10;
    }
    return sum;
}


int recursiveSum(int num) {
    /* The Recursive approach */
    int sum = 0;
    int remainder;
    if (num == 0)
        return 0;
    else {
        remainder = num % 10;
        sum = remainder + recursiveSum(num/10);
    }
}

