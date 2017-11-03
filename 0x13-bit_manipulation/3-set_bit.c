#include "holberton.h"
/**
  *set_bit - set the value of a bit to 1 at a given index
  *@n: pointer to the number to change
  *@index: bit of number to change
  *Return: 1 if worked -1 if error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL || index > sizeof(unsigned long int) * 8)
		return (-1);
	mask <<= index;
	*n |= mask;
	return (1);
}
