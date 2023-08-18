#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal.
 *
 * @n: the length of the line.
 *
 * Return: diagonal line.
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}

		_putchar('\n');
	}
}
