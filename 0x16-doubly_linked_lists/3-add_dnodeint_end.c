#include "lists.h"
/**
 * add_dnodeint_end - add a node to end of a dlistint_t list
 * @head: head of list
 * @n: integer to set n member of new node
 * Return: address to new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *tail = *head;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	if (tail)
	{
		while (tail->next)
			tail = tail->next;
		tail->next = temp;
	}
	temp->n = n;
	temp->next = NULL;
	temp->prev = tail;
	if (!(tail))
		*head = temp;
	return (temp);
}
