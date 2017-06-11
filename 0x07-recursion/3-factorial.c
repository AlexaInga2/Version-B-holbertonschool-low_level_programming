#include "holberton.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: void
 */
int factorial(int n)
{
  if (n < 0)
    return (-1);
  if (n == 0)
    return (1);
  return (n * factorial(n-1));
}
