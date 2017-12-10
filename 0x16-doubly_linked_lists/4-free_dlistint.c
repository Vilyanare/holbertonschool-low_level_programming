#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (head->next)
			free_dlistint(head->next);
		free(head);
	}
}
