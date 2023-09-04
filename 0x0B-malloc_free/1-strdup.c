#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicate string.
 *
 * @str: the original string.
 *
 * Return: a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *s;

	s = malloc(sizeof(char) * sizeof(str));

	if (str == NULL)
	{
		return ('\0');
	}
	else if (s == NULL)
	{
		return ('\0');
	}

	s = str;

	return (s);
}
