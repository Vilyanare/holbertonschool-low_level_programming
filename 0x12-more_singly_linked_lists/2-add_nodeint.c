#include "lists.h"
/**
 *add_nodeint - add a new node at beginning of listint_t
 *@head: list to add node too
 *@n: number to add to list
 *Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}
	temp->n = n;
	return (temp);
}
