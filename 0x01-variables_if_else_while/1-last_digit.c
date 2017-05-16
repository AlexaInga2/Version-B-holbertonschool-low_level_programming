#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- entry point
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n;
	int ln = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ln);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is greater than 5 and is 0", n, ln);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5 and is less than 6 and not 0\n", n, ln);
	}
	return (0);
}
