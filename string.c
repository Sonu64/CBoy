#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    gets(name);
    printf("Hello, ");
    puts(name);
    return 0;
}