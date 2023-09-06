#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into the program.
 *
 * @argc: the number of arguments.
 *
 * @argv: the array of arguments.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc);

	(void) argv;

	return (0);
}
