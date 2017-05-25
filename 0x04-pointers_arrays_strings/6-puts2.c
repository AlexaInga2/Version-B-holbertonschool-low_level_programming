#include "holberton.h"
/**
 * puts2 - print every other number
 * @str: The string to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);

	}
	_putchar('\n');
}
