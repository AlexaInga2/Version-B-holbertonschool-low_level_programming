#include "holberton.h"
/**
 * _puts_recursion - prints string
 * @s: the string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
    {
      _putchar('\n');
      ;
    }
  _putchar(*s);
}
