#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * get_op_func - Selects the right function.
 *
 * Return: A pointer to the selected function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"+", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while(s != ops[i].op && i < 6)
	{
		i++;
	}

	if (i == 6)
	{
		return NULL;
	}

	return (ops[i].f);
}
