#include "holberton.h"
/**
 * swap_int - swaps value of a & b integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of the two parameters
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
