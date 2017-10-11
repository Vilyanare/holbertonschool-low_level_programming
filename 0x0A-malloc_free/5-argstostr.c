#include"holberton.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *argstostr - concatenates all arguments of my program
 *@ac: argument count
 *@av: argument variable array
 *Return: pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int x, sum = 0, c;
	char *p = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (c = 0; av[x][c]; c++)
			;
		sum += c + 1;
	}
	p = malloc(sum * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	sum = 0;
	for (x = 0; x < ac; x++)
	{
		for (c = 0; av[x][c]; c++)
		{
			p[sum] = av[x][c];
			sum++;
		}
		p[sum] = '\n';
		sum++;
	}
	p[sum] = '\0';
	return (p);
}
