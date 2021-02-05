#include <stdio.h>

/**
 * main - It will print the alphabet in lowercase\n
 *
 * Return: 0 if it's Success
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
