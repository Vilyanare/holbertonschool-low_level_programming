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
 *list_len - returns number of nodes in list_t
 *@h: first node in list
 *Return: number of nodes
 */
size_t list_len(const list_t *h) 
{
	if (h == NULL)
		return(0);
	if (h->next == NULL)
		return(1);
	else
		return(list_len(h->next) + 1); 
}

/**
 *add_node_end - adds a node to end of a list_t
 *@head: beginning of list_t
 *@str: string to add to new node
 *Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n = list_len(*head);
	list_t *temp = NULL;
	list_t *tail = *head;
	unsigned int x;

	for (x = 1; x < n; x++)
		tail = tail->next;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return(NULL);
	if (tail != NULL)
		tail->next = temp;
	else
		*head = temp;
	temp->str = strdup(str);
	temp->len = _strlen(temp->str);
	temp->next = NULL;
	return(temp);
}
