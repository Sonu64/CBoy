#include <stdio.h>
#include <stdbool.h>
bool isValid(char *);

int main() 
{
    
    char isbn[10];

    printf("Enter an ISBN code: ");
    gets(isbn);
   
    if (isValid(isbn))
    {
        printf("Valid ISBN Code");
    }
    else
    {
        printf("Invalid ISBN Code");
    }
    
    return 0;
}


// Core Function to implement the Algorithm to check validity of the ISBN 
bool isValid(char *isbn) 
{
    // the sum that must be divisible by 11
    int sum = 0;

    // sum = 1d1 + 2d2 + 3d3 + 4d4 + ... ndn, that n !!
    int multiple = 1;

    // from the right
    isbn = isbn + 9;

    for(int i = 1; i <= 10; i++)
    {
        //printf("%c\n", *isbn);

        // X is 10
        if (*isbn == 'X')           
        {
            sum += multiple * 10;
            //printf("10 multiplied !\n");
        }
        else
            sum += multiple * (int)(*isbn - '0');
            /*Character to corresponging integer conversion
            with - '0'. Found it on Google (: */

        //printf("%d\n", sum);
        multiple = multiple + 1;
        --isbn;
    }

    if (sum % 11 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}