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
	dlistint_t *temp = NULL;
	dlistint_t *idxn = *h;
	unsigned int x = 0;

	while (idxn)
	{
		if (x == idx)
			break;
		idxn = idxn->next;
		if (idxn)
			x++;
	}
	if (x < idx)
		return (NULL);
	if (h == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = idxn;
	temp->prev = *h;
	if (idxn != NULL)
	{
		temp->prev = idxn->prev;
		idxn->prev = temp;
	}
	if (temp->prev)
		temp->prev->next = temp;
	else
		*h = temp;
	return (temp);
}
