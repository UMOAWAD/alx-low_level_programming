#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers.
 *
 * @argc: the number of arguments passed.
 *
 * @argv: the array of arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j = 0, k;
	char *e;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			j += atoi(e);
		}
	}

	printf("%d\n", j);

	return (0);
}
