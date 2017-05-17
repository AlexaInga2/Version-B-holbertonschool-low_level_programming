#include <stdlib.h>
<<<<<<< HEAD
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
					return (0);
=======
#include <time.h>
#include <stdio.h>
/**
 * main- entry point
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n
	int ln= n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if( n > 5 )
	{
		printf("Last digit of %d is %d and is greater than 5", n, ln );
	}	
	else if( n == 0 )
	{
		printf("Last digit of %d is %d and is greater than 5 and is 0", n,ln );
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5 and is less than 6 and not 0\n", n,ln );
	}
	return (0);
>>>>>>> 7047c877f555ab99bb9f66295d6265b1d88cfc36
}
