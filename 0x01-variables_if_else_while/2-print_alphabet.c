#include <stdio.h>
/**
 * main- entry point
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
