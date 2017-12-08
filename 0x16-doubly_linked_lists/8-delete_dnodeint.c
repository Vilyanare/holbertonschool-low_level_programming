#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index in dlistint_t list
 * @head: head of list
 * @index: position of node to delete
 * Return: 1 if succesful or -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *find = *head;

	while (find)
	{
		if (x == index)
			break;
		find = find->next;
		if (find)
			x++;
	}
	if (x < index)
		return (-1);
	if (find)
	{
		if (find->next)
			find->next->prev = find->prev;
		if (find->prev)
			find->prev->next = find->next;
		else
			*head = find->next;
		free(find);
		return (1);
	}
	return (-1);
}
