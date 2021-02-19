#include "holberton.h"
/**
 * char_string - This function capitalizes all words of a string.
 * @s: string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int n, m;

	char spec_ch[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (n = 0; s[n] != '\0'; n++)
	{
		if (n == 0 && s[n] >= 'a' && s[n] <= 'z')
			s[n] -= 32;

		for (m = 0; m < 13; m++)
		{
			if (s[n] == spec_ch[m])
			{
				if (s[n + 1] >= 'a' && s[n + 1] <= 'z')
				{
					s[n + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
