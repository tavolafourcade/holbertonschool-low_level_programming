#include "holberton.h"

/**
 * _strcmp - This function compares two strings.
 * @s1: char type string
 * @s2: char type string
 *
 * Return: the result of comparing two strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
