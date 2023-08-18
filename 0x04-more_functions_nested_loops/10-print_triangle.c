#include "main.h"

/**
 * print_triangle - prints a triangle.
 *
 * @size: the size of the triangle.
 *
 * Return: triangle.
 */

void print_triangle(int size)
{
	int i, c, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (c = size - i; c >= 0; c--)
			{
				_putchar(32);
			}

			for (x = i; x >= 0; x--)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
