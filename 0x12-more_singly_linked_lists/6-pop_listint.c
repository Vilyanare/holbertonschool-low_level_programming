#include "lists.h"
/**
 *pop_listint - deletes head node of a listint_t
 *@head: first node in list
 *Return: data held in n member of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int x;

	if (*head == NULL)
		return (0);
	x = temp->n;
	if (temp->next != NULL)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		*head = NULL;
	}
	return (x);
}
