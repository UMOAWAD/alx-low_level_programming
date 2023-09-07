#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string with some conditions.
 *
 * @s1: the first string.
 *
 * @s2: the second string.
 *
 * Return: a pointer to the resulting string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i1, i2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
	}

	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
	}

	i2--;
	
	if (i2 <= n)
	{
		s = malloc(sizeof(char) * (i1 + i2) + 1);
	}
	else
	{
		s = malloc(sizeof(char) * i1 + n + 1);
	}

	if (s == NULL)
		return (NULL);

	for (i = 0; i < i1; i++)
		s[i] = s1[i];

	if (i2 <= n)
	{
		for (j = 0; j < i2; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < 32; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}

	s[i] = '\0';

	return (s);
}
