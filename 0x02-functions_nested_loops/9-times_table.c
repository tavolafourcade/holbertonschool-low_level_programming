#include "holberton.h"

/**
 * times_table - prints the 9 times table staarting with 0.
 *
 * Return: Void
 */
void times_table(void)
{
int i;
int j;
int k;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
_putchar(k + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
