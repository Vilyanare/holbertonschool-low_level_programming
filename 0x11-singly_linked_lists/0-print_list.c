#include "lists.h"
/**
  * print_list - prints all elements of a list_t
  *@h: first node of list
  *Return: how many nodes were traversed
  */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return(0);
	if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	if (h->next == NULL)
		return (1);
	else
		return (print_list(h->next) + 1);
}
