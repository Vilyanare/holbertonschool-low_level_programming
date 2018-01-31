#include "sort.h"

/**
 * insertion_sort_list - Sort a linked list with insertion sort method
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	if (list)
		if (*list)
			current = *list;
	while (current)
	{
		if (current->prev == NULL || current->n > current->prev->n)
			current = current->next;
		else
		{
			if (current->next)
				current->next->prev = current->prev;
			if (current->prev)
			{
				current->prev->next = current->next;
				if (current->prev->prev)
					current->prev->prev->next = current;
			}
			current->next = current->prev;
			current->prev = current->prev->prev;
			if (current->next)
				current->next->prev = current;
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
		}
	}
}
