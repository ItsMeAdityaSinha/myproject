#include <stdio.h>
int main()
{
   int i, t, sum = 0, rem;

   printf("Enter an integer\n");
   scanf("%d", &i);

   t = i;

   while (t != 0)
   {
      rem = t % 10;
      sum=sum + rem;
      t= t / 10;
   }

   printf("Sum of digits of %d = %d\n",i, sum);

   return 0;
}