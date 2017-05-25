#include "holberton.h"
#include <stdio.h>
/**
 * is_positive - Check if a number is greater than 0
 * @a: The pointer
 * @n:the element to be checked
 * Return: 1 if the number is positive. 0 otherwise
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
