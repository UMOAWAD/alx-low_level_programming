#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: the first string.
 *
 * @src: the string to append.
 *
 * Return: empty.
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0;  dest[i] != '\0'; i++)
	{
	}

	for (n = 0; src[n] = '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}

	i++;

	dest[i] = '\0';

	return (dest);
}
