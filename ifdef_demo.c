#include <stdio.h>
#define NAME "Sourakanti Mandal"
#define LENOVO
#define PC
int main() {

    #ifdef NAME
        printf("%s\n", NAME);
        #undef LENOVO
    #else
        printf("NAME is not defined");
    #endif

    #ifdef LENOVO
        printf("Lenovo PC is running this C Program!");
    #else
        printf("Lenovo PC is not running this C Program, LENOVO is undefined!\n");
    #endif // LENOVO

    return 0;
}
