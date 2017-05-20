#include <stdio.h>
/**
 * main - printing from main
 * printing 1-100
 * printing fizzbuzz, fizz, and buzz for variations
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) && (n % 5) == 0) /*n has2b =0,n/perfect#,rem0=mult*/
			printf("FizzBuzz");
		else if ((n % 3) == 0) /*6/3=3,making % 0. so its a multiplier*/
			printf("Fizz");
		else if ((n % 5) == 0) /*since remainder is0,# / perfectly=mul*/
			printf("Buzz");
		else
			printf("%d", n);/*%d 2c what int value isused2rep char*/
		if (n != 100) /*ensures there will be a space++ w/ #'s & words*/
			printf(" ");
	}
	printf("\n");
	return (0);
}
/*%d, if u like, to see what integer value is used to represent the character*/
