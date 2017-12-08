#include "lists.h"
/**
 * get_dnodeint_at_index - find nth node of dlistint_t list
 * @head: head of list
 * @index: position of node to retrieve
 * Return: address of node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int x = 0;

	while(temp)
	{
		if (x == index)
			return (temp);
		temp = temp->next;
		x++;
	}
	return (NULL);
}
