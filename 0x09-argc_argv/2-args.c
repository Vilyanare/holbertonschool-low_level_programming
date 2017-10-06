#include "holberton.h"
#include<stdio.h>
/**
 *main - print name of file
 *@argc: argument count
 *@argv: argument array
 *Return: always 0
 */
int main(int argc, char *argv[])
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
