#include <stdio.h>
/**
 * main - Entry point
 *
 * Desription - prints all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int sd = 0;

	while (sd < 10)
	{
		printf("%i", sd);
		sd++;
	}
	putchar('\n');
	return (0);
}
