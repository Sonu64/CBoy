#include <stdio.h>
#include <conio.h>
// Integer -> 4 Bits
int main() {

    int marks[7] = {90, 89, 67, 78, 56, 45, 56}, sum = 0;
    float avg;

    int* j = &marks[0];

    for(int i = 0; i < 7; i++) {
        printf("Address: %u, Element: %d\n", j, *j);
        sum += *j;
        j++;
    }
    avg = sum / 7.0;
    printf("Average marks is %f\n", avg);


}


