#include "lists.h"
/**
 *sum_listint - returns a sum of all data from member n of all nodes
 *@head: beginning of list
 *Return: the summed data
 */
int sum_listint(listint_t *head)
{
	unsigned int len = 0;
	unsigned int x = 0;
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	for (len = 1; temp->next != NULL; len++)
		temp = temp->next;
	temp = head;
	for (; x < len; x++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
