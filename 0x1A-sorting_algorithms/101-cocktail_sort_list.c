#include "sort.h"

/**
 * shake_left - sorts a linked list moving backwards through the list
 * @list: pointer to head of the list
 * @current: pointer to end of list
 */
void shake_left(listint_t **head, listint_t **end)
{
	listint_t *current = *end;

	while (current->prev)
	{
		if (current->n < current->prev->n)
		{
			if (current->prev->prev == NULL)
				*head = current;
			if (current->next)
				current->next->prev = current ->prev;
			current->prev->next = current->next;
			current->next = current->prev;
			current->prev = current->prev->prev;
			if (current->prev)
				current->prev->next = current;
			current->next->prev = current;
			print_list(*head);
		}
		else
			current = current->prev;
	}
}
/**
 * shake_right - sorts a linked list moving forwards through the list
 * @list: pointer to head of list
 */
int shake_right(listint_t **list)
{
	listint_t *current = *list;
	int f = 0;

	while (current->next)
	{
		if (current->n > current->next->n)
		{
			if (current->prev == NULL)
				*list = current->next;
			current->next->prev = current->prev;
			if (current->prev)
				current->prev->next = current->next;
			current->prev = current->next;
			if (current->next->next)
				current->next->next->prev = current;
			current->next = current->next->next;
			current->prev->next = current;
			f = 1;
			print_list(*list);
		}
		else
			current = current->next;
	}
	if (f == 1)
		shake_left(list, &current);
	return (f);
}
/**
 * cocktail_sort_list - sort a list by alternating forwards and backwards sorting
 * @list: list to be sorted
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	int f = 0;

	if (list == NULL || *list == NULL)
		return;
	current = *list;
	if (current->next == NULL)
		return;
	do {
		f = 0;
		f = shake_right(list);
	} while (f == 1);
}
