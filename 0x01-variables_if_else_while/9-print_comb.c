#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sdn = 48;

	while (sdn < 58)
	{
		putchar(sdn);
		if (sdn != 57)
		{
			putchar(',');
			putchar(32);
			sdn++;
		}
		else
			sdn++;
	}
	putchar('\n');
	return (0);
}
