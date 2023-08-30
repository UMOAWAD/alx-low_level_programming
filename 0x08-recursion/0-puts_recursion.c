#include "main.h"

/**
 * _puts_recursion - prints a string, followed bya new line.
 *
 * @s: the string to print.
 *
 * Return: empty.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	else
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(s += 1);
}
