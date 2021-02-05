#include <stdio.h>

/**
 * main - It will print alphabet in lowercase\n -q -e
 *
 * Return: Always 0 (0 = Success)
 */
int main(void)
{
	int letter;

	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
