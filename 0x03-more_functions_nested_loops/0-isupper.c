#include "holberton.h"
/**
 * i_supper - check for a uppercase letter
 * @c: the character to be checked
 * Return: 1 if the character c falls into the tested class, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
