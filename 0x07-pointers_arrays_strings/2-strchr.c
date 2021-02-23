#include "holberton.h"
/**
 * _strchr - Function that returns a ppointer to c in string s
 * @s: char type
 * @c: char type
 * Return: the pointer to c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (i != '0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
