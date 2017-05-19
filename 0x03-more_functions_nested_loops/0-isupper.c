#include "holberton.h"
#include <ctype.h>
/**
 * i_supper - Check for a uppercase letter
 * @c: The character to be checked
 *
 * Return: nonzero if the character c falls into the tested class, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
