#include "lists.h"
/**
 * find_listint_loop - find the address of a loop in a linked list
 * @head: beginning of list
 * Return: address of loop or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	if (head == NULL)
		return (NULL);
	while (fast->next && fast && slow)
	{
		if (fast == slow)
		{
			fast = head;
			while(fast != slow)
			{
				fast = fast->next;
				slow = slow->next;
			}
			return (fast);
		}
	}
	return (NULL);
}