/***
EUCLID'S ALGORITHM : steps
1. quotient = DIVIDE N1 BY N2
2. result = SUBTRACT N2 x REMAINDER FROM N1
3. N1 = N2
4. N2 = bomb
5. WHEN WE GET A 0 IN STEP2, STOP AND RETURN N2
***/

#include <stdio.h>
#include <conio.h>

int main(){
    int a = 1980, b = 1617;
    printf("%d\n", gcd(&a, &b));
    return 0;
}

int gcd(int *n1, int *n2) {
 while(1)
  {
    int quotient = *n1 / *n2;
    int result = *n1 - quotient* *n2;
    *n1 = *n2;
    if (result == 0)
        return *n2;
    *n2 = result;
  }
}
