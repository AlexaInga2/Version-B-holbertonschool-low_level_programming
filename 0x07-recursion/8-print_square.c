#include "holberton.h"

void print_square(int size)
{
  char i, j;
 
  for (i = 0; i < size; i++)
    {
	     for (j = 0; j < size; j++)
	       {
		 _putchar('#');
	       }
		 _putchar('\n');
    }
}
