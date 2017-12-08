#include "lists.h"
/**
 * sum_dlistint - sums the data of a dlistint_t list
 * @head: head of list
 * Return: sum of data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
