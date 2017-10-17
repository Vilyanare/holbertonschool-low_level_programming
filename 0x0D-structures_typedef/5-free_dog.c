#include"dog.h"
#include<stdlib.h>
/**
 *free_dog - SET THE DOGGIES FREE
 *@d: address of imprisoned dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
