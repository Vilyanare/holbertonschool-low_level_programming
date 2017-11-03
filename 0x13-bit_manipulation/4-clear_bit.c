#include "holberton.h"
/**
  *clear_bit - set value of bit at index of number to 0
  *@n: number to change value of
  *@index: bit to change
  *Return: 1 if worked -1 if error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL || index > sizeof(unsigned long int) * 8)
		return (-1);
	mask <<= index;
	*n &= ~mask;
	return(1);
}

