#include "holberton.h"
/**
 * _memcpy - Function that copies n bytes from memory area src to dest
 * @dest: char type
 * @src: char type
 * @n: int type
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
