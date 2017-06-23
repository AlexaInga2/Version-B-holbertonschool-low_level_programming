#include "holberton.h"
/**
 * print_line - print "_"
 * @n: the integer being compared
 * Return: Always 0.
 */
void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
			_putchar('_');
	}
	_putchar('\n');
}
