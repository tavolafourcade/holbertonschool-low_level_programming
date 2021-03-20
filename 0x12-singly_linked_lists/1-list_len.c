#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: given list.
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
  int elements = 0;

  while (h != NULL)
  {
    h = h->next;
    elements++;
  }
  return (elements);
}