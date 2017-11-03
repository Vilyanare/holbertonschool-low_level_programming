#include "holberton.h"
/**
  *checkpos - check bit state at position of number
  *@pos: position to check
  *@num: number to check
  *Return: state of bit
  */
int chkpos(int pos, unsigned long int num)
{
	num >>= pos - 1;
	return (num & 1);
}
/**
  *print_binary - print an unsigned long int as binary
  *@n: number to print
  */
void print_binary(unsigned long int n)
{
	int x = sizeof(unsigned long int) * 8;
	char f = 0;

	if (n == 0)/*0 exception handling*/
		_putchar('0');
	for(; x > 0; x--)/*iterate through bits of n*/
	{
		if (chkpos(x, n))/*check for first bit with a 1*/
			f = 1;
		if (f)/*if first bit has been found print binary*/
		{
			if (chkpos(x, n))
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
