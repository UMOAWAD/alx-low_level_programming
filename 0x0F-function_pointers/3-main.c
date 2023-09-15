#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/*
 * main - performs simple operations.
 *
 * @calc: a pointer to the function necessary.
 *
 * @num1: The first integer.
 *
 * @operator: The operator.
 *
 * @num2: the second integer.
 *
 * Return: 0;
 */

int main(int argc, char **argv)
{
	int a;
	int b;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi( argv[3]);
	op = argv[2];

	if (op != "+" || op != "-" || op != "*" || op != "/" || op != "%")
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == "/" || op == "%") && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	int result = get_op_func(op)(a, b);

	printf("%d\n", result);

	return (0);
}
