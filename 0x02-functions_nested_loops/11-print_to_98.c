#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"
/**
 *print_to_98 - Print all numbers from n to 98
 *@n: starting number to print from
 *Return: void
 */
void print_to_98(int n)
{
	int count, x;

	if (n > 98)
	{
		for (count = n; count >= 98; count--)
		{
			x = count;
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
		putchar('\n');
	}
	else
	{
		for (count = n; count <= 98; count++)
		{
			x = count;
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
		putchar('\n');
	}
}
