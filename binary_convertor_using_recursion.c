#include <stdio.h>
#include <conio.h>

void binary(int);

int main() {
    int num;
    printf("Enter a number to find binary equivalent: ");
    scanf("%d", &num);
    printf("The Binary equivalent of %d is ", num);
    binary(num);
    printf("\n\n");
}

void binary(int a) {
    /*This function is just printing in a single line, not returning anything*/
    binary(a/2);
    printf("%d", a%2);
    return;
}
