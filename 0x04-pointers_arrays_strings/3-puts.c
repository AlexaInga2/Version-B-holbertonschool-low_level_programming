#include "holberton.h"
/**
 * _puts - Check if a number is greater than 0
 * @str: The number to be checked
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
