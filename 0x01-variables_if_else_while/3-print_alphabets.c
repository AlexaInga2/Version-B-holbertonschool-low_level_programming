#include <stdio.h>
/**
 * main- entry point
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char az = 'a';
	char AZ = 'A';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	while (AZ <= 'Z')
	{
		putchar(AZ);
		AZ++;
	}
	putchar('\n');
	return (0);
}
