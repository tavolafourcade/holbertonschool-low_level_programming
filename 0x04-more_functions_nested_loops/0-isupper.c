#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - It checks if c is uppercase or not
 * @c: variable to be evaluated
 * Return: 1 if c iS uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
