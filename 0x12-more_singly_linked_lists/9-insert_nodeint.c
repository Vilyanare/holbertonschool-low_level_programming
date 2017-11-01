#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at given position
 *@head: beginning of list
 *@idx: where to insert new node
 *@n: value of member n of new node
 *Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL;
	listint_t *idxnode = *head;
	unsigned int len = 0;
	unsigned int x = 1;

	/*make a list if index 0 and head null*/
	if (*head == NULL && idx == 0)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->next = NULL;
		(*head)->n = n;
		return (*head);
	}
	/*check if pointers are null*/
	if (head == NULL || *head == NULL)
		return (NULL);
	/*count list*/
	temp = *head;
	for (len = 1; temp->next != NULL; len++)
		temp = temp->next;
	/*if index is larger than list return null*/
	if (len < idx + 1)
		return (NULL);
	/*allocate memory for new node check for fail*/
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	/*update pointer to index location*/
	for (; x < idx; x++)
		idxnode = idxnode->next;
	/*if first node*/
	if (*head == idxnode)
	{
		*head = temp;
		temp->next = idxnode;
	}
	/*if last node*/
	else if (idxnode->next == NULL)
	{
		temp->next = NULL;
	}
	else
	{
		temp->next = idxnode->next;
		idxnode->next = temp;
	}
	/*assign new node data*/
	temp->n = n;
	/*return address of new node*/
	return (temp);
}
