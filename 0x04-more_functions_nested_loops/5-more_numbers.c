#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14, followed by new line.
 *
 * Return: the numbers.
 */

void more_numbers(void)
{
	int i = 0;
	int c = 0;
	int x = 0;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 9; c++)
		{
			_putchar(c + '0');
			
			if (c == 9)
			{
				for (x = 0; x <= 4; x++)
				{
					_putchar('1');
					_putchar(x + '0');
				}
			}
		}
	}
}
