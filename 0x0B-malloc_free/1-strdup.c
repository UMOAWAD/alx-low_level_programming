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
	int i, x;

	if (str == NULL)
	{
		return ('\0');
	}

	for (x = 0; str[x] != '\0'; x++)
	{
	}

	s = malloc(sizeof(char) * x + 1);

	if (s == NULL)
	{
		return ('\0');
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
