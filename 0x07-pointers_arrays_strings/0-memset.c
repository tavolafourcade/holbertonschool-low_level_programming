#include "holberton.h"
/**
 * _memset - Fills memory area with n bytes
 * Desc: _memset
 * @s: char type
 * @b: char type
 * @n: int type
 * Return: char type
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;

	while (n > 0)
	{
		s[m] = b;
		m++;
		n--;
	}

	return (s);
}
