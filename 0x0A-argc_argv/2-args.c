#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the received arguments.
 *
 * @argc: the number of arguments passed.
 *
 * @argv: the array of arguments.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
