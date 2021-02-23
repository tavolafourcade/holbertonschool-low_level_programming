#include "holberton.h"
/**
 * _strspn - Function that gets the length of a prefix subtring
 * @s: char type
 * @accept: char type
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (s[i] != accept[j])
			break;
		j = 0;
		i++;
	}
	return (i);
}
