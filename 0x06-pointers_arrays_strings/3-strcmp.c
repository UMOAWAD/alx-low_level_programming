#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s: the first string.
 *
 * @s2: the second string.
 *
 * Return: -1, 0, or 1
 */

int _strcmp(char *s1, char *s2)
{
	int i, x;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (x = 0; s2[x] != '\0'; x++)
	{
	}

	if (i < x)
	{
		return (-1);
	}
	else if (i > x)
	{
		return (1);
	}

	return (0);
}
