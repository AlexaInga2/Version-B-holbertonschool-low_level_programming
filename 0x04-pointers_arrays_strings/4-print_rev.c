#include "holberton.h"
/**
 * _puts - write string to stdou
 * @str: The string
 *
 * Return: 1 if the number is positive. 0 otherwise
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
