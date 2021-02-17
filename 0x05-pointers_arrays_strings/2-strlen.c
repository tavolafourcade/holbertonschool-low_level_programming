#include "holberton.h"
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
