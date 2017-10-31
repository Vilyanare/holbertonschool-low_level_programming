#include "lists.h"
#ifndef LISTINT_LEN
#define LISTINT_LEN
/**
 *listint_len - returns number of elements in a listint_t
 *@h: list to count
 *Return: Nodes in list
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	else
		return (listint_len(h->next) + 1);
}
#endif
/**
 *add_nodeint_end - add a new node to end of listint_t
 *@head: beginning of list
 *@n: number to add to member n
 *Return: addres of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
	listint_t *tail = *head;
	unsigned int x = 0;
	unsigned int c = listint_len(*head);

	for (x = 1; x < c; x++)
		tail = tail->next;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
		*head = temp;
	else
		tail->next = temp;
	temp->n = n;
	temp->next = NULL;
	return (temp);
}
