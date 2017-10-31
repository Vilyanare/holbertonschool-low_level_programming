# More singly linked lists
---
File|Descrition
---|---
0-print\_listint.c|Prints all elements of a list
1-listint\_len.c|Returns number of nodes of list
2-add\_nodeint.c|Add a node at beginning of list
3-add\_nodeint\_ned.c|Add a node at end of list
4-free\_listint.c|Free a list
5-free\_listint2.c|Free a list and set head to NULL
6-pop\_listint.c|Delete head node of list
7-get\_nodeint.c|Return address of node at index
8-sum\_listint.c|Sum all data in member n of list
9-insert\_nodeint.c|Add a new node at index
10-delete\_nodeint.c|Delete node at index
---
## The listint\_t definition
```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
