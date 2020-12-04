#include <stdlib.h>

int main()
{
   int number,total=10, sum= 0;
   for (number=1;  number<=15; number++)
   {
    total = total * 2;
   printf("Day %d: = %d cents \n",number, total );
    sum = total + sum;
    }
    printf("\nTotal sum: %d cents \n", sum);



   return 0;
}

