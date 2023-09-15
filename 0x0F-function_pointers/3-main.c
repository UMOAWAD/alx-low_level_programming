#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations.
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
	char *ops;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ops = argv[2];

	if (!get_op_func(ops))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ops == '/' || *ops == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(ops)(a, b);

	printf("%d\n", result);

	return (0);
}
