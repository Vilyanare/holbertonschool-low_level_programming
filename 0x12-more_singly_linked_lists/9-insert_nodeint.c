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
	unsigned int c = listint_len(*head);
	unsigned int x = 1;

	if (c < idx + 1)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	for (; x < idx; x++)
		idxnode = idxnode->next;
	temp->next = idxnode->next;
	idxnode->next = temp;
	temp->n = n;
	return (temp);
}
