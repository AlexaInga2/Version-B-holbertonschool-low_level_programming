#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to get last digit of
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
