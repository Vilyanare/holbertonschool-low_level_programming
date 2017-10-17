#include<stdlib.h>
#include "dog.h"
/**
 **_strcpy - copies string from src to dest
 *@dest: address to put string
 *@src: address to take string from
 *Return: char pointer
 */
void _strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];
	dest[x] = '\0';
}
/**
 *_strlen - count length of a string
 *@s: string to count
 *Return: length of string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;
	return (x);
}
/**
 *new_dog - create a new dog struct
 *@name: dogs name
 *@age: age of dog
 *@owner: dogs owner
 *Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int c1, c2;
	struct dog *p;
	char *temp1 = NULL;
	char *temp2 = NULL;

	c1 = _strlen(name);
	c2 = _strlen(owner);
	temp1 = malloc(c1 * sizeof(char) + 1);
	if (temp1 == NULL)
		return (NULL);
	temp2 = malloc(c2 * sizeof(char) + 1);
	if (temp2 == NULL)
	{
		free(temp1);
		return (NULL);
	}
	_strcpy(temp1, name);
	_strcpy(temp2, owner);
	p = malloc(sizeof(struct dog));
	if (p == NULL)
	{
		free(temp1);
		free(temp2);
		return (NULL);
	}
	p->name = temp1;
	p->age = age;
	p->owner = temp2;
	return (p);
}
