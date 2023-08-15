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

void print_alphabet(void)
{
	char c;

	for  (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
}
