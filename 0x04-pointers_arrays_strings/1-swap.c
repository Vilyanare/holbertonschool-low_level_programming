#include"holberton.h"
/**
 *swap_int - swap the values of the two inputs
 *@a: input one
 *@b: Input two
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
