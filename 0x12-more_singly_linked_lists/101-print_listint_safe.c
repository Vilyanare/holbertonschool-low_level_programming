#include "lists.h"
/**
 * print_listint_safe - prnts a listint_t with a possible loop
 * @head: beginning of list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int count = 0;
	unsigned int check = 0;
	const listint_t *printer = head;
	const listint_t *checker = head;

	if (head == NULL)
		return (0);
	while (printer)
	{
		checker = head;
		check = 0;
		while (check < count)
		{
			if (checker == printer)
				return (count);
			checker = checker->next;
			check++;
		}
		printf("%d\n", printer->n);
		count++;
		printer = printer->next;
	}
	return (count);
}
