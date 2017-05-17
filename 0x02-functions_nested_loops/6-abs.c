#include "holberton.h"
#include <stdlib.h>
/**
 * _abs - checks absolute value of integers
 * @v: integer to be checked
 *
 * Return: v
 */
int _abs(int v)
{
	return (v * (v < 0) * (-1) + (v > 0));
}
