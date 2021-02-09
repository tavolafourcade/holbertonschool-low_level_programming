#include "holberton.h"

/**
 * print_sign - check if n is greater than zero, 0 if is 0 and -1 in other case
 * @n: character
 * Return: 1, 0 or -1.
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
