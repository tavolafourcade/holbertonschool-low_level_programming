#include "holberton.h"

/**
 * print_to_98 - Prints all natural number from n to 98.
 *@n: number
 * Return: Void
 */
void print_to_98(int n)
{
	while (n < 98)
		printf("%d, ", n++);
	while (n > 98)
		printf("%d, ", n--);
	if (n == 98)
		printf("%d\n", n);
}
