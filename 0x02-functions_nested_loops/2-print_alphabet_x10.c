#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);

			if (c == 'z')
			{
				_putchar('\n');
			}
		}
	}
}
