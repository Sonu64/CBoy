#include <stdio.h>
#define MAX 100

void exchange(char*, char*, int);

int main()
{
    char s1[MAX];
    char s2[MAX];
    int maxLength = 0;
    
    printf("Enter first string: ");
    gets(s1);
    
    printf("Enter second string: ");
    gets(s2);
    

    //checking which string has more length, that will be passed to exchange()
    if(strlen(s1) > strlen(s2))
        maxLength = strlen(s1);
    else
        maxLength = strlen(s2);
  
    printf("First String was  - ");
    puts(s1);  
    printf("Second String was  - ");
    puts(s2); 
    
    
    exchange(s1, s2, maxLength);
    
    printf("\n\n");

    printf("First String is  - ");
    puts(s1);  
    printf("Second String is - ");
    puts(s2); 
    
    
    return 0;
}

void exchange(char *s1, char *s2, int maxLength)
{
    // s1 and s2 are just addresses !!! 
    int i = 0;
    while(i != maxLength)
    {
        char temp = *s1;
        *s1 = *s2;
        *s2 = temp;
        s1++;
        s2++;
        i++;
    }
}
