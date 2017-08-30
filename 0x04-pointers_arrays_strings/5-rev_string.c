#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j = 0;
	char tmp;

	for (i = 0; s[i]; i++)
		;
	--i;
	while (j <= i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
