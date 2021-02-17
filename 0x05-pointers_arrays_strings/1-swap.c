#include "holberton.h"
/**
*swap_int - swap integer values
*@a: first integer
*@b: second integer
*Return: void
*/
void swap_int(int *a, int *b)
{
int temporal_value;

temporal_value = *a;
*a = *b;
*b = temporal_value;
}
