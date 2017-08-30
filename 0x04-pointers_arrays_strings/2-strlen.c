#include "holberton.h"
/**
 * _strlen - function calculates the length of the string s
 * @s: The string being calculated and returned
 *
 * Return: returns the number of bytes in the string s.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);

}
