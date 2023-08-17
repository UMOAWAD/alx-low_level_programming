#include "main.h"
#include <ctype.h>

/**
 * islower - prints 1 if c is lowercase
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	} else
	{
		return (0);
	}
}
