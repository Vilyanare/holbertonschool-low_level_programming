#include "holberton.h"
/**
 *get_endianness - checks the endianness of machine
 *Return: 1 if little 0 if big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
