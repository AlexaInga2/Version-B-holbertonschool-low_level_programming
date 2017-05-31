#include "holberton.h"
/**
 * _strspn - finds length(in bytes) of s which consists of bytes in accept.
 * @s: First operand
 * @accept: Second operand
 *
 * Return: # of bytesin the initial segment of s which byte's live in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a;

	for (i = 0; s[i]; i++)
	{
		for (a = 0; accept[a]; a++)
		{
			if (s[i] == accept[a])
				break;
		}
		if (!accept[a])
			break;
	}
	return (i);
}
