#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
   int n, las;

   srand(time(0));
   n = rand() - RAND_MAX / 2;
   las = n % 10;
   printf("last digit of %d is %d ", n, las)
   if (las > 5)
       printf("and greater than 5\n", n, las);
   else if (las == 0)
       printf("and is 0\n");
   else if (las < 6 && las != 0) 
       printf("and is less than 6 and not 0\n");
   return(0);
}
