#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: input
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int lastValue = n % 10;

if (n < 0)
	lastValue = lastValue * -1;
_putchar(lastValue + '0');
return (lastValue);
}
