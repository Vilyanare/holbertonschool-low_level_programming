#include "lists.h"
/**
  *print_listint - print all elements of a listint_t
  *@h: list to be printed
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	if (h->next == NULL)
		return (1);
	else
		return (print_listint(h->next) + 1);
}
