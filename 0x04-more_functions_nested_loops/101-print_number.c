#include "main.h"
#include <math.h>

/**
 * main - prints an integer.
 *
 * @n: the integer to print.
 *
 * Return: 0
 */

void print_number(int n)
{
	int i, x, c;

	for (i = 10; i <= abs(n); i = i * 10)
	{
	}

	if (n < 0)
	{
		_putchar('-');
	}

	for (c = i / 10; c >= 1; c = c / 10)
	{
		x = n / c;

		if (abs(x) >= 10)
		{
			x = x % 10;
		}

		_putchar(abs(x) + '0');
	}

	_putchar('\n');
}
