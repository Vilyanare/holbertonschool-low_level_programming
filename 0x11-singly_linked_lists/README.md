# Singly LInked Lists
---
File|Descrition
---|---
lists.h|Header file for this project
0-print\_list|Prints character string of list
1-list\_len.c|Prints number of nodes in list
2-add\_node.c|Add a node to beginning of list
3-add\_node\_end.c|Add a node to end of list
4-free\_list|Free space allocated with malloc
---
## The list\_t definition
```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
