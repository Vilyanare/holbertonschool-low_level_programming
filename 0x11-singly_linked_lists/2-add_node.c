#include "lists.h"
/**
 *_strlen - find length of a str
 *@s: string to be evaluated
 *Return: length of str
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;
	return (x);
}
/**
 * add_node - adds a new node at the beginning of a list_t
 *@head:pointer to the begining of the list
 *@str: string to be copied into str member
 *Return: updated pointer to beginning of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp->next = *head;
		(*head) = temp;
	}
	(*head)->str = strdup(str);
	(*head)->len = _strlen((*head)->str);
	if (str == NULL)
		(*head)->str = NULL;
	(*head)->next = NULL;
	return (*head);
}
