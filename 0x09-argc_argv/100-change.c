#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *main - prints number of coins to make change from argument
 *@argc: argument count
 *@argv: argument array
 *Return: 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	if (i >= 25)
	{
		sum += i / 25;
		i %= 25;
	}
	if (i >= 10)
	{
		sum += i / 10;
		i %= 10;
	}
	if (i >= 5)
	{
		sum += i / 5;
		i %= 5;
	}
	if (i >= 2)
	{
		sum += i / 2;
		i %= 2;
	}
	if (i > 0)
		sum += i / 1;
	printf("%d\n", sum);
	return (0);
}
