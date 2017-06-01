#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Makes the sum of two numbers
 * @a: First operand
 * @size: Second operand
 *
 * Return: The sum of the two parameters
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, r = 0, c = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		r += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		c += *(a + k);
	}
	printf("%i, %i\n", r, c);
}
