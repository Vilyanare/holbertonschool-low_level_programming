#include "holberton.h"
/**
  *get_bit - returns the value of a bit at a given index
  *@n: number to retrieve bit from
  *@index: position of bit to retrieve
  *Return: state of bit, -1 on error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return (n & 1);
}
