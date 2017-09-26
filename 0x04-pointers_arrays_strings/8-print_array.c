#include<stdio.h>
/**
 *print_array - print n elements of an array
 *@n: elements to print
 *@a: array to print from
 *Return: void
 */
void print_array(int *a, int n)
{
	int x, c;

	for (x = 0; a[x]; x++)
		;
	if (x > n)
		x = n;
	for (c = 0; c < x; c++)
	{
		printf("%d", a[c]);
		if (c != x - 1)
			printf(", ");
	}
	printf("\n");
}
