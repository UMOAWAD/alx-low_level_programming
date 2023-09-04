#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string.
 *
 * @s2: the second string.
 *
 * Return: a pointer to the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, x = 0, c = 0, d = 0;
	char *s;

	while (s1[i])
	{
		i++;
	}

	while (s2[x])
	{
		x++;
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	s = malloc(sizeof(char) * (i + x) + 1);

	if (s == NULL)
	{
		return ('\0');
	}

	for (c = 0; c < i; c++)
	{
		s[c] = s1[c];
	}

	for (d = 0; d < x; d++)
	{
		s[c] = s2[d];
		c++;
	}

	return (s);
}
