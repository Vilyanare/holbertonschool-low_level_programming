#include "lists.h"
/**
 * free_listint_safe - free a listint_t
 * @h: beginning of list
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int count = 0;
	unsigned int check = 0;
	listint_t *freep = *h;
	listint_t *checker = *h;

	while (freep)
	{
		checker = *h;
		check = 0;
		free(freep);
		count++;
		freep = freep->next;
		while (check < count)
		{
			if (checker == freep)
			{
				*h = NULL;
				return (count);
			}
			checker = checker->next;
			check++;
		}
	}
	*h = NULL;
	return (count);
}
