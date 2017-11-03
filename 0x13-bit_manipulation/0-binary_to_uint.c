#include "holberton.h"
/**
  *binary_to_uint - convert binary string to unsigned int
  *@b: string to be converted
  *Return: converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, x = 0;

	for(; b[x]; x++)/*check for end of string*/
	{
		if (b[x] != '1' && b[x] != '0')/*if not 0 or 1 return 0*/
			return (0);
		num <<= 1;/*insert a bit*/
		if (b[x] == '1')/*if 1 set the bit to a 1*/
			num |= 1;
	}
	return (num);/*return the number*/
}
