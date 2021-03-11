#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-op_functions.c"
/**
 *get_op_func - returns a pointer to a function
 *@s: operator passed as argument
 *
 *Description: looks at sign argument and returns a pointer to function
 *Return: a pointer to a function that takes two ints and returns an int
 */
int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
      {"+", op_add},
      {"-", op_sub},
      {"*", op_mul},
      {"/", op_div},
      {"%", op_mod},
      {NULL, NULL}};
  int i;

  i = 0;

  while (i < 5)
  {
    if (strcmp(ops[i].op, s) == 0)
      return (ops[i].op);
    i++;
  }
  printf("Error\n");
  exit(99);
}