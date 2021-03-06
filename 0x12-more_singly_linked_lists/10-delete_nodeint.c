#include "lists.h"
/**
 *delete_nodeint_at_index - deletes a node at index
 *@head: beginning of list
 *@index: index of node to be deleted
 *Return:1 on success -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len = 0;
	unsigned int x = 1;
	listint_t *temp = NULL;
	listint_t *idxnode = *head;

	if (*head == NULL)
		return (-1);
	temp = *head;
	for (len = 1; temp->next != NULL; len++)
		temp = temp->next;
	if (len < index + 1)
		return (-1);
	for (; x < index; x++)
		idxnode = idxnode->next;
	temp = idxnode->next;
	if (index == 0)
	{
		*head = temp;
		free(idxnode);
	}
	else
	{
		idxnode->next = temp->next;
		free(temp);
	}
	return (1);
}
