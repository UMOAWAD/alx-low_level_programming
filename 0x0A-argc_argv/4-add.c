#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 *
 * @argc: the number of arguments passed.
 *
 * @argv: the array of arguments.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int i, j = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		j += atoi(argv[i]);
	}

	printf("%d\n", j);

	return (0);
}
