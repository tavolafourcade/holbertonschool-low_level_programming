#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: array of integers
 * @n: int.
 * Description: numbers must be separated by comma, followed by a space,
 * the numbers should be displayed in the same order
 * as they are stored in the array.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", ");
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
