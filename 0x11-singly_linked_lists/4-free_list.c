#include "lists.h"
/**
  *free_list - free a list 
  *@head: first node of the list
  */
void free_list(list_t *head)
{
	free(head->str);
	if(head->next != NULL)
		free_list(head->next);
	free(head);
}
