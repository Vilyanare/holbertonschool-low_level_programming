#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  *main - performs math operations
  *@argc: argument count
  *@argv: array of arguments
  *Return:
  *98 if wrong number of arguments,
  *99 if the operator isn't + - / * %,
  *100 if dividing by 0
  */
int main(int argc, char *argv[])
{
	int ar1, ar3;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}
	ar1 = atoi(argv[1]);
	ar3 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(ar1, ar3));
	return (0);
}
