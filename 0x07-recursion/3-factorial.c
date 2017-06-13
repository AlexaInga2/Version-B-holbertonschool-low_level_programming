#include "holberton.h"
/**
<<<<<<< HEAD
 *  factorial - returns factorial of given #
 * @n: integer to find factorial
 *
 * Return: factorial of n-1, -1 if n<0, 1 if n==0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
=======
 * factorial - returns factorial of given #
 * @n: integer to find factorial
 *
 * Return: factorial of n, -1 if n<0, 1 if n==0
 */
int factorial(int n)
{
  if (n < 0)
    return (-1);
  if (n == 0)
    return (1);
  return (n * factorial(n-1));
>>>>>>> d7aa629a3d163fab19058268169c164edb033a1b
}
