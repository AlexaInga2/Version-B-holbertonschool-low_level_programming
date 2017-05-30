#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the pointer / memory space
 * @b: the bytes being filled w/ memory
 * @n: number of spaces to be filled/reserved
 * Return: The s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b; /** s is pointing to the reserved spaces 2 fill w/ b*/
	}

	return (s);
}
