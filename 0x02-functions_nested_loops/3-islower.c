#include "holberton.h"
/**
 * _islower - Check lowercase letters, if not return 1 or else  0
 * @c: The letter to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
