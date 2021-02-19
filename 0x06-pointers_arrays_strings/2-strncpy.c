#include "holberton.h"

/**
 * _strncpy - The function copies a string.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Description: This function should work exactly like strncpy
 * Return: pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
