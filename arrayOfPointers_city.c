#include <stdio.h>
#define MAX 4
#define CITY_NAME_LENGTH 100

int main()
{
    char *adrs[MAX];
    char cityNames[MAX][CITY_NAME_LENGTH] = {"Kolkata", "Bankura", "Durgapur", "Mississippi"};

    // totalLength is temp value, changing in the while loop
    // maxLength holds the maximum length
    // maxCityIndex is the index no. of the longest city name in the cityNames Array
    int totalLength, maxLength = 0, maxCityIndex;




    for(int i = 0; i < MAX; i++)
    {
        // getting the location of zeroth element
        adrs[i] = &cityNames[i][0];

        // initialize it to 0, before starting counting -> ! STRLEN() can also be used !
        totalLength = 0;

        // CAUTION -> Pointer Arithmetic being used below
        // adrs[i] is not the character itself, remember it's an array of pointers.
        while(*adrs[i] != '\0')
        {
            printf("%c", *adrs[i]);
            totalLength += 1;
            adrs[i] += 1;
        }
        
        printf("\n");

        // Classic comparison Algo
        if(totalLength > maxLength)
        {
            maxLength = totalLength;
            maxCityIndex = i;
        }
    }


    printf("The Longest City Name is %s, with %d characters.\n", cityNames[maxCityIndex], maxLength);

    return 0;
}
