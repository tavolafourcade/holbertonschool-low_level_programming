#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 * @c: character
 * Return: 1 if is a letter.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
