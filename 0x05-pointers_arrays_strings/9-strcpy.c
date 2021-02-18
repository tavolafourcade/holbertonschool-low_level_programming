#include "holberton.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0)
 * @dest: string.
 * @src: string.
 * Description: It will copy the string  pointed 'src'
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (src[i] != '\0')
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
