#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: string to match
 * Description:
 * Return: pointer to the byte in 's' that matches one of the bytes in 'accept'
 * or 'NULL' if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (n = 0; *s != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
