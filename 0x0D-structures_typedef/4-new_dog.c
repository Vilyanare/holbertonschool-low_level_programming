#include<stdlib.h>
#include "dog.h"
/**
 *new_dog - create a new dog struct
 *@name: dogs name
 *@age: age of dog
 *@owner: dogs owner
 *Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *p;

	p = malloc(sizeof(struct dog));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
