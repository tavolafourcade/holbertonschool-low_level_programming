#include "holberton.h"
/**
 * _strncat - It will  to concatenate two strings
 * @dest: char type string
 * @src: char type string
 * @n: max umber of bytes from src
 * Return: pointer to resulting string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; src[j] != '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
