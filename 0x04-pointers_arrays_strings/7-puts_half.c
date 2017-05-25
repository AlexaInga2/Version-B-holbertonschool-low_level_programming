#include "holberton.h"
/**
 * puts_half - print half of the string
 * @str: The string
 */
void puts_half(char *str)
{
	int i, j, h;

	if (str != '\0')
	{
		for (i = 0; str[i]; i++)
		{
		}
		h = i / 2;
		for (j = h; str[j]; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
