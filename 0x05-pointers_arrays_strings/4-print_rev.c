#include "holberton.h"
/**
 *print_rev - function that prints a string in reverse
 *@s: string
 *Return: void
 */
void print_rev(char *s)
{
int i;

while (s[i] != '\0')
	i++;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
