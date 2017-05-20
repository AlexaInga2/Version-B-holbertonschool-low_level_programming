#include "holberton.h"
/**
 * print_square - print the size of the square
 * @size: the size of the square
 * Return: Always 0
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
