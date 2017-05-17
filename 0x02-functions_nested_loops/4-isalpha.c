#include "holberton.h"
/**
 * _isalpha -check for a-z characters, return 1 if letter, az or AZ, else 0
 * @c: The variable to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
