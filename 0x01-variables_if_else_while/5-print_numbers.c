#include <stdio.h>
/**
 * main- entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char a;

	while (a <= 9)
	{
		putchar (a);
		a++;
	}
	putchar ('\n');
	return (0);
}
