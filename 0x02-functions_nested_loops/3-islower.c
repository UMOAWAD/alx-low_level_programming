#include "main.h"
#include <ctype.h>

/**
 * islower - prints 1 if c is lowercase
 *
 * Return: 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		_putchar('1');
	} else
	{
		_putchar('0');
	}

	return (0);
}
