#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: the first string.
 *
 * @src: the string to append.
 *
 * @n: the maximum number of Bytes.
 *
 * Return: the resulting dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (x = 0; src[x] != '\0'; x++)
	{
		if (x < n)
		{
			dest[i] = src[x];
			i++;
		}
	}

	if (x < n)
	{
		i++;
		dest[i] = '\0';
	}

	return (dest);
}
