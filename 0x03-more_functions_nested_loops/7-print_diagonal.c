#include "holberton.h"
/**
 * print_diagonal - print the int diagonal.
 * @n: the integer being checked
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)/* if n is greater than 0, it prints lines (a) & space (b) */
	{
		for (a = 0; a < n; a++)/* this is for the lines */
		{
			for (b = 0; b < a; b++)/* this is for the spaces */
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else/* if a is less than 0, it just prints new line */
		_putchar('\n');

}
