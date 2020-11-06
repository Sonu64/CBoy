#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int isNumber(string);

int main(int argc, string argv[])
{

 if(argc != 2 || isNumber(argv[1]) == 1)
 {
    printf("Usage: ./caesar key\n");
    return 1;
 }


 else
 {
    string plainText;
    // string cipher[MAX];
    int key = atoi(argv[1]);
    //printf("Key is %d\n", key);
    while(key>26)
    {
        key = key - 26;
    }
    plainText = get_string("plaintext: ");
    int n = strlen(plainText);
    for(int i = 0; i < n; i++)
    {
        // printf("%d\n", isalnum(plainText[i]));
        if(isalnum(plainText[i]))
        {
            //printf("%c - %d\n", plainText[i], plainText[i]);
            int flag = ((int)plainText[i] + key);
            //printf("%d\n", flag);
            if(flag > 122)
            {
                flag -= 122;
                flag = flag + 96;
            }
            if(flag > 90 && flag < 97)
            {
                flag -= 90;
                flag  = flag + 64;
            }
            plainText[i] = flag;
            //printf("%c\t", plainText[i]);
        }
        else
        {
            continue;
        }
    }
    printf("ciphertext: %s\n", plainText);
  }
  return 0;
}

int isNumber(string s)
{
    int n = strlen(s);
    for(int i = 0; i < n; i++)
    {
        if((int)s[i] < 48 || (int)s[i] > 57)
        {
            return 1;
        }
    }
    return 0;
}
