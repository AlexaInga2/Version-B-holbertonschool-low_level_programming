#include "holberton.h"
/**
 * puts_half - print half of the string
 * @str: The string
 *
 * Return: half of the string
 */
void puts_half(char *str)
{
	int i, j, h;

	if (str != '\0')
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			;
		}
		h = i / 2;
		for (j = i - h; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
