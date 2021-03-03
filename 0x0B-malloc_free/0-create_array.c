#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars and initializes with specific char
 *@size: size of
 *@c: character to initialize it with
 *
 *Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * size);

	if (ch == NULL)
		return (NULL);

	while (i < size)
	{
		*(ch + i) = c;
		i++;
	}

	return (ch);
}
