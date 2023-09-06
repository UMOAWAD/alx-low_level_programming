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
	int i = 0;

	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
