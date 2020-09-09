#include <stdio.h>
#include <string.h>
#define MAX 100

int xstrlen(char *);

int main() {

    char yourString[MAX];

    printf("Enter your String: ");
    gets(yourString);

    printf("The Length your String, according to C's function is %d\n", strlen(yourString));

    printf("The Length your String, according to C's function is %d\n", xstrlen(yourString));

    return 0;
}

// STRLEN made by us, algorithm is very simple
int xstrlen(char *s) {
    int length = 0;
    while(*s != '\0') {
        length++;
        s++;
    }    
    return length;
}