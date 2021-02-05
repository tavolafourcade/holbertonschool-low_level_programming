#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Print if is positive, zero or negative
 *
 *Description: It gets a random number and shows if it is
 *positive, negative, or zero.
 *Return: Returns 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	return (0);
}
