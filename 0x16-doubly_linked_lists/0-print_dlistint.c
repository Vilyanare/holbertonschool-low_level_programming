#include "lists.h"
/**
 * print_dlistint - print all elemnts of a dlistint_t
 * @h: head of list
 * Return: number of nodes in list
 */
size_t print_dlistint(dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
