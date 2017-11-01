#include "lists.h"
/**
 *free_listint - free a listint_t
 *@head: beginning of list
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}
/**
 *free_listint2 - free a listint_t and set *head to null
 *@head: beginning of list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	free_listint(*head);
	*head = NULL;
}
