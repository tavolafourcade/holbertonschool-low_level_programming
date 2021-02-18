#include "holberton.h"
/**
 *rev_string - function that reverses a string
 *@s: string
 *Return: void
 */
void rev_string(char *s)
{
	char len = _strlen(s);
	int i;
	int j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char tmp = s[i];

		s[i] = s[j];
		s[j] = tmp;
	}
}
/**
*_strlen - returns the total length of a string
*@s: array
*Return: the total length
*/
int _strlen(char *s)
{
int i;
int len = 0;

for (i = 0; s[i] != '\0'; ++i)
	len++;
return (len);
}
