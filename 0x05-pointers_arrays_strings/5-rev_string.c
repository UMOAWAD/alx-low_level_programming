#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: the string to reverse.
 *
 * Return: empty.
 */

void rev_string(char *s)
{
	char *a = s;
	int i;
	int ii = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	i--;

	while (i >= 0)
	{
		s[ii] = a[i];
		i--;
		ii++;
	}
}
