#include "variadic_functions.h"
/**
 * sum_them_all - sum of all the parameters w/i the elipsies
 * @n: 
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, unsigned int);
		i++;
	}
	va_end(args);
	return (sum);
}
