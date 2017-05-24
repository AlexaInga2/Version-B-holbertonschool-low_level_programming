#include "holberton.h"
/**
 * _puts - write string to stdout
 * @str: The string
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	_putchar(str[i]);
	_putchar('\n');
}
