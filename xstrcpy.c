#include <stdio.h>
#include <string.h>
#define MAX 100

void xstrcpy(char *, const char *);
/*
While passing values, keep your head cool.... because if you think
we will pass something of the kind &'n' where n is anything, then you are wrong.

REMEMBER: Whenever we are passing an array entirely, we are PASSING THE "ADDRESS 
OF THE ZEROTH ELEMENT", I.E here the address of the zeroth element of the char 
arrays.
*/

int main() {
    char yourString[MAX], myString[MAX], myString2[MAX];

    printf("Enter Your String: ");
    gets(yourString);

    strcpy(myString, yourString);
    printf("ACCORDING TO C's FUNCTION ....");
    printf("Your String is %s\n", yourString);
    printf("My String is %s\n", myString);

    printf("\n\n");

    xstrcpy(myString2, yourString);
    printf("ACCORDING TO MY FUNCTION ....");
    printf("Your String is %s\n", yourString);
    printf("My String is %s\n", myString2);

    return 0;
}

void xstrcpy(char *target, const char *source) {
    while (*source != '\0') {
        *target = *source;
        target++;
        source++;
    }
    *target = '\0';
}





