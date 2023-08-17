#include "main.h"
#include <ctype.h>

/**
 * _islower - prints 1 if c is parameter is lowercase
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}
