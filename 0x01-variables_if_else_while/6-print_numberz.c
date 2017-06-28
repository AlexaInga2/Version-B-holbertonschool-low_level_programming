#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Prints consecutive base 10 ints under 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* local variable definition */
	int i = 48;
	/* while loop execution */
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
