#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/*
 * main - performs simple operations.
 *
 * @calc: a pointer to the function necessary.
 *
 * @argc: The length of the arguments array.
 *
 * @argv: The arguments array.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int a;
	int b;
	int op;
	char *ops;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi( argv[3]);
	op = atoi(argv[2]);
	ops = argv[2];

	if (op != '+' || op != '-' || op != '*' || op != '/' || op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(ops)(a, b);

	printf("%d\n", result);

	return (0);
}
