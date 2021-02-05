#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: 0 
 */

int main(void)
{
int letter;
	while (letter >= 'a' && letter <= 'z')
		putchar(letter--);
	putchar('\n');
	return (0);
}
