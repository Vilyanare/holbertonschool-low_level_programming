#include "lists.h"
/**
  *sum_listint - returns a sum of all data from member n of all nodes
  *@head: beginning of list
  *Return: the summed data
  */
int sum_listint(listint_t *head)
{
	unsigned int len = listint_len(head);
	unsigned int x = 0;
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	for (; x < len; x++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
