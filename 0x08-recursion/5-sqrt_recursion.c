#include "holberton.h"
/**
 * calc_sqrt - validation of the number.
 * @n: input value.
 * @y: number calc.
 * Return: returns the natural square root of a number.
 */
int calc_sqrt(int n, int y)
{
	if ((y * y) == n)
		return (y);
	if ((y * y) > n)
		return (-1);
	return (calc_sqrt(n, (y + 1)));
}

/**
 * _sqrt_recursion - returns the natural square root of a number..
 * @n: input value.
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (calc_sqrt(n, 0));
}
