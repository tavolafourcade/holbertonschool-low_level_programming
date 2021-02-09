#include "holberton.h"

/**
 * _abs - compute the absolute value.
 * @n: input value
 * Return: abs value.
 */
int _abs(int n)
{
if (n < 0)
	n = -n;
return (n);
}
