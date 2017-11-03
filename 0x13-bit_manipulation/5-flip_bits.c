#include "holberton.h"
/**
  *flip_bits - returns number of different bits from two numbers
  *@n: first number
  *@m: second number
  *Return: number of bits needed to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compare = n ^ m;
	unsigned long int x = sizeof(unsigned long int) * 8;
	unsigned int count = 0;

	for (; x > 0; x--)
	{
		if (compare >> x & 1)
			count++;
	}
	return (count);
}
