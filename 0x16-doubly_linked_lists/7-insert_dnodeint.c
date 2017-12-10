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

	while (idxn->next)
	{
		if (x == idx)
			break;
		idxn = idxn->next;
		x++;
	}
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL || h == NULL || x < idx)
		return (NULL);
	temp->n = n;
	temp->next = idxn;
	temp->prev = NULL;
	if (idxn == NULL)
		*h = temp;
	else if (idxn->next == NULL)
	{
		temp->next = NULL;
		idxn->next = temp;
		temp->prev = idxn;
	}
	else
	{
		temp->prev = idxn->prev;
		idxn->prev = temp;
		temp->prev->next = temp;
	}
	if (idx == 0 && idxn)
	{
		idxn->prev = temp;
		*h = temp;
	}
	return (temp);
}
