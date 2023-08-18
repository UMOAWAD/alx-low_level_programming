#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: the size of the square.
 *
 * Return: the square.
 */

void print_square(int size)
{
	int i, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
