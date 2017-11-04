#include "lists.h"
/**
 * reverse_listint - reverse a listint_t
 * @head: start of the list to reverse
 * Return: pointer to new head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tail = NULL;
	listint_t *middle = *head;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (middle->next == NULL)
		return (middle);
	middle = middle->next;
	(*head)->next = NULL;
	if (middle->next == NULL)
	{
		middle->next = *head;
		*head = middle;
		return (middle);
	}
	tail = middle->next;
	while (tail->next)
	{
		middle->next = *head;
		*head = middle;
		middle = tail;
		tail = tail->next;
	}
	middle->next = *head;
	tail->next = middle;
	*head = tail;
	return (*head);
}