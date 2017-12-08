#include "lists.h"
/**
 * dlistint_len - find length of a dlistint_t
 * @h: head of list
 * Return: size of list
 */
size_t dlistint_len(dlistint_t *h)
{
	int length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
