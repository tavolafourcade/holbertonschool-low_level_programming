#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Print number from 00 to 99
 *Description: Print all number from 00 to 99 in ascending order
 *Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '9' && j == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
