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
int num = '0';

	while (num>='0' && num <= '9')
	{
		putchar(num);
		if (num = '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);

}
