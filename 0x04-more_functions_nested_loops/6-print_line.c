#include "holberton.h"
/**
 * print_line - It will draw a straight line in the terminal.
 *@n - Input that define length of line
 * Return: void
 */
void print_line(int n)
{
int i;

for (i = 0; i <= n; i++)
{
if (n < 0)
	break;
_putchar('_');
}
_putchar('\n');
}
