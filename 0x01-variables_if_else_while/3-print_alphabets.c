#include <stdio.h>

/**
 * main - It will print the alphabet in lowercase\n
 *
 * Return: 0 if it's Success
 */
int main(void)
{
	char letter = 'a';
	char letter2 = 'A';
	while (letter >= 'a' && letter <= 'z')
		putchar(letter++);
	while (letter2 >= 'A' && letter2 <= 'Z')
		putchar(letter2++);
	putchar('\n');
	return (0);
}
