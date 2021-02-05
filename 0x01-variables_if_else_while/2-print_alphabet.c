nclude <stdio.h>

/**
 * main -  It will  print the alphabet in lowercase\n
 *
 * Return: 0
 */
int main(void)
{
	int letter;

	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
		putchar(letter++);
	putchar('\n');
	return (0);
}i
