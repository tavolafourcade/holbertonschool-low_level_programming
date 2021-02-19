#include "holberton.h"

/**
 * reverse_array - This function will reverse the content of an array.
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0, tmp = 0;

	j = n - 1;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;

		i++;
	}

}
