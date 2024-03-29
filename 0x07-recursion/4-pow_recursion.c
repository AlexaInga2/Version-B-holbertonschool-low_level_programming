#include "holberton.h"
/**
 * _pow_recursion - prints a string followed by a new line
 * @x: string to print
 * @y: raising the power
 * Return: -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
