#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char az = 'a';
	int i = 0;

	while (i <= 10)
	{
		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		i++;
		_putchar('\n');
	}
}
