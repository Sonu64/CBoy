#include <stdio.h>
#include <conio.h>

int sum(int a);

int main() {
    printf("%d", sum(1));
}

int sum(a) {
    if (a == 25)
        return 25;
    else
        a = a + sum(a+1);
    return a;
}
