#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 * @c: character
 * Return: 1 if is lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
