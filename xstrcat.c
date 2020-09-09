#include <stdio.h>
#include <string.h>
#define MAX 100

void xstrcat(char *, char *);

int main() {

    char yourString[MAX], newString[2 * MAX], yourString2[MAX], newString2[2 * MAX];

    printf("Enter your String: ");
    gets(yourString);

    
    printf("Enter the String to be concatenated at the beginning: ");
    gets(newString);
    strcat(newString, yourString);
    printf("ACCORDING TO C's FUNCTION....\n");
    printf("New String is: %s\n", newString);

    printf("\n\n");

    printf("Enter your String: ");
    gets(yourString2);   
    printf("Enter the String to be concatenated at the beginning: ");
    gets(newString2);
    xstrcat(newString2, yourString2);
    printf("ACCORDING TO MY FUNCTION....\n");
    printf("New String is: %s\n", newString2);   

    return 0;
}

// STRCAT made by us, same algo
void xstrcat(char *target, char *source) {
    target = target + (strlen(target));
    while (*source != '\0') {
        *target = *source;
        target++;
        source++;
    }
    *target = '\0';
}