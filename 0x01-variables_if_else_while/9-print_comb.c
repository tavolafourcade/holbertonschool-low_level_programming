#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Print all combinations
 *Description: Prints all combinations of single-digit numbers.
 *Return: 0
 */

int main(void)
{
int ch;

for (ch = 48; ch <= 57; ch++)
{
	putchar(ch);
if (ch >= 48 && ch <= 56)
{
	putchar(',');
	putchar(' ');
}
if (ch == 57)
	putchar('\n');
}
return (0);
}
