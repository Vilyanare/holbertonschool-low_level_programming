#include"holberton.h"
#include<stdio.h>
/**
 *print_diagsums - prints sum of diagonals on a square matrix
 *@a: 0,0 matrix address
 *@size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x, sum;

	for (x = 0; x < size * size; x += size + 1)
		sum += a[x];
	printf("%d, ", sum);
	sum = 0;
	for (x = size - 1; x < size * size - 1; x += size - 1)
		sum += a[x];
	printf("%d\n", sum);
}
