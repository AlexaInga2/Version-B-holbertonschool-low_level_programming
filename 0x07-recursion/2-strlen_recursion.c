#include "holberton.h"
/**
 * _strlen_recursion - calculate the length of a string
 * @s: string to print
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
