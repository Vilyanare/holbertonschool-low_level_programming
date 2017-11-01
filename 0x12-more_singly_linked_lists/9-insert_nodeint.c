#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at given position
 *@head: beginning of list
 *@idx: where to insert new node
 *@n: value of member n of new node
 *Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL;
	listint_t *idxnode = *head;
	unsigned int len = 0;
	unsigned int x = 1;

	if (*head == NULL && idx == 0)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->next = NULL;
		(*head)->n = n;
		return (*head);
	}
	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	for (len = 1; temp->next != NULL; len++)
		temp = temp->next;
	if (len < idx && idx != 0)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	for (; x < idx; x++)
		idxnode = idxnode->next;
	if (*head == idxnode && idx == 0)
	{
		*head = temp;
		temp->next = idxnode;
	}
	else if (idxnode->next == NULL)
		temp->next = NULL;
	else
	{
		temp->next = idxnode->next;
		idxnode->next = temp;
	}
	temp->n = n;
	return (temp);
}
