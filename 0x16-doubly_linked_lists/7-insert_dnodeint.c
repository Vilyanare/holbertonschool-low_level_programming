#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at nth position in dlistint_t list
 * @h: head of list
 * @idx: position to insert node at
 * @n: data to set n member to
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *idxn = *h, *idxprev = *h;
	unsigned int x = 0;

	if (h == NULL)
		return (NULL);
	while (idxn)
	{
		idxn = idxn->next;
		if (x == idx)
			break;
		if (idxn)
			idxprev = idxn;
		x++;
	}
	if (x < idx)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = idxn;
	temp->prev = idxprev;
	if (idxprev && idx)
		idxprev->next = temp;
	if (idxn && idx)
		idxn->prev = temp;
	if (idx == 0)
	{
		temp->prev = NULL;
		temp->next = idxprev;
		if (idxprev)
			temp->next->prev = temp;
		*h = temp;
	}
	return (temp);
}
