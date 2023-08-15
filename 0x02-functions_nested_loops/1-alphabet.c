#include "main.h"

/**
 * main - print alphabet
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	
	return (0);
}

int print_alphabet()
{
	char c;

	for  (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
}
