#include "holberton.h"
/**
 *rev_string - function that reverses a string
 *@s: string
 *Return: void
 */
void rev_string(char *s)
{
	int i, j = 0;
	char length = _strlen(s);
	char temporal;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temporal = s[i];
		s[i] = s[j];
		s[j] = temporal;
	}
}
/**
*_strlen - returns the total length of a string
*@c: array
*Return: the total length
*/
int _strlen(char *c)
{
int i;
int length = 0;

for (i = 0; c[i] != '\0'; ++i)
	length++;
return (length);
}
