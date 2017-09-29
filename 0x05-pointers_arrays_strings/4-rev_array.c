#include"holberton.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: array to be reversed
 *@n: number of elements in an array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int c, x;
	int temp;

	x = n - 1;
	for (c = 0; c < x; c++)
	{
		temp = a[c];
		a[c] = a[x];
		a[x] = temp;
		x--;
	}
}
