#include "lists.h"
/**
  *list_len - returns number of nodes in list_t
  *@h: first node in list
  *Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	else
		return (list_len(h->next) + 1);
}
