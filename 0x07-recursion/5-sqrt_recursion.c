#include "holberton.h"
/**
 * sqrt_check - setting sqrt to 0
 * @n: natural number
 * @s: sqrt of natural #
 * Return: -1 or  sqrt of natural #
 */
int sqrt_check(int s, int n)
{
	if (s * s == n)
		return (s);
	if (s * s > n)
		return (-1);
	return (sqrt_check(s + 1, n));
}

/**
 * _sqrt_recursion - checks for the square root of a natural number
 * @n: natural number
 *
 * Return: -1 if n < 0, or sqrt function if n >0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_check(0, n));
}
