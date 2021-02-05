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
char ch;

for (ch = 48; ch<=57; ch++)
{
if (ch == 57)
{
	putchar(ch);
	putchar('\n');
	break;
}	
	putchar(ch);
	putchar(',');
	putchar(' ');
	putchar('\n');
	
}
return (0);
}
