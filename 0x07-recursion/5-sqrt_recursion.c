#include "holberton.h"
/**
 * _sqrt_recursion - prints the natural sqrt of a #
 * @n: the natural number
 * @s: the sqare root of natural number
 * @calcsqrt: function for establishing 0 as starting point for sqrt
 * Return: -1 if n ! have natural sq root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
}

/**
 * calcsqrt - finds the natural sqrt of a #
 * @n: the natural number
 * @s: the square root of natural number
 * @calcsqrt: function for establishng 0 as starting point for sqrt
 * Return: s and s + 1 if s = n
 */
int calcsqrt(int s, int n)
{
	int (calcsqrt(0, n));

	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	return (calcsqrt(s + 1, n));

}
