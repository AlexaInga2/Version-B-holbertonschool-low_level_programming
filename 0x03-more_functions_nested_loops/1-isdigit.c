#include "holberton.h"
/**
 * _isdigit - checks for a digit 0-9
 * @c: The number to be checked
 *
 * Return: non zero if c falls into the tested class, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
