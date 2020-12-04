#include <stdlib.h>

int main()
{
   int number,range, total=0;

   printf("input number: ");
   scanf("%d", &range );
   printf("\n");

   for (number=1;  number<=range; number++)
   {

    if(number%3!=0)
    {

    total = total + number;
    printf("%d \n", number);

    }

    else{

        }

    }

    printf("\ntotal all printed numbers :%d \n", total);

   return 0;
}

