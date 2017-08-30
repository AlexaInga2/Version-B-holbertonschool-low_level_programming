#include "holberton.h"
/**
 * _strcpy - copies string from src, w/ ('\0'), to buffer pointed to by dest.
 * @dest: destination string pointer
 * @src: source string pointer
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	{

	while ((dest[i] = src[i]))
		i++;
	}
	return (dest);
}

/** function _strcpy already includes terminating null byte (\0) so dn't add */
