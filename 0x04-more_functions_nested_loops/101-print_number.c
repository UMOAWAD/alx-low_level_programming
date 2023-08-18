#include "main.h"

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

	if (n < 0)
	{
		_putchar('-');
		
		n *= -1;
	for (i = 10; i <= n; i = i * 10)
	{
	}

	for (c = i / 10; c >= 1; c = c / 10)
	{
		x = n / c;

		if (x >= 10)
		{
			x = x % 10;
		}

		_putchar(x + '0');
	}

	_putchar('\n');
}
