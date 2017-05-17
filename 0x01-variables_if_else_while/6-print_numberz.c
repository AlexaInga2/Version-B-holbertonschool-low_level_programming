#include <stdio.h>
 
int main(void) 
{
   /* local variable definition */
   int a = '0';

   /* while loop execution */
   while (a <= '9')
   {
      putchar(a);
      a++;
   }
   putchar('\n');
   return (0);
}
