#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks if the character is uppercase.
 *
 * @c: The character to check.
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}

	return (0);
}
