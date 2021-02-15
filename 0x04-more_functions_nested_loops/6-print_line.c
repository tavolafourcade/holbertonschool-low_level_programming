#include "holberton.h"
/**
*print_line - It prints a line
*@n: variable n
*Return: void
*/
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
if (n <= 0)
	break;
_putchar('_');
}
_putchar('\n');
}
