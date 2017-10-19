#include <stdlib.h>
#include "3-calc.h"
/**
  *get_op_func - gets address of function passed by s
  *@s: symbol of operator function to return
  *Return: returns adress to operator function or NULL
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
