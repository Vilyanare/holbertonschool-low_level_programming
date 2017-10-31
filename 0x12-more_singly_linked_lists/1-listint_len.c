#include "lists.h"
/**
  *listint_len - returns number of elements in a listint_t
  *@h: list to count
  *Return: Nodes in list
  */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	else
		return (listint_len(h->next) + 1);
}
