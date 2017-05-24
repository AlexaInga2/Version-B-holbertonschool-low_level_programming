
#include "holberton.h"
/**
 * print_rev - reverse the quote
 * @s: The string
 * @a: we need another variable to subtract i (the string)to reverse
 * Return: quote in reverse
 */
void print_rev(char *s)
{
	int i, a;

	for (i = 0; s[i]; i++)
	{
	} /** enters and ends loop */
	for (a = (i - 1); a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
