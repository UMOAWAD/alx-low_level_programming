#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program's name.
 *
 * @argc: the length of the argv.
 *
 * @argv: the array of passed arguments.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);

	(void) argc;

	return (0);
}
