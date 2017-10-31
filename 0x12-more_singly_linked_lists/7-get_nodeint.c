#include "lists.h"
/**
 *get_nodeint_at_index - returns nth node of a listint_t
 *@head: beginning of list
 *@index: node to return
 *Return: address of node at indexth position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;
	unsigned int x = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	for (len = 1; temp->next != NULL; len++)
		temp = temp->next;
	if (len < index + 1)
		return (NULL);
	temp = head;
	for (x = 0; x != index; x++)
		temp = temp->next;
	return (temp);
}

