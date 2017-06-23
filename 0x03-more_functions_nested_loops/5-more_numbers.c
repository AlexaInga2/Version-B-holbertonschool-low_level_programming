#include "holberton.h"
/**
 * more_numbers- prints numbers 0-14 10x
 */
void more_numbers(void)
{
	int i, numb, tens, ones;

	for (i = 0; i < 10; i++)
	{
		for (numb = 0; numb <= 14; numb++)
		{
			tens = numb / 10;
			ones = numb % 10;
			if (tens > 0)
				_putchar('0' + tens);
			_putchar('0' + ones);
		}
		_putchar('\n');
	}
}
