#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Selects the right function.
 *
 * @s: The operator.
 *
 * Return: A pointer to the selected function.
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

	while (strcmp(s, ops[i].op) != 0 && i < 5)
	{
		i++;
	}

	if (i == 5)
	{
		return (NULL);
	}

	return (ops[i].f);
}
