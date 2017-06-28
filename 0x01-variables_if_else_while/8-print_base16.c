#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char hex_numb[] = "0123456789abcdef\0";
  int index = 0;

  while (hex_numb[index] != '\0')
    {
      putchar(hex_numb[index]);
      index++;
    }
  putchar('\n');
  return (0);
}
