#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: the number of arguments passed.
 *
 * @argv: the array of arguments.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int i, j, res;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}

	i = *argv[1];
	j = *argv[2];
	res = i * j;

	printf("%d\n", res);

	return (0);
}
