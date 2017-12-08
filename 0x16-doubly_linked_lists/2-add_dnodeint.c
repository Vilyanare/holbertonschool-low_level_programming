#include "lists.h"
/**
 * add_dnodeint - add a node at the beggining of a dlistint_t
 * @head: double pointer to head of list
 * @n: number to add to n member
 * Return: Address of new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = (*head == NULL) ? NULL : *head;
	temp->prev = NULL;
	temp->n = n;
	if (*head)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
