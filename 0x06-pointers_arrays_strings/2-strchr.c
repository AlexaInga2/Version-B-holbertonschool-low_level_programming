#include "holberton.h"
/**
 * _strchr - locates character in a string
 * @s: the string
 * @c: the character
 *
 * Return: pointer in string, or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
