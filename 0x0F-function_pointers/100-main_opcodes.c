#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself.
 *
 * @argc: The length of the arguments array.
 *
 * @argv: The arguments array.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
