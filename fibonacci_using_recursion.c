#include <stdio.h>
#include <conio.h>
int Fibonacci(int);
int main() {
   int n, i;
   printf("Enter the number of terms you want: ");
   scanf("%d",&n);
   for ( i = 0 ; i < n ; i++ )
   {
    /* Mind the difference between RETURN and PRINTF. We are never using 2 1s as the value of n
      as in the series. N is maintaining the serial number from 0 to N of each
      term in the series 0 1 1 2 3 5 8.... 0->0 1->1 1->2 2->3 3->4... */
      printf("%d\n", Fibonacci(i));
   }
   return 0;
}
int Fibonacci(int n) {
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      //printf("n = %d, n-1 = %d, n-2 = %d\n",n,n-1,n-2);
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
