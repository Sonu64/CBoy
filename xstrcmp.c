#include <stdio.h>

int xtrcmp(char *, char *);

int main()
{
    char s1[] = "Jerry";
    char s2[] = "Jerry Boy";

    printf("%d\n", xstrcmp(s1, s2));

    return 0;
}

int xstrcmp(char *fs, char *ss)
{
    int diff = 0;
    while(*fs != '\0' || *ss != '\0')
    {
        //printf("%d\n", *fs);
        if (*fs == *ss)
        {
            diff += 0;
        }
        else
        {
            diff += *fs - *ss;
            break;
        }
        fs++;
        ss++;
    }
    return diff;
}

