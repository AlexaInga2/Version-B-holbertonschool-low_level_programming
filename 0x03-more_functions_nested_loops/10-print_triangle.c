#include "holberton.h"
/**
 * print_triangle - print out a triangle
 * @size: integer being processed
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b, c, sp, hash;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			sp = size - a;
			hash = size - sp;
			for (b = 1; b <= sp; b++)
				_putchar(' ');
			for (c = 1; c <= hash; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
