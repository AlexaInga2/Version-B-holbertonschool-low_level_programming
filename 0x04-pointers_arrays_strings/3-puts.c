#include "holberton.h"
/**
 * _puts - prints a string to stdout
 * @str: The string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	_putchar(str[i]);
	_putchar('\n');
}
