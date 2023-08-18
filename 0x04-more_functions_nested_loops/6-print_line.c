#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: The length of the line.
 *
 * Return: straight line.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('-');
		}
	}

	_putchar('\n');
}
