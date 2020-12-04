#include <stdio.h>
int main()
{
   int number;

   for (number=1;  number<=10; number++)
   {
       int squares;

       squares = number * number;

       printf("%d %d\n", number, squares);
   }
   return 0;
}

