#include "holberton.h"

/**
 * puts_half - Prints second half of a string.
 * @str: string
 * Description: if number of characters is odd,
 * the function should print the last n characters.
 * where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	for (n = n / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
