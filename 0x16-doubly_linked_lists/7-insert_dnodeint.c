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
	dlistint_t *temp = NULL, *idxn = *h, *idxprev = NULL;
	unsigned int x = 0;

	while (idxn)
	{
		idxn = idxn->next;
		if (x == idx)
			break;
		if (idxn)
		{
			idxprev = idxn;
			x++;
		}
	}
	if (h == NULL || x < idx)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = idxn;
	temp->prev = idxprev;
	if (idxprev)
		idxprev->next = temp;
	if (idxn)
		idxn->prev = temp;
	if (idx == 0)
		*h = temp;
	return (temp);
}
