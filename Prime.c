#include <stdio.h>
int main()
{
   int i, num, p=1;
   printf("Please enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("Entered number is a prime number.");
   }
   else
   {
      printf("Entered number is not a prime number.");
   }
}