#include "main.h"

/**
 * _print_rev_recursion - prints a strind in reverse.
 *
 * @s: the string to print.
 *
 * Return: void.
 */

void _puts_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
